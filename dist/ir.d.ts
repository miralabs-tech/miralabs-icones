import type { SymbolData, SymbolOp, SymbolShape, SymbolWeight } from "./types.js";
export declare const WEIGHT_STROKE: Record<SymbolWeight, number>;
export declare const SHAPES: readonly SymbolShape[];
/** hier : ajoute le trait primaire par-dessus la découpe (rendu Hiérarchique, web seulement). */
export declare function symbolOps(sym: SymbolData, shape?: SymbolShape, { hier }?: {
    hier?: boolean;
}): SymbolOp[];
