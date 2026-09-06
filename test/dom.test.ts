// Relies on the happy-dom preload (bunfig.toml -> test/setup.ts).
import { describe, expect, it } from "bun:test";
import { byName } from "../src/data.js";
import { symbolToElement } from "../src/render.js";
import { MiraSymbol } from "../src/mira-symbol.js";

MiraSymbol.register(byName["trash"], byName["chevron.left"], byName["square.and.arrow.up"]);

describe("MiraSymbol", () => {
  it("est défini une seule fois sous mira-symbol", () => {
    expect(customElements.get("mira-symbol")).toBe(MiraSymbol);
  });

  it("observedAttributes", () => {
    expect(MiraSymbol.observedAttributes).toEqual(["name", "weight", "shape", "tone", "size", "label"]);
  });

  it("register / get", () => {
    expect(MiraSymbol.get("trash")).toBe(byName["trash"]);
    expect(MiraSymbol.get("inconnu")).toBeUndefined();
  });

  it("connectedCallback rend un <svg> pour un nom enregistré", () => {
    const el = document.createElement("mira-symbol");
    el.setAttribute("name", "trash");
    document.body.appendChild(el);
    expect(el.querySelector("svg")).not.toBeNull();
    el.remove();
  });

  it("connectedCallback ne rend rien pour un nom inconnu", () => {
    const el = document.createElement("mira-symbol");
    el.setAttribute("name", "ne.existe.pas");
    document.body.appendChild(el);
    expect(el.children.length).toBe(0);
    el.remove();
  });

  it("un changement d'attribut re-rend (graisse -> largeur de trait)", () => {
    const el = document.createElement("mira-symbol");
    el.setAttribute("name", "trash");
    el.setAttribute("weight", "thin");
    document.body.appendChild(el);
    expect(el.querySelector("svg")?.getAttribute("stroke-width")).toBe("1");
    el.setAttribute("weight", "bold");
    expect(el.querySelector("svg")?.getAttribute("stroke-width")).toBe("2.4");
    el.remove();
  });

  it("miroir RTL quand direction:rtl et sym.rtl", () => {
    const el = document.createElement("mira-symbol");
    el.setAttribute("name", "chevron.left");
    el.style.direction = "rtl";
    document.body.appendChild(el);
    expect(el.querySelector("svg")?.getAttribute("style")).toContain("scale:-1 1");
    el.remove();
  });

  it("pas de miroir en RTL si le symbole n'a pas rtl", () => {
    const el = document.createElement("mira-symbol");
    el.setAttribute("name", "trash");
    el.style.direction = "rtl";
    document.body.appendChild(el);
    expect(el.querySelector("svg")?.getAttribute("style")).not.toContain("scale");
    el.remove();
  });
});

describe("symbolToElement", () => {
  it("espace de noms SVG et viewBox", () => {
    const svg = symbolToElement(byName["trash"]);
    expect(svg.namespaceURI).toBe("http://www.w3.org/2000/svg");
    expect(svg.getAttribute("viewBox")).toBe("0 0 24 24");
  });

  it("ids de masque uniques et préfixés", () => {
    const svg = symbolToElement(byName["square.and.arrow.up"], { shape: "fill", id: "abc" });
    const masks = [...svg.querySelectorAll("mask")].map((m) => m.getAttribute("id"));
    expect(masks.length).toBeGreaterThan(0);
    for (const id of masks) expect(id!.startsWith("abc-")).toBe(true);
    expect(new Set(masks).size).toBe(masks.length);
  });

  it("deux instances ont des ids de masque distincts", () => {
    const a = symbolToElement(byName["square.and.arrow.up"], { shape: "fill", id: "a" });
    const b = symbolToElement(byName["square.and.arrow.up"], { shape: "fill", id: "b" });
    const idsOf = (svg: SVGSVGElement) => [...svg.querySelectorAll("mask")].map((m) => m.getAttribute("id"));
    const [ai, bi] = [idsOf(a), idsOf(b)];
    for (const id of ai) expect(bi).not.toContain(id);
  });

  it("label -> role=img + aria-label, sans aria-hidden", () => {
    const svg = symbolToElement(byName["trash"], { label: "Supprimer" });
    expect(svg.getAttribute("role")).toBe("img");
    expect(svg.getAttribute("aria-label")).toBe("Supprimer");
    expect(svg.hasAttribute("aria-hidden")).toBe(false);
  });

  it("sans label -> décoratif (aria-hidden=true)", () => {
    const svg = symbolToElement(byName["trash"]);
    expect(svg.getAttribute("aria-hidden")).toBe("true");
  });
});
