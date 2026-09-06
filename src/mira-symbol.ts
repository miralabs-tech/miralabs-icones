// <mira-symbol> — web component vanilla, light DOM (hérite de currentColor et des jetons --mira-*).
// Ne charge aucun symbole par lui-même : enregistrez ceux que l'app utilise (tree-shaking),
// ou importez `mira-symbol.all.js` pour tout le jeu.
//
//   import { MiraSymbol } from "@miralabs-tech/icones/mira-symbol";
//   import { magnifyingglass, trash } from "@miralabs-tech/icones";
//   MiraSymbol.register(magnifyingglass, trash);
//   <mira-symbol name="trash" weight="regular" shape="outline" size="md" label="Supprimer"></mira-symbol>
//
// Attributs : name · weight (thin…bold) · shape (outline|fill) · tone (mono|hier) · size (sm|md|lg|longueur CSS) · label (nom accessible)

import type { SymbolData, SymbolShape, SymbolTone, SymbolWeight } from "./types.js";
import { symbolToElement } from "./render.js";

const registry = new Map<string, SymbolData>();

export class MiraSymbol extends HTMLElement {
  static observedAttributes: string[] = ["name", "weight", "shape", "tone", "size", "label"];
  static register(...symbols: SymbolData[]): void { for (const s of symbols) registry.set(s.name, s); MiraSymbol.#rerenderAll(); }
  static get(name: string): SymbolData | undefined { return registry.get(name); }
  static #live = new Set<MiraSymbol>();
  static #rerenderAll(): void { for (const el of MiraSymbol.#live) el.#render(); }

  connectedCallback(): void { MiraSymbol.#live.add(this); this.style.display ||= "inline-grid"; this.#render(); }
  disconnectedCallback(): void { MiraSymbol.#live.delete(this); }
  attributeChangedCallback(): void { if (this.isConnected) this.#render(); }

  #render(): void {
    const sym = registry.get(this.getAttribute("name") ?? "");
    this.replaceChildren();
    if (!sym) return;
    const mirror = !!sym.rtl && getComputedStyle(this).direction === "rtl";
    const uid = `ms-${this.getAttribute("name")!.replace(/\./g, "-")}-${++MiraSymbol.#seq}`;
    this.appendChild(symbolToElement(sym, {
      weight: (this.getAttribute("weight") ?? "regular") as SymbolWeight,
      shape: (this.getAttribute("shape") ?? "outline") as SymbolShape,
      tone: (this.getAttribute("tone") ?? "mono") as SymbolTone,
      size: this.getAttribute("size") ?? "md",
      label: this.getAttribute("label") ?? undefined,
      mirror, id: uid,
    }));
  }
  static #seq: number = 0;
}

if (!customElements.get("mira-symbol")) customElements.define("mira-symbol", MiraSymbol);
