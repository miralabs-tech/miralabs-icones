// Police d'icônes (héritage) : dist/font/mira-symbols.{ttf,woff2}, dérivée des SVG Régulier/Contour.
// Le pas « trait → contour » n'est pas réversible : la police est toujours une sortie, jamais la source.

import { mkdir, readFile, rm, writeFile } from "node:fs/promises";
import { join } from "node:path";
import type { Readable as ReadableStream } from "node:stream";
import type { DataModule, RenderModule } from "./build-core.js";

export async function buildFont(dist: string, data: DataModule, render: RenderModule): Promise<void> {
  // Dépendances optionnelles (devDependencies) : oslllo-svg-fixer (trait → contour), svgicons2svgfont, svg2ttf, ttf2woff2.
  let fixer, SVGIcons2SVGFontStream, svg2ttf, ttf2woff2;
  try {
    ({ default: fixer } = await import("oslllo-svg-fixer"));
    ({ SVGIcons2SVGFontStream } = await import("svgicons2svgfont"));
    ({ default: svg2ttf } = await import("svg2ttf"));
    ({ default: ttf2woff2 } = await import("ttf2woff2"));
  } catch {
    console.warn("⚠ --font : installez oslllo-svg-fixer svgicons2svgfont svg2ttf ttf2woff2 (devDependencies).");
    return;
  }
  const { Readable } = await import("node:stream");
  const tmp = join(dist, "font", "_src"), fixed = join(dist, "font", "_outline");
  // oslllo-svg-fixer throws unless the destination directory already exists, and both scratch
  // directories must go even when a later step fails, or a broken run leaves 2 x N SVG in dist/font/.
  await Promise.all([mkdir(tmp, { recursive: true }), mkdir(fixed, { recursive: true })]);
  try {
    // 1. Un SVG Régulier/Contour par symbole, 2. traits → contours, 3. SVG font → TTF → WOFF2
    for (const s of data.SYMBOLS) await writeFile(join(tmp, `${s.name}.svg`), render.treeToString(render.symbolTree(s, { weight: "regular", shape: "outline", id: "f" })));
    await fixer(tmp, fixed, { showProgressBar: false }).fix();
    const cps = JSON.parse(await readFile(join(dist, "font", "codepoints.json"), "utf8")) as Record<string, string>;
    const font = new SVGIcons2SVGFontStream({ fontName: "Mira Symbols", fontHeight: 1000, normalize: true, log: () => {} });
    let svgFont = "";
    const done = new Promise<void>((res, rej) => void font.on("data", (c: Buffer) => (svgFont += c)).on("end", res).on("error", rej));
    for (const s of data.SYMBOLS) {
      const glyph = Readable.from([await readFile(join(fixed, `${s.name}.svg`))]) as ReadableStream & { metadata?: { unicode: string[]; name: string } };
      glyph.metadata = { unicode: [String.fromCodePoint(parseInt(cps[s.name]!.slice(2), 16))], name: s.name };
      font.write(glyph);
    }
    font.end();
    await done;
    const ttf = Buffer.from(svg2ttf(svgFont, {}).buffer);
    await writeFile(join(dist, "font", "mira-symbols.ttf"), ttf);
    await writeFile(join(dist, "font", "mira-symbols.woff2"), ttf2woff2(ttf));
  } finally {
    await rm(tmp, { recursive: true, force: true });
    await rm(fixed, { recursive: true, force: true });
  }
  console.log("✓ police : dist/font/mira-symbols.{ttf,woff2}");
}
