export const WEIGHT_STROKE = { thin: 1, light: 1.25, regular: 1.5, medium: 1.75, semibold: 2, bold: 2.4 };
export const SHAPES = ["outline", "fill"];
export function symbolOps(sym, shape = "outline", { hier = false } = {}) {
  const ops = [];
  const stroke = (layer, d, w = [1, 0]) => ops.push({ layer, kind: "stroke", d, w });
  const fill = (layer, d, cut) => ops.push(cut && cut.length ? { layer, kind: "fill", d, cut } : { layer, kind: "fill", d });
  const hole = sym.h ? [{ kind: "fill", d: sym.h }] : [];
  const back = sym.pf && sym.pf !== "=" ? sym.pf : null;
  if (shape !== "fill" || !sym.e && !sym.pf) {
    if (sym.e)
      stroke("e", sym.e);
    if (sym.c)
      stroke("c", sym.c);
    if (sym.f)
      fill("f", sym.f, hole);
    if (sym.p)
      stroke("p", sym.p);
  } else if (sym.e) {
    const cut = sym.cut !== false && !back;
    const parts = [...hole];
    if (sym.p && cut)
      parts.push({ kind: "stroke", d: sym.p, w: sym.keep ? [1, 1.4] : [1, 0] });
    if (sym.c)
      parts.push({ kind: "stroke", d: sym.c, w: [1, 0] });
    if (back)
      fill("back", back, [{ kind: "fill", d: sym.e }, { kind: "stroke", d: sym.e, w: [1, 1] }]);
    fill("e", sym.e, parts);
    if (sym.f)
      fill("f", sym.f, hole);
    if (sym.p && !back && (!cut || sym.keep || hier))
      stroke("p", sym.p);
  } else {
    const d = sym.pf === "=" ? sym.p : sym.pf;
    fill("p", d);
    stroke("p", d, [1, -1.5]);
    if (sym.f)
      fill("f", sym.f, hole);
  }
  return ops;
}
