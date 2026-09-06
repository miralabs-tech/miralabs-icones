// Audit géométrique de tout le jeu, dans le runner navigateur (vitest --browser).
// Rend chaque symbole sur un canvas et vérifie : non vide, non rogné, centré.
import { describe, expect, it } from "vitest";
import { SYMBOLS } from "../../dist/data.js";
import { symbolToString } from "../../dist/render.js";

// Décalages volontaires (badge, cornet, traits de mouvement…) : nom → tolérance x/y en unités de grille.
const ALLOW: Record<string, [number, number]> = { "bell.badge": [1.2, 1.6], megaphone: [1, 0.8], "hand.wave": [1, 0.8], bird: [1, 0.8], "moon.stars": [0.8, 0.8] };

const S = 96, U = S / 24;
const load = (svg: string): Promise<HTMLImageElement> => new Promise((res, rej) => { const img = new Image(); img.onload = () => res(img); img.onerror = rej; img.src = `data:image/svg+xml;charset=utf-8,${encodeURIComponent(svg)}`; });

interface Ink { n: number; x0: number; y0: number; x1: number; y1: number; cx: number; cy: number; }

async function ink(sym: (typeof SYMBOLS)[number]): Promise<Ink> {
  const canvas = document.createElement("canvas"); canvas.width = canvas.height = S;
  const ctx = canvas.getContext("2d")!;
  const svg = symbolToString(sym, { weight: "regular", shape: "outline", size: `${S}px` }).replace(/currentColor/g, "#000").replace("<svg ", `<svg width="${S}" height="${S}" `);
  ctx.drawImage(await load(svg), 0, 0, S, S);
  const d = ctx.getImageData(0, 0, S, S).data;
  let x0 = S, y0 = S, x1 = -1, y1 = -1, n = 0;
  for (let y = 0; y < S; y++) for (let x = 0; x < S; x++) if (d[(y * S + x) * 4 + 3] > 40) { n++; x0 = Math.min(x0, x); x1 = Math.max(x1, x); y0 = Math.min(y0, y); y1 = Math.max(y1, y); }
  return { n, x0, y0, x1, y1, cx: (x0 + x1 + 1) / 2 / U - 12, cy: (y0 + y1 + 1) / 2 / U - 12 };
}

describe("symboles", () => {
  for (const sym of SYMBOLS) {
    it(sym.name, async () => {
      const m = await ink(sym);
      const [tx, ty] = ALLOW[sym.name] ?? [0.6, 0.8];
      expect(m.n, "glyphe vide").toBeGreaterThan(0);
      expect(m.x0 > 0 && m.y0 > 0 && m.x1 < S - 1 && m.y1 < S - 1, "glyphe rogné").toBe(true);
      expect(Math.abs(m.cx), `décentré en x de ${m.cx.toFixed(2)}`).toBeLessThanOrEqual(tx);
      expect(Math.abs(m.cy), `décentré en y de ${m.cy.toFixed(2)}`).toBeLessThanOrEqual(ty);
    });
  }
  it("noms uniques", () => {
    const names = SYMBOLS.map((s) => s.name);
    expect(new Set(names).size).toBe(names.length);
  });
});
