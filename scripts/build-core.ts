// Génération pure (aucun accès disque) : données + renderer → liste de fichiers { path, content }.
// Utilisée par build.ts (Node/Bun) et, à l'identique, dans un navigateur.

import type * as RenderNS from "../src/render.js";
import type { CategoryDef, SymbolCut, SymbolOp, SymbolSource, WeightDef } from "../src/types.js";

export interface GeneratedFile {
  path: string;
  content: string;
}

export interface DataModule {
  SYMBOLS: readonly SymbolSource[];
  WEIGHTS: readonly WeightDef[];
  CATEGORIES: readonly CategoryDef[];
}

export interface RenderModule {
  symbolTree: typeof RenderNS.symbolTree;
  treeToString: typeof RenderNS.treeToString;
  identifier: typeof RenderNS.identifier;
  symbolOps: typeof RenderNS.symbolOps;
}

export interface GenerateOptions {
  version?: string;
  name?: string;
  staticSvg?: boolean;
}

const LAYER_KEYS = ["p", "e", "c", "f", "h", "pf"] as const;
const pick = <K extends keyof SymbolSource>(s: SymbolSource, keys: readonly K[]): Partial<Pick<SymbolSource, K>> =>
  Object.fromEntries(keys.filter((k) => s[k] !== undefined).map((k) => [k, s[k]])) as Partial<Pick<SymbolSource, K>>;

export function generate(data: DataModule, render: RenderModule, opts: GenerateOptions = {}): GeneratedFile[] {
  const { SYMBOLS, WEIGHTS, CATEGORIES } = data;
  const { symbolTree, treeToString, identifier, symbolOps } = render;
  const version = opts.version ?? "0.3.0", name = opts.name ?? "@miralabs/icones";
  const shapes = ["outline", "fill"] as const;
  const out: GeneratedFile[] = [];
  const add = (path: string, content: string) => out.push({ path, content });

  const head = {
    name, version, grid: 24, strokeRegular: 1.5,
    weights: WEIGHTS.map(({ id, label, sw, font }) => ({ id, label, stroke: sw, fontWeight: font })),
    shapes, tones: ["mono", "hier"],
    collections: CATEGORIES.map(({ id, label, glyph }) => ({ id, label, glyph, count: SYMBOLS.filter((s) => s.cat === id).length })),
  };
  const meta = (s: SymbolSource, i: number) => ({
    name: s.name, id: identifier(s.name), collection: s.cat, tags: s.tags, rtl: !!s.rtl,
    layers: LAYER_KEYS.filter((k) => s[k]), fill: !!(s.e || s.pf), codepoint: codepoint(i),
  });

  // 1. metadata.json — sans chemins : recherche (explorateur, plugin Figma, autocomplétion)
  add("metadata.json", JSON.stringify({ ...head, symbols: SYMBOLS.map(meta) }, null, 2) + "\n");

  // 2. symbols.json — LA donnée complète et neutre : ce qu'un moteur non-JS lit (C, Rust, Lur…)
  add("symbols.json", JSON.stringify({
    ...head,
    layerKeys: { p: "glyphe primaire (trait)", e: "enveloppe (trait en Contour, pleine en Plein)", c: "traits découpés dans e en Plein", f: "toujours pleine", h: "trou dans f et e", pf: "chemin plein du glyphe en Plein (\"=\" : fermer p)", cut: "Plein : découper p dans e (défaut true)", keep: "Plein : garder p au trait par-dessus (halo)", fade: "Hiérarchique : couche atténuée, e (défaut) ou p" },
    symbols: SYMBOLS.map((s, i) => ({ ...meta(s, i), paths: pick(s, LAYER_KEYS), ...pick(s, ["cut", "keep", "fade"]) })),
  }, null, 2) + "\n");

  // 3. ir.json — les opérations de peinture par symbole × forme (contrat décrit dans src/ir.ts), une ligne par symbole
  add("ir.json", [
    "{",
    `  "name": ${JSON.stringify(name)}, "version": ${JSON.stringify(version)}, "grid": 24,`,
    `  "weights": ${JSON.stringify(Object.fromEntries(WEIGHTS.map((w) => [w.id, w.sw])))},`,
    `  "semantics": "op = {layer, kind: fill|stroke, d, w: [k, c], cut: [...]} ; largeur de trait = k*sw + c (<= 0 : rien) ; couverture(op) = couverture(d) * prod(1 - couverture(cut_i)) ; resultat = union ordonnee (a + b - a*b) ; extremites et jointures rondes ; remplissage nonzero ; grille 24.",`,
    `  "symbols": {`,
    SYMBOLS.map((s) => `    ${JSON.stringify(s.name)}: ${JSON.stringify({ outline: symbolOps(s, "outline"), fill: symbolOps(s, "fill") })}`).join(",\n"),
    "  }",
    "}",
  ].join("\n") + "\n");

  // 4. Modules ESM par symbole (tree-shaking) + index nommé
  const dataOf = (s: SymbolSource) => JSON.stringify(Object.fromEntries(Object.entries(s).filter(([k]) => k !== "cat")));
  for (const s of SYMBOLS) add(`esm/${s.name}.js`, `export default ${dataOf(s)};\n`);
  add("esm/index.js", SYMBOLS.map((s) => `export { default as ${identifier(s.name)} } from "./${s.name}.js";`).join("\n") + "\n");

  // 5. Types: assembled from the compiled declarations (dist/*.d.ts) plus one const per symbol.
  // Types only, deliberately: esm/index.js re-exports one const per symbol and nothing else. Declaring
  // WEIGHT_STROKE/symbolOps/symbolTree/symbolToString/symbolToElement/identifier or an aggregate SYMBOLS
  // array here would type-check and then be undefined at runtime; their values live behind the "./ir" and
  // "./render" subpaths, and an aggregate array would defeat the per-symbol tree-shaking this index exists for.
  add("index.d.ts", [
    `import type { SymbolData } from "./types.js";`,
    `export type { SymbolName, SymbolWeight, SymbolShape, SymbolTone, SymbolSize, SymbolCollection, SymbolData, SymbolOptions, SymbolOp } from "./types.js";`,
    SYMBOLS.map((s) => `export declare const ${identifier(s.name)}: SymbolData & { name: ${JSON.stringify(s.name)} };`).join("\n"),
  ].join("\n\n") + "\n");

  // 6. Sprites SVG <use> — un par graisse × forme (le rendu hiérarchique reste au runtime)
  for (const w of WEIGHTS) for (const shape of shapes) {
    const syms = SYMBOLS.map((s) => {
      const t = symbolTree(s, { weight: w.id, shape, id: `${s.name}-${w.id}-${shape}` });
      const { xmlns, "aria-hidden": _a, ...attrs } = t.attrs;
      return treeToString({ tag: "symbol", attrs: { id: s.name, ...attrs }, children: t.children });
    });
    add(`sprite/${w.id}-${shape}.svg`, `<svg xmlns="http://www.w3.org/2000/svg" style="display:none">\n${syms.join("\n")}\n</svg>\n`);
  }

  // 7. SVG statiques (design, Figma, CDN) — volumineux : 12 × N fichiers, sur demande
  if (opts.staticSvg) for (const w of WEIGHTS) for (const shape of shapes) for (const s of SYMBOLS) {
    add(`svg/${w.id}/${shape}/${s.name}.svg`, treeToString(symbolTree(s, { weight: w.id, shape, id: "m" }), true) + "\n");
  }

  // 8. Police d'icônes (héritage) : table des points de code + CSS. Le binaire est produit par build.ts --font.
  const cp = Object.fromEntries(SYMBOLS.map((s, i) => [s.name, codepoint(i)]));
  add("font/codepoints.json", JSON.stringify(cp, null, 2) + "\n");
  add("font/mira-symbols.css", [
    `@font-face { font-family: "Mira Symbols"; src: url("./mira-symbols.woff2") format("woff2"); font-display: block; }`,
    `.mira-symbol { font-family: "Mira Symbols"; font-style: normal; font-weight: 400; line-height: 1; display: inline-block; inline-size: 1em; speak: never; -webkit-font-smoothing: antialiased; }`,
    ...SYMBOLS.map((s, i) => `.mira-symbol-${s.name.replace(/\./g, "-")}::before { content: "\\${codepoint(i).slice(2)}"; }`),
  ].join("\n") + "\n");

  return out;
}

// cutName links an op to the C array of its cuts, emitted right before it.
type NativeOp = (SymbolOp | SymbolCut) & { cutName?: string };

// En-tête C des données (native/mira_symbols_data.h) : l'IR sous forme de tableaux statiques.
// Les types MiraOp / MiraSymbolRec / MiraSymbolInfo sont déclarés par native/mira_symbols.h avant l'inclusion.
export function generateNativeHeader({ SYMBOLS, WEIGHTS }: DataModule, { symbolOps }: Pick<RenderModule, "symbolOps">, opts: { version?: string } = {}): string {
  const enc = new TextEncoder();
  // Octets non-ASCII en octal à 3 chiffres (\xNN avalerait les chiffres hexadécimaux suivants).
  const cstr = (s: string) => `"${[...enc.encode(s)].map((b) => (b === 0x22 ? '\\"' : b === 0x5c ? "\\\\" : b >= 0x20 && b < 0x7f ? String.fromCharCode(b) : `\\${b.toString(8).padStart(3, "0")}`)).join("")}"`;
  const f = (x: number) => (Number.isInteger(x) ? `${x}.0f` : `${x}f`);
  const op = (o: NativeOp): string => `{ ${o.kind === "stroke" ? 1 : 0}, ${f(o.w ? o.w[0] : 0)}, ${f(o.w ? o.w[1] : 0)}, ${cstr(o.d)}, ${o.cutName ?? "0"}, ${"cut" in o && o.cut ? o.cut.length : 0} }`;
  const L = [
    `/* mira_symbols_data.h — GÉNÉRÉ par scripts/build.ts depuis src/data.ts (${opts.version ?? "0.3.0"}). Ne pas éditer. */`,
    "#ifndef MIRA_SYMBOLS_DATA_H", "#define MIRA_SYMBOLS_DATA_H", "",
    `#define MIRA_SYMBOL_COUNT ${SYMBOLS.length}`, "#define MIRA_GRID 24",
    `static const float MIRA_WEIGHT_STROKE[${WEIGHTS.length}] = { ${WEIGHTS.map((w) => f(w.sw)).join(", ")} };`, "",
  ];
  const recs: string[] = [];
  SYMBOLS.forEach((s, i) => {
    L.push(`static const char *const mira_tags_${i}[] = { ${s.tags.length ? s.tags.map(cstr).join(", ") : "0"} };`);
    const counts: Record<string, number> = {};
    for (const shape of ["outline", "fill"] as const) {
      const ops: NativeOp[] = symbolOps(s, shape);
      ops.forEach((o, k) => {
        if ("cut" in o && o.cut && o.cut.length) { o.cutName = `mira_cut_${i}_${shape[0]}${k}`; L.push(`static const MiraOp ${o.cutName}[] = { ${o.cut.map(op).join(", ")} };`); }
      });
      if (ops.length) L.push(`static const MiraOp mira_ops_${shape[0]}_${i}[] = { ${ops.map(op).join(", ")} };`);
      counts[shape] = ops.length;
    }
    recs.push(`  { { ${cstr(s.name)}, ${cstr(s.cat)}, mira_tags_${i}, ${s.tags.length}, ${s.rtl ? 1 : 0} }, ${counts.outline ? `mira_ops_o_${i}` : "0"}, ${counts.outline}, ${counts.fill ? `mira_ops_f_${i}` : "0"}, ${counts.fill} },`);
  });
  L.push("", `static const MiraSymbolRec MIRA_SYMBOLS[MIRA_SYMBOL_COUNT] = {`, ...recs, "};", "", "#endif /* MIRA_SYMBOLS_DATA_H */");
  return L.join("\n") + "\n";
}

export const codepoint = (i: number): string => `U+${(0xe000 + i).toString(16).toUpperCase().padStart(4, "0")}`;
