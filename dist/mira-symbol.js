import { symbolToElement } from "./render.js";
const registry = new Map;

export class MiraSymbol extends HTMLElement {
  static observedAttributes = ["name", "weight", "shape", "tone", "size", "label"];
  static register(...symbols) {
    for (const s of symbols)
      registry.set(s.name, s);
    MiraSymbol.#rerenderAll();
  }
  static get(name) {
    return registry.get(name);
  }
  static #live = new Set;
  static #rerenderAll() {
    for (const el of MiraSymbol.#live)
      el.#render();
  }
  connectedCallback() {
    MiraSymbol.#live.add(this);
    this.style.display ||= "inline-grid";
    this.#render();
  }
  disconnectedCallback() {
    MiraSymbol.#live.delete(this);
  }
  attributeChangedCallback() {
    if (this.isConnected)
      this.#render();
  }
  #render() {
    const sym = registry.get(this.getAttribute("name") ?? "");
    this.replaceChildren();
    if (!sym)
      return;
    const mirror = !!sym.rtl && getComputedStyle(this).direction === "rtl";
    const uid = `ms-${this.getAttribute("name").replace(/\./g, "-")}-${++MiraSymbol.#seq}`;
    this.appendChild(symbolToElement(sym, {
      weight: this.getAttribute("weight") ?? "regular",
      shape: this.getAttribute("shape") ?? "outline",
      tone: this.getAttribute("tone") ?? "mono",
      size: this.getAttribute("size") ?? "md",
      label: this.getAttribute("label") ?? undefined,
      mirror,
      id: uid
    }));
  }
  static #seq = 0;
}
if (!customElements.get("mira-symbol"))
  customElements.define("mira-symbol", MiraSymbol);
