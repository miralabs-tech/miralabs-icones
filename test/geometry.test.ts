// Rendered with resvg; the Chromium canvas version is test/browser/symbols.vitest.ts.
import { describe, expect, it } from "bun:test";
import { SYMBOLS } from "../src/data.js";
import { symbolToString } from "../src/render.js";
import { rasterize } from "./helpers/raster.js";

const ALLOW: Record<string, [number, number]> = { "bell.badge": [1.2, 1.6], megaphone: [1, 0.8], "hand.wave": [1, 0.8], bird: [1, 0.8], "moon.stars": [0.8, 0.8] };
const WEIGHTS = ["thin", "light", "regular", "medium", "semibold", "bold"] as const;
const SHAPES = ["outline", "fill"] as const;
const S = 96;

const render = (sym: (typeof SYMBOLS)[number], weight: (typeof WEIGHTS)[number], shape: (typeof SHAPES)[number]) =>
  rasterize(symbolToString(sym, { weight, shape, size: `${S}px` }), S);

describe("geometrie", () => {
  for (const sym of SYMBOLS) {
    it(sym.name, () => {
      const m = render(sym, "regular", "outline");
      const [tx, ty] = ALLOW[sym.name] ?? [0.6, 0.8];
      expect(m.n, "glyphe vide").toBeGreaterThan(0);
      expect(m.x0 > 0 && m.y0 > 0 && m.x1 < S - 1 && m.y1 < S - 1, "glyphe rogné").toBe(true);
      expect(Math.abs(m.cx), `décentré en x de ${m.cx.toFixed(2)}`).toBeLessThanOrEqual(tx);
      expect(Math.abs(m.cy), `décentré en y de ${m.cy.toFixed(2)}`).toBeLessThanOrEqual(ty);

      const round2 = (n: number) => Math.round(n * 100) / 100;
      expect({ n: m.n, x0: m.x0, y0: m.y0, x1: m.x1, y1: m.y1, cx: round2(m.cx), cy: round2(m.cy) }).toMatchSnapshot();
    });
  }

  for (const sym of SYMBOLS) {
    for (const w of WEIGHTS) {
      for (const shape of SHAPES) {
        it(`${sym.name} ${w} ${shape}`, () => {
          const m = render(sym, w, shape);
          expect(m.n, "glyphe vide").toBeGreaterThan(0);
          expect(m.x0 > 0 && m.y0 > 0 && m.x1 < S - 1 && m.y1 < S - 1, "glyphe rogné").toBe(true);
        });
      }
    }
  }

  it("noms uniques", () => {
    const names = SYMBOLS.map((s) => s.name);
    expect(new Set(names).size).toBe(names.length);
  });
});
