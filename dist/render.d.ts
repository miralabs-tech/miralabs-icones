import type { SvgNode, SymbolData, SymbolOptions, SymbolSize } from "./types.js";
import { symbolOps, WEIGHT_STROKE } from "./ir.js";
export { symbolOps, WEIGHT_STROKE };
export declare const SIZE_TOKENS: Record<"sm" | "md" | "lg", string>;
/** o : { weight: 'regular' | nombre (largeur de trait), shape: 'outline'|'fill', tone: 'mono'|'hier', id: préfixe des masques } ; arbre SVG sans style de taille. */
export declare function symbolTree(sym: SymbolData, o?: SymbolOptions): SvgNode;
/** Style inline de taille : jeton sm/md/lg ou longueur CSS. */
export declare function sizeStyle(size?: SymbolSize, mirror?: boolean): string;
export declare function treeToString(n: SvgNode, pretty?: boolean, ind?: string): string;
/**
 * SVG complet prêt à insérer. o.size : 'sm'|'md'|'lg'|longueur CSS ; o.label : nom accessible (sinon décoratif) ;
 * o.mirror : miroir RTL ; o.className : classe CSS ; o.pretty : indenté.
 */
export declare function symbolToString(sym: SymbolData, o?: SymbolOptions): string;
/** Élément DOM <svg> (namespace SVG), pour le web component et le vanilla. */
export declare function symbolToElement(sym: SymbolData, o?: SymbolOptions, doc?: Document): SVGSVGElement;
/** Identifiant JS d'un nom SF : "square.and.arrow.up" → squareAndArrowUp, "2g" → _2g, "return" → _return. */
export declare function identifier(name: string): string;
