// Consumer view of the published package: resolved by package name (self-reference through package.json
// exports), hence only through dist/*.d.ts. Compiled by test/types.test.ts with tsconfig.dts.json.

import type { SymbolData, SymbolOptions } from "@miralabs-tech/icones";
import { _2g, _function, _return, trash } from "@miralabs-tech/icones";
// @ts-expect-error the root is types + one const per symbol; runtime values live at "./ir" and "./render"
import { symbolOps as rootSymbolOps } from "@miralabs-tech/icones";
import { identifier, sizeStyle, SIZE_TOKENS, symbolToElement, symbolToString, symbolTree, treeToString } from "@miralabs-tech/icones/render";
import { SHAPES, symbolOps, WEIGHT_STROKE } from "@miralabs-tech/icones/ir";
import { byName, circle, SYMBOLS as ALL } from "@miralabs-tech/icones/data";
import { MiraSymbol } from "@miralabs-tech/icones/mira-symbol";

const n: "trash" = trash.name;
const g: "2g" = _2g.name;
const r: "return" = _return.name;
const f: "function" = _function.name;
const w: SymbolOptions["weight"] = "bold";
const first: SymbolData | undefined = ALL[0];

const svg: string = symbolToString(trash, { weight: w, shape: "fill", size: "lg", label: n });
const el: SVGSVGElement = symbolToElement(trash, { tone: "hier" });
const tree: string = treeToString(symbolTree(trash, { shape: SHAPES[0] }), true);
const style: string = sizeStyle("md") + SIZE_TOKENS.sm;
const id: string = identifier("square.and.arrow.up");
const stroke: number = WEIGHT_STROKE.regular;
const ops = symbolOps(trash, "outline");
const d: string | undefined = ops[0]?.d;

const collection: string = byName["trash"].cat;
const maybe: string | undefined = byName[String(g)]?.name;
const seed: string = circle(12, 12, 6);
const count: number = ALL.length;
const tag: string = MiraSymbol.name;

// @ts-expect-error "pas.un.symbole" is not a SymbolName
const bad: SymbolData["name"] = "pas.un.symbole";

// @ts-expect-error the root exposes SymbolData, which has no cat
const cat = trash.cat;

// @ts-expect-error SYMBOLS is readonly: spread it to get a mutable array
const mutable: SymbolData[] = ALL;

const spread: SymbolData[] = [...ALL];

export const used = [n, g, r, f, w, first, svg, el, tree, style, id, stroke, d, collection, maybe, seed, count, tag, bad, cat, mutable, spread, rootSymbolOps];
