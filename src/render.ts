// @miralabs/icones — renderer web. IR (ir.js) → arbre SVG → chaîne ou DOM. Zéro dépendance.
// Le même arbre sert l'explorateur, le web component, les adaptateurs et le build :
// ce que l'on voit dans l'explorateur est exactement ce qui est livré.

import type { SvgNode, SymbolData, SymbolOp, SymbolOptions, SymbolSize } from "./types.js";
import { symbolOps, WEIGHT_STROKE } from "./ir.js";
export { symbolOps, WEIGHT_STROKE };

export const SIZE_TOKENS: Record<"sm" | "md" | "lg", string> = { sm: "var(--mira-icon-size-sm)", md: "var(--mira-icon-size-md)", lg: "var(--mira-icon-size-lg)" };

const R2 = (n: number) => Math.round(n * 100) / 100;
const N = (tag: string, attrs: Record<string, string | number>, children: SvgNode[] = []): SvgNode => ({ tag, attrs, children });
const side = (layer: SymbolOp["layer"]) => (layer === "e" || layer === "c" ? "e" : "p");

/** o : { weight: 'regular' | nombre (largeur de trait), shape: 'outline'|'fill', tone: 'mono'|'hier', id: préfixe des masques } ; arbre SVG sans style de taille. */
export function symbolTree(sym: SymbolData, o: SymbolOptions = {}): SvgNode {
  const sw = typeof o.weight === "number" ? o.weight : (WEIGHT_STROKE as Record<string, number | undefined>)[o.weight!] ?? 1.5;
  const shape = o.shape ?? "outline";
  const hier = (o.tone ?? "mono") === "hier" && !!sym.e;
  const idp = o.id ?? `mira-${sym.name.replace(/\./g, "-")}`;
  const fadeL = sym.fade || "e";
  const width = (w: [number, number]) => R2(w[0] * sw + w[1]);
  const defs: SvgNode[] = [], kids: SvgNode[] = [];
  symbolOps(sym, shape, { hier }).forEach((op, i) => {
    const attrs: Record<string, string | number> = { d: op.d };
    if (op.kind === "fill") { attrs.fill = "currentColor"; attrs.stroke = "none"; }
    else { const w = width(op.w!); if (w <= 0) return; if (w !== sw) attrs["stroke-width"] = w; }
    if (hier && side(op.layer) === fadeL) attrs.opacity = "0.42";
    if (op.cut) {
      const id = `${idp}-${i}`;
      defs.push(N("mask", { id, maskUnits: "userSpaceOnUse", x: "0", y: "0", width: "24", height: "24" }, [
        N("rect", { width: "24", height: "24", fill: "#fff", stroke: "none" }),
        ...op.cut.map((c) => (c.kind === "fill" ? N("path", { d: c.d, fill: "#000", stroke: "none" }) : N("path", { d: c.d, stroke: "#000", "stroke-width": width(c.w!) }))),
      ]));
      attrs.mask = `url(#${id})`;
    }
    kids.push(N("path", attrs));
  });
  return N("svg", { xmlns: "http://www.w3.org/2000/svg", viewBox: "0 0 24 24", fill: "none", stroke: "currentColor", "stroke-width": sw, "stroke-linecap": "round", "stroke-linejoin": "round", "aria-hidden": "true" }, [...(defs.length ? [N("defs", {}, defs)] : []), ...kids]);
}

/** Style inline de taille : jeton sm/md/lg ou longueur CSS. */
export function sizeStyle(size: SymbolSize = "md", mirror = false): string {
  const v = (SIZE_TOKENS as Record<string, string | undefined>)[size] ?? size;
  return `inline-size:${v};block-size:${v}${mirror ? ";scale:-1 1" : ""}`;
}

export function treeToString(n: SvgNode, pretty = false, ind = ""): string {
  const a = Object.entries(n.attrs).map(([k, v]) => ` ${k}="${String(v).replace(/"/g, "&quot;")}"`).join("");
  if (!n.children.length) return `${ind}<${n.tag}${a}/>`;
  const nl = pretty ? "\n" : "", ci = pretty ? ind + "  " : "";
  return `${ind}<${n.tag}${a}>${nl}${n.children.map((c) => treeToString(c, pretty, ci)).join(nl)}${nl}${ind}</${n.tag}>`;
}

/**
 * SVG complet prêt à insérer. o.size : 'sm'|'md'|'lg'|longueur CSS ; o.label : nom accessible (sinon décoratif) ;
 * o.mirror : miroir RTL ; o.className : classe CSS ; o.pretty : indenté.
 */
export function symbolToString(sym: SymbolData, o: SymbolOptions = {}): string {
  const t = symbolTree(sym, o);
  t.attrs.style = sizeStyle(o.size, o.mirror);
  if (o.className) t.attrs.class = o.className;
  if (o.label) { delete t.attrs["aria-hidden"]; t.attrs.role = "img"; t.attrs["aria-label"] = o.label; }
  return treeToString(t, !!o.pretty);
}

/** Élément DOM <svg> (namespace SVG), pour le web component et le vanilla. */
export function symbolToElement(sym: SymbolData, o: SymbolOptions = {}, doc: Document = globalThis.document): SVGSVGElement {
  const t = symbolTree(sym, o);
  t.attrs.style = sizeStyle(o.size, o.mirror);
  if (o.className) t.attrs.class = o.className;
  if (o.label) { delete t.attrs["aria-hidden"]; t.attrs.role = "img"; t.attrs["aria-label"] = o.label; }
  const build = (n: SvgNode): Element => {
    const el = doc.createElementNS("http://www.w3.org/2000/svg", n.tag);
    for (const [k, v] of Object.entries(n.attrs)) if (k !== "xmlns") el.setAttribute(k, String(v));
    for (const c of n.children) el.appendChild(build(c));
    return el;
  };
  return build(t) as SVGSVGElement;
}

// A bare "return" or "function" export name produced invalid .d.ts, hence the "_" prefix on reserved words.
const RESERVED = new Set([
  "break", "case", "catch", "class", "const", "continue", "debugger", "default", "delete", "do", "else",
  "export", "extends", "finally", "for", "function", "if", "import", "in", "instanceof", "new", "return",
  "super", "switch", "this", "throw", "try", "typeof", "var", "void", "while", "with", "yield", "let",
  "static", "enum", "await", "implements", "package", "protected", "interface", "private", "public",
  "null", "true", "false",
]);

/** Identifiant JS d'un nom SF : "square.and.arrow.up" → squareAndArrowUp, "2g" → _2g, "return" → _return. */
export function identifier(name: string): string {
  const id = name.split(".").map((s, i) => (i ? s.charAt(0).toUpperCase() + s.slice(1) : s)).join("");
  return /^\d/.test(id) || RESERVED.has(id) ? `_${id}` : id;
}
