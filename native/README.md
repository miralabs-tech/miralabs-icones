# `native/` — rendu natif de référence (C99)

Un seul en-tête, `mira_symbols.h`, qui implémente l'IR de `src/ir.ts` au-dessus de [nanosvg](https://github.com/memononen/nanosvg) (`vendor/`, licence zlib). Les données viennent de `mira_symbols_data.h`, **généré** par `bun run build` à partir de `src/data.ts` — ne pas l'éditer.

Le moteur rend un **masque de couverture 8 bits** (0 transparent → 255 plein), comme FreeType rend un glyphe : la couleur, le format de pixel, la composition et le GPU éventuel restent du côté de l'hôte. Aucun état global, aucune allocation persistante, CPU seulement (un icône de 24 px se rasterise en quelques dizaines de microsecondes ; mettre en cache par `(id, graisse, forme, taille)`).

## API

```c
int   mira_symbol_count(void);
int   mira_symbol_find(const char *name);                 /* index, ou -1 */
const MiraSymbolInfo *mira_symbol_info(int id);           /* nom, collection, tags, rtl */
float mira_weight_stroke(MiraWeight w);                   /* 1 · 1.25 · 1.5 · 1.75 · 2 · 2.4 */
int   mira_symbol_raster(int id, MiraWeight w, MiraShape s, int size_px, unsigned char *out, int stride);
int   mira_symbol_raster_stroke(int id, float stroke_width, MiraShape s, int size_px, unsigned char *out, int stride);
```

`MiraWeight` : `MIRA_THIN … MIRA_BOLD`. `MiraShape` : `MIRA_OUTLINE`, `MIRA_FILL`. `out` reçoit `size_px` lignes de `size_px` octets, espacées de `stride` octets.

## Compiler

```sh
cd native && cmake -B build && cmake --build build --config Release
./build/mira_demo trash 96 fill semibold      # → out.pgm
cmake -B build-shared -DBUILD_SHARED_LIBS=ON  # → mira_symbols.dll / libmira_symbols.so
```

Ou sans CMake : un fichier `.c` qui fait `#define MIRA_SYMBOLS_IMPLEMENTATION` puis `#include "mira_symbols.h"` (MSVC : `/utf-8`, les tags sont en UTF-8).

## Depuis un autre langage

**Python (ctypes)**

```python
import ctypes
lib = ctypes.CDLL("./build-shared/libmira_symbols.so")
idx = lib.mira_symbol_find(b"trash")
buf = (ctypes.c_ubyte * (24 * 24))()
lib.mira_symbol_raster(idx, 2, 0, 24, buf, 24)   # regular, outline
```

**Rust** : préférer `tiny-skia` sur `dist/ir.json` (une cinquantaine de lignes, pas de FFI) ; sinon `bindgen` sur cet en-tête.

**LurLang (runner App-tier)** — une native au-dessus de l'en-tête, dans le style de `host_fill_rect` :

```c
/* drawSymbol(name: string, x, y, size, weight, fill, r, g, b, a) — teinte + alpha-blend dans le DIB. */
static LurResult host_draw_symbol(LurVM *vm) {
  int64_t a = lur_pop_int(vm), b = lur_pop_int(vm), g = lur_pop_int(vm), r = lur_pop_int(vm);
  int64_t fill = lur_pop_int(vm), weight = lur_pop_int(vm), size = lur_pop_int(vm), y0 = lur_pop_int(vm), x0 = lur_pop_int(vm);
  char *name = NULL; size_t len = 0;
  if (lur_pop_string(vm, &name, &len) == LUR_OK && name != NULL) {
    int id = mira_symbol_find(name), s = (int)size, px, py;
    unsigned char *cov = id >= 0 ? cache_get(id, weight, fill, s) : NULL;   /* mira_symbol_raster une fois par clé */
    if (cov != NULL) for (py = 0; py < s; py++) for (px = 0; px < s; px++) {
      int c = cov[py * s + px] * (int)a / 255, X = (int)x0 + px, Y = (int)y0 + py;
      if (c == 0 || X < 0 || Y < 0 || X >= g_fb_w || Y >= g_fb_h) continue;
      uint32_t *d = &g_bits[Y * g_fb_w + X];
      int dr = (*d >> 16) & 255, dg = (*d >> 8) & 255, db = *d & 255;
      *d = pack_rgb(dr + ((int)r - dr) * c / 255, dg + ((int)g - dg) * c / 255, db + ((int)b - db) * c / 255);
    }
  }
  lur_free_string(name);
  lur_push_int(vm, 0);
  return LUR_OK;
}
```

Déclarer `native drawSymbol(name: string, x: int, y: int, size: int, weight: int, fill: int, r: int, g: int, b: int, a: int)` dans `app.natives` et lier `mira_symbols.c` au runner. C'est une extension de la surface App-tier (ADR-070) : n'importe quelle UI a besoin d'icônes et d'alpha, ce n'est pas un besoin Embed-tier.

## Sans C du tout

`dist/ir.json` décrit chaque symbole comme une liste d'opérations `{ kind, d, w: [k, c], cut }` : n'importe quel rasteriseur de chemins (Skia, Cairo, tiny-skia, Blend2D, ThorVG, `<canvas>`) l'implémente en une boucle — trait de largeur `k·sw + c` (≤ 0 : rien), `cut` multiplie la couverture par `1 − couverture(cut)`, union ordonnée `a + b − a·b`. Extrémités et jointures rondes, remplissage nonzero, grille 24.
