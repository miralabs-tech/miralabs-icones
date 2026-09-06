// Bun has no DOM: happy-dom supplies document/customElements for the web component tests.
import { Window } from "happy-dom";

const win = new Window();

for (const key of ["document", "customElements", "HTMLElement", "Element", "Node", "SVGElement", "getComputedStyle", "Event", "CustomEvent"]) {
  (globalThis as Record<string, unknown>)[key] = (win as unknown as Record<string, unknown>)[key];
}
