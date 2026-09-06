// @miralabs/ui-react — <Symbol/> : enveloppe fine autour du renderer commun (aucun SVG dupliqué côté React).
import { createElement, type CSSProperties, type ReactElement } from "react";
import { symbolTree, SIZE_TOKENS } from "@miralabs-tech/icones/render";
import type { SymbolData, SymbolOptions } from "@miralabs-tech/icones";

export interface SymbolProps extends Omit<SymbolOptions, "id" | "pretty" | "className"> {
  symbol: SymbolData;
  className?: string;
  style?: CSSProperties;
  /** Force le miroir RTL ; par défaut suit `dir` du document pour les symboles marqués `rtl`. */
  mirror?: boolean;
}

const camel = (k: string) => k.replace(/-([a-z])/g, (_, c: string) => c.toUpperCase());
type Node = { tag: string; attrs: Record<string, string | number>; children: Node[] };

function toReact(n: Node, key?: number): ReactElement {
  const props: Record<string, unknown> = {};
  for (const [k, v] of Object.entries(n.attrs)) props[/^(aria|data)-/.test(k) ? k : camel(k)] = v;
  if (key !== undefined) props.key = key;
  return createElement(n.tag, props, ...n.children.map((c, i) => toReact(c, i)));
}

export function Symbol({ symbol, weight = "regular", shape = "outline", tone = "mono", size = "md", label, mirror, className, style }: SymbolProps) {
  const tree = symbolTree(symbol, { weight, shape, tone }) as Node;
  const dim = (SIZE_TOKENS as Record<string, string>)[size] ?? size;
  const rtl = mirror ?? (!!symbol.rtl && typeof document !== "undefined" && document.dir === "rtl");
  const root = toReact(tree);
  const a11y = label ? { role: "img", "aria-label": label, "aria-hidden": undefined } : {};
  return createElement(root.type as string, {
    ...(root.props as object), ...a11y, className,
    style: { inlineSize: dim, blockSize: dim, display: "block", flex: "none", ...(rtl ? { scale: "-1 1" } : {}), ...style },
  });
}
