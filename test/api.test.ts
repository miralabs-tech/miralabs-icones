import { describe, expect, it } from "bun:test";
import { statSync } from "node:fs";
import { SYMBOLS, WEIGHTS, CATEGORIES } from "../src/data.js";
import { identifier } from "../src/render.js";

const pkg = JSON.parse(await Bun.file("package.json").text());
const exportsMap = pkg.exports as Record<string, string | Record<string, string>>;

describe("exports package.json", () => {
  it("12 sous-chemins", () => {
    expect(Object.keys(exportsMap).length).toBe(12);
  });

  // svg/ et les binaires de police sont des artefacts de release : les exporter promettrait des
  // cibles qu'un `bun run build` ne produit pas et qu'une install github: n'aurait jamais.
  it("aucun sous-chemin ne pointe vers un artefact de release", () => {
    for (const key of Object.keys(exportsMap)) expect(key).not.toMatch(/^\.\/(svg|font)\//);
  });

  for (const [key, val] of Object.entries(exportsMap)) {
    it(`${key} : les cibles concrètes existent`, async () => {
      const targets = typeof val === "string" ? [val] : Object.values(val);
      for (const t of targets) {
        const rel = t.replace(/^\.\//, "");
        if (rel.includes("*")) {
          const known = key === "./sprite/*" ? "dist/sprite/regular-outline.svg" : key === "./adapters/*" ? "adapters/vue/MiraSymbol.vue" : "dist/esm/trash.js";
          expect(await Bun.file(known).exists()).toBe(true);
        } else {
          expect(await Bun.file(rel).exists()).toBe(true);
        }
      }
    });
  }

  // Shipping adapters/ without an exports subpath made them unreachable: exports encapsulation wins over files.
  it("les adaptateurs sont à la fois publiés et exportés", async () => {
    expect(pkg.files).toContain("adapters");
    expect(exportsMap["./adapters/*"]).toBe("./adapters/*");
    for (const f of ["angular/mira-symbol.component.ts", "react/Symbol.tsx", "svelte/MiraSymbol.svelte", "vue/MiraSymbol.vue"]) {
      expect(await Bun.file(`adapters/${f}`).exists()).toBe(true);
    }
  });
});

describe("exports — noms exportés", () => {
  it(". -> les 376 identifiants", async () => {
    const mod = await import("../dist/esm/index.js");
    const expected = SYMBOLS.map((s) => identifier(s.name)).sort();
    expect(Object.keys(mod).sort()).toEqual(expected);
  });

  it("./data -> circle, rr, txt, WEIGHTS, CATEGORIES, SYMBOLS, ICONS, byName", async () => {
    const mod = await import("../src/data.js");
    for (const k of ["circle", "rr", "txt", "WEIGHTS", "CATEGORIES", "SYMBOLS", "ICONS", "byName"]) {
      expect(k in mod).toBe(true);
    }
  });

  it("./ir -> WEIGHT_STROKE, SHAPES, symbolOps", async () => {
    const mod = await import("../src/ir.js");
    for (const k of ["WEIGHT_STROKE", "SHAPES", "symbolOps"]) expect(k in mod).toBe(true);
  });

  it("./render -> symbolOps, WEIGHT_STROKE, SIZE_TOKENS, symbolTree, sizeStyle, treeToString, symbolToString, symbolToElement, identifier", async () => {
    const mod = await import("../src/render.js");
    for (const k of ["symbolOps", "WEIGHT_STROKE", "SIZE_TOKENS", "symbolTree", "sizeStyle", "treeToString", "symbolToString", "symbolToElement", "identifier"]) {
      expect(k in mod).toBe(true);
    }
  });

  it("./mira-symbol -> MiraSymbol", async () => {
    const mod = await import("../src/mira-symbol.js");
    expect(typeof mod.MiraSymbol).toBe("function");
  });

  it("./mira-symbol.all -> MiraSymbol", async () => {
    const mod = await import("../src/mira-symbol.all.js");
    expect(typeof mod.MiraSymbol).toBe("function");
  });
});

describe("invariants du jeu de données", () => {
  it("376 noms uniques", () => {
    expect(new Set(SYMBOLS.map((s) => s.name)).size).toBe(376);
    expect(SYMBOLS.length).toBe(376);
  });

  it("376 identifiants uniques", () => {
    expect(new Set(SYMBOLS.map((s) => identifier(s.name))).size).toBe(376);
  });

  it("WEIGHT_STROKE exact", async () => {
    const { WEIGHT_STROKE } = await import("../src/ir.js");
    expect(WEIGHT_STROKE).toEqual({ thin: 1, light: 1.25, regular: 1.5, medium: 1.75, semibold: 2, bold: 2.4 });
  });

  it("23 catégories", () => {
    expect(CATEGORIES.length).toBe(23);
  });

  it("WEIGHTS a 6 entrées cohérentes avec WEIGHT_STROKE", async () => {
    const { WEIGHT_STROKE } = await import("../src/ir.js");
    expect(WEIGHTS.length).toBe(6);
    for (const w of WEIGHTS) expect(WEIGHT_STROKE[w.id]).toBe(w.sw);
  });
});
