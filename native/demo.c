/* demo.c — rasterise un symbole en PGM (0 = fond, 255 = encre) pour vérifier la chaîne native à l'œil.
 *   mira_demo [nom] [taille] [outline|fill] [thin|light|regular|medium|semibold|bold]  →  out.pgm */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mira_symbols.h"

int main(int argc, char **argv) {
  static const char *names[] = { "thin", "light", "regular", "medium", "semibold", "bold" };
  const char *name = argc > 1 ? argv[1] : "trash";
  int size = argc > 2 ? atoi(argv[2]) : 96, id, w;
  MiraShape shape = (argc > 3 && strcmp(argv[3], "fill") == 0) ? MIRA_FILL : MIRA_OUTLINE;
  MiraWeight weight = MIRA_REGULAR;
  unsigned char *buf;
  FILE *f;
  for (w = 0; argc > 4 && w < 6; w++) if (strcmp(argv[4], names[w]) == 0) weight = (MiraWeight)w;
  id = mira_symbol_find(name);
  if (id < 0) { fprintf(stderr, "symbole inconnu : %s (%d symboles)\n", name, mira_symbol_count()); return 1; }
  if (size < 1) size = 96;
  buf = (unsigned char *)malloc((size_t)size * (size_t)size);
  if (buf == NULL || mira_symbol_raster(id, weight, shape, size, buf, size) != 0) { fprintf(stderr, "échec du rendu\n"); return 1; }
  f = fopen("out.pgm", "wb");
  if (f == NULL) return 1;
  fprintf(f, "P5\n%d %d\n255\n", size, size);
  fwrite(buf, 1, (size_t)size * (size_t)size, f);
  fclose(f);
  printf("out.pgm — %s · %s · %s · %d px (collection %s, %d tags)\n", name, shape == MIRA_FILL ? "fill" : "outline", names[weight], size,
         mira_symbol_info(id)->collection, mira_symbol_info(id)->tag_count);
  free(buf);
  return 0;
}
