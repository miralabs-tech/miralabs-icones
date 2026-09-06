import type { SymbolData } from "./types.js";
export declare class MiraSymbol extends HTMLElement {
    #private;
    static observedAttributes: string[];
    static register(...symbols: SymbolData[]): void;
    static get(name: string): SymbolData | undefined;
    connectedCallback(): void;
    disconnectedCallback(): void;
    attributeChangedCallback(): void;
}
