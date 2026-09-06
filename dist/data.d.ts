import type { CategoryDef, SymbolIndex, SymbolSource, WeightDef } from "./types.js";
export declare const circle: (cx: number, cy: number, r: number) => string;
export declare const rr: (x: number, y: number, w: number, h: number, r: number) => string;
export declare const txt: (s: string, x: number, y: number, k?: number, gap?: number) => string;
export declare const WEIGHTS: readonly WeightDef[];
export declare const CATEGORIES: readonly CategoryDef[];
export declare const SYMBOLS: readonly SymbolSource[];
export declare const ICONS: readonly SymbolSource[];
export declare const byName: SymbolIndex;
