import { symbolOps, WEIGHT_STROKE } from "./ir.js";

export { symbolOps, WEIGHT_STROKE };
export const SIZE_TOKENS = { sm: "var(--mira-icon-size-sm)", md: "var(--mira-icon-size-md)", lg: "var(--mira-icon-size-lg)" };
const R2 = (n) => Math.round(n * 100) / 100;
const N = (tag, attrs, children = []) => ({ tag, attrs, children });
const side = (layer) => layer === "e" || layer === "c" ? "e" : "p";
export function symbolTree(sym, o = {}) {
  const sw = typeof o.weight === "number" ? o.weight : WEIGHT_STROKE[o.weight] ?? 1.5;
  const shape = o.shape ?? "outline";
  const hier = (o.tone ?? "mono") === "hier" && !!sym.e;
  const idp = o.id ?? `mira-${sym.name.replace(/\./g, "-")}`;
  const fadeL = sym.fade || "e";
  const width = (w) => R2(w[0] * sw + w[1]);
  const defs = [], kids = [];
  symbolOps(sym, shape, { hier }).forEach((op, i) => {
    const attrs = { d: op.d };
    if (op.kind === "fill") {
      attrs.fill = "currentColor";
      attrs.stroke = "none";
    } else {
      const w = width(op.w);
      if (w <= 0)
        return;
      if (w !== sw)
        attrs["stroke-width"] = w;
    }
    if (hier && side(op.layer) === fadeL)
      attrs.opacity = "0.42";
    if (op.cut) {
      const id = `${idp}-${i}`;
      defs.push(N("mask", { id, maskUnits: "userSpaceOnUse", x: "0", y: "0", width: "24", height: "24" }, [
        N("rect", { width: "24", height: "24", fill: "#fff", stroke: "none" }),
        ...op.cut.map((c) => c.kind === "fill" ? N("path", { d: c.d, fill: "#000", stroke: "none" }) : N("path", { d: c.d, stroke: "#000", "stroke-width": width(c.w) }))
      ]));
      attrs.mask = `url(#${id})`;
    }
    kids.push(N("path", attrs));
  });
  return N("svg", { xmlns: "http://www.w3.org/2000/svg", viewBox: "0 0 24 24", fill: "none", stroke: "currentColor", "stroke-width": sw, "stroke-linecap": "round", "stroke-linejoin": "round", "aria-hidden": "true" }, [...defs.length ? [N("defs", {}, defs)] : [], ...kids]);
}
export function sizeStyle(size = "md", mirror = false) {
  const v = SIZE_TOKENS[size] ?? size;
  return `inline-size:${v};block-size:${v}${mirror ? ";scale:-1 1" : ""}`;
}
export function treeToString(n, pretty = false, ind = "") {
  const a = Object.entries(n.attrs).map(([k, v]) => ` ${k}="${String(v).replace(/"/g, "&quot;")}"`).join("");
  if (!n.children.length)
    return `${ind}<${n.tag}${a}/>`;
  const nl = pretty ? `
` : "", ci = pretty ? ind + "  " : "";
  return `${ind}<${n.tag}${a}>${nl}${n.children.map((c) => treeToString(c, pretty, ci)).join(nl)}${nl}${ind}</${n.tag}>`;
}
export function symbolToString(sym, o = {}) {
  const t = symbolTree(sym, o);
  t.attrs.style = sizeStyle(o.size, o.mirror);
  if (o.className)
    t.attrs.class = o.className;
  if (o.label) {
    delete t.attrs["aria-hidden"];
    t.attrs.role = "img";
    t.attrs["aria-label"] = o.label;
  }
  return treeToString(t, !!o.pretty);
}
export function symbolToElement(sym, o = {}, doc = globalThis.document) {
  const t = symbolTree(sym, o);
  t.attrs.style = sizeStyle(o.size, o.mirror);
  if (o.className)
    t.attrs.class = o.className;
  if (o.label) {
    delete t.attrs["aria-hidden"];
    t.attrs.role = "img";
    t.attrs["aria-label"] = o.label;
  }
  const build = (n) => {
    const el = doc.createElementNS("http://www.w3.org/2000/svg", n.tag);
    for (const [k, v] of Object.entries(n.attrs))
      if (k !== "xmlns")
        el.setAttribute(k, String(v));
    for (const c of n.children)
      el.appendChild(build(c));
    return el;
  };
  return build(t);
}
const RESERVED = new Set([
  "break",
  "case",
  "catch",
  "class",
  "const",
  "continue",
  "debugger",
  "default",
  "delete",
  "do",
  "else",
  "export",
  "extends",
  "finally",
  "for",
  "function",
  "if",
  "import",
  "in",
  "instanceof",
  "new",
  "return",
  "super",
  "switch",
  "this",
  "throw",
  "try",
  "typeof",
  "var",
  "void",
  "while",
  "with",
  "yield",
  "let",
  "static",
  "enum",
  "await",
  "implements",
  "package",
  "protected",
  "interface",
  "private",
  "public",
  "null",
  "true",
  "false"
]);
export function identifier(name) {
  const id = name.split(".").map((s, i) => i ? s.charAt(0).toUpperCase() + s.slice(1) : s).join("");
  return /^\d/.test(id) || RESERVED.has(id) ? `_${id}` : id;
}
