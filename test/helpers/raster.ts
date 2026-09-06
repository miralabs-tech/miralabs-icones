import { Resvg } from "@resvg/resvg-js";

export interface Ink { n: number; x0: number; y0: number; x1: number; y1: number; cx: number; cy: number; }

export function rasterize(svg: string, size = 96): Ink {
  const clean = svg.replace(/currentColor/g, "#000").replace(/\sstyle="[^"]*"/, "");
  // loadSystemFonts scans every OS font on each render (200-450ms); disabled, the whole audit runs in ~0.2s instead of minutes.
  const resvg = new Resvg(clean, { font: { loadSystemFonts: false }, fitTo: { mode: "width", value: size } });
  const { width, height, pixels } = resvg.render();
  const U = size / 24;
  let x0 = width, y0 = height, x1 = -1, y1 = -1, n = 0;
  for (let y = 0; y < height; y++) {
    for (let x = 0; x < width; x++) {
      if (pixels[(y * width + x) * 4 + 3] > 40) {
        n++;
        if (x < x0) x0 = x;
        if (x > x1) x1 = x;
        if (y < y0) y0 = y;
        if (y > y1) y1 = y;
      }
    }
  }
  return { n, x0, y0, x1, y1, cx: (x0 + x1 + 1) / 2 / U - 12, cy: (y0 + y1 + 1) / 2 / U - 12 };
}
