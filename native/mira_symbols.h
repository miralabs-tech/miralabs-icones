/*
 * mira_symbols.h — Miralabs Icônes, moteur de rendu natif de référence (C99, single-header).
 *
 *   #define MIRA_SYMBOLS_IMPLEMENTATION      // dans UN seul fichier .c (voir mira_symbols.c)
 *   #include "mira_symbols.h"
 *
 * Implémente l'IR décrit dans src/ir.js au-dessus de nanosvg (vendor/, licence zlib) et des données
 * générées par `bun run build` (mira_symbols_data.h). Rend un MASQUE DE COUVERTURE 8 bits
 * (0 = transparent, 255 = plein), à la FreeType : la teinte, le format de pixel, le GPU éventuel et la
 * composition appartiennent à l'hôte. CPU, aucun état global, aucune allocation persistante.
 *
 * Hôte GDI (BGRA 0x00RRGGBB) :   dst = dst + (teinte − dst) · cov · a / 255²
 * Hôte GPU :                     téléverser le masque en texture R8, teinter dans le shader.
 */
#ifndef MIRA_SYMBOLS_H
#define MIRA_SYMBOLS_H

#ifndef MIRA_API
#  if defined(_WIN32) && defined(MIRA_SYMBOLS_SHARED)
#    ifdef MIRA_SYMBOLS_IMPLEMENTATION
#      define MIRA_API __declspec(dllexport)
#    else
#      define MIRA_API __declspec(dllimport)
#    endif
#  else
#    define MIRA_API
#  endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef enum MiraWeight { MIRA_THIN = 0, MIRA_LIGHT, MIRA_REGULAR, MIRA_MEDIUM, MIRA_SEMIBOLD, MIRA_BOLD } MiraWeight;
typedef enum MiraShape { MIRA_OUTLINE = 0, MIRA_FILL } MiraShape;

typedef struct MiraSymbolInfo {
  const char *name;        /* nom SF : "square.and.arrow.up" */
  const char *collection;  /* identifiant de collection : "actions" */
  const char *const *tags; /* synonymes de recherche (UTF-8) */
  int tag_count;
  int rtl;                 /* 1 : à refléter horizontalement en écriture droite-à-gauche */
} MiraSymbolInfo;

MIRA_API int mira_symbol_count(void);
MIRA_API int mira_symbol_find(const char *name);          /* index du symbole, ou -1 */
MIRA_API const MiraSymbolInfo *mira_symbol_info(int id);   /* NULL si id invalide */
MIRA_API float mira_weight_stroke(MiraWeight weight);      /* largeur de trait de la graisse, en unités de grille (24) */

/* Rasterise le symbole `id` dans `out` : size_px lignes de size_px octets de couverture, `stride` octets
 * entre deux lignes (>= size_px). Retourne 0, ou -1 (argument invalide, mémoire). */
MIRA_API int mira_symbol_raster(int id, MiraWeight weight, MiraShape shape, int size_px, unsigned char *out, int stride);
/* Idem avec une largeur de trait libre (unités de grille) : graisse intermédiaire ou trait optique à petite taille. */
MIRA_API int mira_symbol_raster_stroke(int id, float stroke_width, MiraShape shape, int size_px, unsigned char *out, int stride);

#ifdef __cplusplus
}
#endif
#endif /* MIRA_SYMBOLS_H */

/* ────────────────────────────────────────────────────────────────────────── */
#ifdef MIRA_SYMBOLS_IMPLEMENTATION
#ifndef _CRT_SECURE_NO_WARNINGS
#  define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define NANOSVG_IMPLEMENTATION
#include "vendor/nanosvg.h"
#define NANOSVGRAST_IMPLEMENTATION
#include "vendor/nanosvgrast.h"

/* Une opération de peinture de l'IR (src/ir.js). */
typedef struct MiraOp {
  unsigned char kind;       /* 0 = fill, 1 = stroke */
  float wk, wc;             /* stroke : largeur = wk·sw + wc ; <= 0 → rien */
  const char *d;            /* chemin SVG, grille 24, extrémités/jointures rondes, remplissage nonzero */
  const struct MiraOp *cut; /* formes soustraites de CETTE opération (NULL si aucune) */
  int cut_count;
} MiraOp;

typedef struct MiraSymbolRec {
  MiraSymbolInfo info;
  const MiraOp *outline; int outline_count;
  const MiraOp *fill;    int fill_count;
} MiraSymbolRec;

#include "mira_symbols_data.h"

int mira_symbol_count(void) { return MIRA_SYMBOL_COUNT; }

int mira_symbol_find(const char *name) {
  int i;
  if (name == NULL) return -1;
  for (i = 0; i < MIRA_SYMBOL_COUNT; i++)
    if (strcmp(MIRA_SYMBOLS[i].info.name, name) == 0) return i;
  return -1;
}

const MiraSymbolInfo *mira_symbol_info(int id) {
  return (id < 0 || id >= MIRA_SYMBOL_COUNT) ? NULL : &MIRA_SYMBOLS[id].info;
}

float mira_weight_stroke(MiraWeight weight) {
  return ((int)weight < 0 || (int)weight > (int)MIRA_BOLD) ? MIRA_WEIGHT_STROKE[MIRA_REGULAR] : MIRA_WEIGHT_STROKE[(int)weight];
}

/* Séparateur décimal écrit à la main : printf("%f") suit la locale et pourrait produire une virgule,
 * que nanosvg lirait comme un séparateur d'arguments. */
static int mira__fmt_float(char *dst, float v) {
  int neg = v < 0.f;
  int m = (int)(fabsf(v) * 1000.f + 0.5f);
  return sprintf(dst, "%s%d.%03d", neg ? "-" : "", m / 1000, m % 1000);
}

/* Rasterise UNE opération en couverture 8 bits (cov, size×size). nanosvg ne lit que des documents :
 * on lui fabrique un <svg> minimal par opération, puis on garde le canal alpha du RGBA produit. */
static int mira__raster_op(NSVGrasterizer *rast, const MiraOp *op, float sw, float scale, int size,
                           unsigned char *cov, unsigned char *rgba) {
  size_t n = (size_t)size * (size_t)size, dlen = strlen(op->d), i;
  char *svg, *p, wbuf[32];
  NSVGimage *img;
  float w = 0.f;
  if (op->kind == 1) {
    w = op->wk * sw + op->wc;
    if (w <= 0.f) { memset(cov, 0, n); return 0; }
  }
  svg = (char *)malloc(dlen + 320);
  if (svg == NULL) return -1;
  p = svg;
  p += sprintf(p, "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"24\" height=\"24\" viewBox=\"0 0 24 24\"><path d=\"");
  memcpy(p, op->d, dlen);
  p += dlen;
  if (op->kind == 0) {
    p += sprintf(p, "\" fill=\"#fff\" stroke=\"none\"/></svg>");
  } else {
    mira__fmt_float(wbuf, w);
    p += sprintf(p, "\" fill=\"none\" stroke=\"#fff\" stroke-width=\"%s\" stroke-linecap=\"round\" stroke-linejoin=\"round\"/></svg>", wbuf);
  }
  *p = '\0';
  img = nsvgParse(svg, "px", 96.0f); /* nsvgParse modifie la chaîne : elle est à nous */
  free(svg);
  if (img == NULL) return -1;
  memset(rgba, 0, n * 4);
  nsvgRasterize(rast, img, 0.f, 0.f, scale, rgba, size, size, size * 4);
  nsvgDelete(img);
  for (i = 0; i < n; i++) cov[i] = rgba[i * 4 + 3];
  return 0;
}

static int mira__raster(const MiraSymbolRec *rec, float sw, MiraShape shape, int size, unsigned char *out, int stride) {
  const MiraOp *ops = (shape == MIRA_FILL) ? rec->fill : rec->outline;
  int count = (shape == MIRA_FILL) ? rec->fill_count : rec->outline_count;
  size_t n = (size_t)size * (size_t)size, i;
  unsigned char *acc, *cov, *cut, *rgba;
  NSVGrasterizer *rast;
  float scale = (float)size / (float)MIRA_GRID;
  int k, y, rc = 0;
  if (size <= 0 || stride < size || out == NULL) return -1;
  rast = nsvgCreateRasterizer();
  if (rast == NULL) return -1;
  acc = (unsigned char *)calloc(n, 1);
  cov = (unsigned char *)malloc(n);
  cut = (unsigned char *)malloc(n);
  rgba = (unsigned char *)malloc(n * 4);
  if (acc == NULL || cov == NULL || cut == NULL || rgba == NULL) rc = -1;
  for (k = 0; rc == 0 && k < count; k++) {
    const MiraOp *op = &ops[k];
    int c;
    rc = mira__raster_op(rast, op, sw, scale, size, cov, rgba);
    /* cut : couverture(op) ← couverture(op) × (1 − couverture(cut)) */
    for (c = 0; rc == 0 && c < op->cut_count; c++) {
      rc = mira__raster_op(rast, &op->cut[c], sw, scale, size, cut, rgba);
      if (rc == 0) for (i = 0; i < n; i++) cov[i] = (unsigned char)((cov[i] * (255 - cut[i]) + 127) / 255);
    }
    /* union : acc ← acc + cov − acc·cov */
    if (rc == 0) for (i = 0; i < n; i++) {
      int a = acc[i], b = cov[i], u = a + b - (a * b + 127) / 255;
      acc[i] = (unsigned char)(u > 255 ? 255 : u);
    }
  }
  if (rc == 0) for (y = 0; y < size; y++) memcpy(out + (size_t)y * (size_t)stride, acc + (size_t)y * (size_t)size, (size_t)size);
  free(acc); free(cov); free(cut); free(rgba);
  nsvgDeleteRasterizer(rast);
  return rc;
}

int mira_symbol_raster_stroke(int id, float stroke_width, MiraShape shape, int size_px, unsigned char *out, int stride) {
  if (id < 0 || id >= MIRA_SYMBOL_COUNT) return -1;
  return mira__raster(&MIRA_SYMBOLS[id], stroke_width, shape, size_px, out, stride);
}

int mira_symbol_raster(int id, MiraWeight weight, MiraShape shape, int size_px, unsigned char *out, int stride) {
  return mira_symbol_raster_stroke(id, mira_weight_stroke(weight), shape, size_px, out, stride);
}

#endif /* MIRA_SYMBOLS_IMPLEMENTATION */
