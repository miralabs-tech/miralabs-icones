// Public type contracts, types only. SymbolName, SymbolCollection and SymbolWeight are generated into ./names.ts.

import type { SymbolCollection, SymbolName, SymbolWeight } from "./names.js";

export type { SymbolCollection, SymbolName, SymbolWeight } from "./names.js";

export type SymbolShape = "outline" | "fill";
export type SymbolTone = "mono" | "hier";
export type SymbolSize = "sm" | "md" | "lg" | (string & {});

export interface SymbolData {
  name: SymbolName;
  tags: string[];
  rtl?: boolean;
  p?: string;
  e?: string;
  c?: string;
  f?: string;
  h?: string;
  pf?: string;
  cut?: boolean;
  keep?: boolean;
  fade?: "e" | "p";
}

export interface SymbolSource extends SymbolData {
  cat: SymbolCollection;
}

export interface SymbolOptions {
  weight?: SymbolWeight | number;
  shape?: SymbolShape;
  tone?: SymbolTone;
  size?: SymbolSize;
  label?: string;
  mirror?: boolean;
  className?: string;
  id?: string;
  pretty?: boolean;
}

export interface SymbolCut {
  kind: "fill" | "stroke";
  d: string;
  w?: [number, number];
}

export interface SymbolOp {
  layer: "e" | "c" | "f" | "p" | "back";
  kind: "fill" | "stroke";
  d: string;
  w?: [number, number];
  cut?: SymbolCut[];
}

export interface SvgNode {
  tag: string;
  attrs: Record<string, string | number>;
  children: SvgNode[];
}

export interface WeightDef {
  id: SymbolWeight;
  label: string;
  sw: number;
  font: number;
}

export interface CategoryDef {
  id: SymbolCollection;
  label: string;
  glyph: SymbolName;
}

export type SymbolIndex = { readonly [K in SymbolName]: SymbolSource } & { readonly [k: string]: SymbolSource | undefined };
