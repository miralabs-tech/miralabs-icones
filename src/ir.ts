// @miralabs/icones — représentation intermédiaire (IR) de rendu.
// Un symbole × une forme → une liste d'opérations de peinture, sans rien de propre au SVG.
// C'est LE contrat que tout moteur de rendu implémente (web : render.js ; natif : native/mira_symbols.h) :
//
//   op = { layer, kind: "fill" | "stroke", d, w?: [k, c], cut?: [ { kind, d, w? } ] }
//   · d          chemin SVG sur la grille 24 × 24, extrémités et jointures RONDES, remplissage nonzero
//   · w = [k, c] largeur de trait = k·sw + c, sw étant la largeur de la graisse (WEIGHT_STROKE) ; ≤ 0 → ne rien dessiner
//   · cut        formes SOUSTRAITES de cette opération seule : couverture(op) = couverture(d) × Π (1 − couverture(cut_i))
//   · résultat   union des opérations dans l'ordre (a ∪ b = a + b − a·b), une seule couleur (currentColor)
//   · layer      "e" enveloppe · "c" découpes · "f" toujours pleine · "p" glyphe primaire · "back" fond du glyphe Plein
//                — ne sert qu'au rendu Hiérarchique du web ; un moteur mono l'ignore.
//
// Les couches d'un symbole (voir data.js) : p, e, c, f, h, pf, cut, keep, fade.

import type { SymbolCut, SymbolData, SymbolOp, SymbolShape, SymbolWeight } from "./types.js";

export const WEIGHT_STROKE: Record<SymbolWeight, number> = { thin: 1, light: 1.25, regular: 1.5, medium: 1.75, semibold: 2, bold: 2.4 };
export const SHAPES: readonly SymbolShape[] = ["outline", "fill"];

/** hier : ajoute le trait primaire par-dessus la découpe (rendu Hiérarchique, web seulement). */
export function symbolOps(sym: SymbolData, shape: SymbolShape = "outline", { hier = false }: { hier?: boolean } = {}): SymbolOp[] {
  const ops: SymbolOp[] = [];
  const stroke = (layer: SymbolOp["layer"], d: string, w: [number, number] = [1, 0]) => ops.push({ layer, kind: "stroke", d, w });
  const fill = (layer: SymbolOp["layer"], d: string, cut?: SymbolCut[]) => ops.push(cut && cut.length ? { layer, kind: "fill", d, cut } : { layer, kind: "fill", d });
  const hole: SymbolCut[] = sym.h ? [{ kind: "fill", d: sym.h }] : [];
  const back = sym.pf && sym.pf !== "=" ? sym.pf : null;
  if (shape !== "fill" || (!sym.e && !sym.pf)) {
    // Contour : tout au trait, sauf f (toujours pleine, trouée par h)
    if (sym.e) stroke("e", sym.e);
    if (sym.c) stroke("c", sym.c);
    if (sym.f) fill("f", sym.f, hole);
    if (sym.p) stroke("p", sym.p);
  } else if (sym.e) {
    // Plein avec enveloppe : e devient pleine, p et c s'y découpent (sauf cut:false), h la troue
    const cut = sym.cut !== false && !back;
    const parts = [...hole];
    if (sym.p && cut) parts.push({ kind: "stroke", d: sym.p, w: sym.keep ? [1, 1.4] : [1, 0] });
    if (sym.c) parts.push({ kind: "stroke", d: sym.c, w: [1, 0] });
    if (back) fill("back", back, [{ kind: "fill", d: sym.e }, { kind: "stroke", d: sym.e, w: [1, 1] }]);
    fill("e", sym.e, parts);
    if (sym.f) fill("f", sym.f, hole);
    if (sym.p && !back && (!cut || sym.keep || hier)) stroke("p", sym.p);
  } else {
    // Plein sans enveloppe : le glyphe lui-même est plein ; au-delà de Régulier il grossit d'un trait de sw − 1.5
    const d = (sym.pf === "=" ? sym.p : sym.pf)!;
    fill("p", d);
    stroke("p", d, [1, -1.5]);
    if (sym.f) fill("f", sym.f, hole);
  }
  return ops;
}
