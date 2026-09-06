import { describe, expect, it, test } from "bun:test";
import { SYMBOLS, byName } from "../src/data.js";
import { identifier, treeToString, sizeStyle, symbolToString, SIZE_TOKENS } from "../src/render.js";

const RESERVED = new Set([
  "break", "case", "catch", "class", "const", "continue", "debugger", "default", "delete", "do", "else",
  "export", "extends", "finally", "for", "function", "if", "import", "in", "instanceof", "new", "return",
  "super", "switch", "this", "throw", "try", "typeof", "var", "void", "while", "with", "yield", "let",
  "static", "enum", "await", "implements", "package", "protected", "interface", "private", "public",
  "null", "true", "false",
]);
const isValidIdentifier = (id: string) => /^[A-Za-z_$][A-Za-z0-9_$]*$/.test(id);

const expectedIdentifier = (name: string) => {
  const id = name.split(".").map((s, i) => (i ? s.charAt(0).toUpperCase() + s.slice(1) : s)).join("");
  return /^\d/.test(id) || RESERVED.has(id) ? `_${id}` : id;
};

describe("identifier", () => {
  for (const sym of SYMBOLS) {
    it(sym.name, () => {
      expect(identifier(sym.name)).toBe(expectedIdentifier(sym.name));
    });
  }

  it("chevron.left -> chevronLeft", () => expect(identifier("chevron.left")).toBe("chevronLeft"));
  it("square.and.arrow.up -> squareAndArrowUp", () => expect(identifier("square.and.arrow.up")).toBe("squareAndArrowUp"));
  it.each(["2g", "3g", "4g", "5g"])("%s -> _%s", (n) => expect(identifier(n)).toBe(`_${n}`));
  it("return -> _return", () => expect(identifier("return")).toBe("_return"));
  it("function -> _function", () => expect(identifier("function")).toBe("_function"));

  test("return n'est pas un identifiant réservé", () => {
    expect(RESERVED.has(identifier("return"))).toBe(false);
  });
  test("function n'est pas un identifiant réservé", () => {
    expect(RESERVED.has(identifier("function"))).toBe(false);
  });
  test("tous les identifiants produits sont valides et non réservés", () => {
    for (const sym of SYMBOLS) {
      const id = identifier(sym.name);
      expect(isValidIdentifier(id)).toBe(true);
      expect(RESERVED.has(id)).toBe(false);
    }
  });
});

describe("treeToString", () => {
  it("échappe les guillemets dans les attributs", () => {
    const leaf = { tag: "path", attrs: { d: 'M0 0 "q"' }, children: [] };
    expect(treeToString(leaf)).toBe('<path d="M0 0 &quot;q&quot;"/>');
  });

  it("mode compact : pas de retour à la ligne", () => {
    const tree = { tag: "svg", attrs: { viewBox: "0 0 24 24" }, children: [{ tag: "path", attrs: { d: "M0 0" }, children: [] }] };
    expect(treeToString(tree)).toBe('<svg viewBox="0 0 24 24"><path d="M0 0"/></svg>');
  });

  it("mode pretty : indente et saute des lignes", () => {
    const tree = { tag: "svg", attrs: { viewBox: "0 0 24 24" }, children: [{ tag: "path", attrs: { d: "M0 0" }, children: [] }] };
    expect(treeToString(tree, true)).toBe('<svg viewBox="0 0 24 24">\n  <path d="M0 0"/>\n</svg>');
  });
});

describe("sizeStyle", () => {
  it("jeton par défaut (md)", () => expect(sizeStyle()).toBe(`inline-size:${SIZE_TOKENS.md};block-size:${SIZE_TOKENS.md}`));
  it("jeton sm", () => expect(sizeStyle("sm")).toBe(`inline-size:${SIZE_TOKENS.sm};block-size:${SIZE_TOKENS.sm}`));
  it("longueur CSS", () => expect(sizeStyle("24px")).toBe("inline-size:24px;block-size:24px"));
  it("miroir", () => expect(sizeStyle("24px", true)).toBe("inline-size:24px;block-size:24px;scale:-1 1"));
});

describe("symbolToString a11y", () => {
  const sym = byName["trash"];

  it("avec label : role=img + aria-label, sans aria-hidden", () => {
    const svg = symbolToString(sym, { label: "Supprimer" });
    expect(svg).toContain('role="img"');
    expect(svg).toContain('aria-label="Supprimer"');
    expect(svg).not.toContain("aria-hidden");
  });

  it("sans label : décoratif (aria-hidden=true)", () => {
    const svg = symbolToString(sym);
    expect(svg).toContain('aria-hidden="true"');
    expect(svg).not.toContain("role=");
    expect(svg).not.toContain("aria-label");
  });
});
