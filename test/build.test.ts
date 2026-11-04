import { describe, expect, it } from "bun:test";
import * as data from "../src/data.js";
import * as render from "../src/render.js";
import { generate, generateNativeHeader, codepoint } from "../scripts/build-core.js";

const pkg = JSON.parse(await Bun.file("package.json").text());
const opts = { version: pkg.version, name: pkg.name };
const files = generate(data, render, opts);
const byPath = new Map(files.map((f) => [f.path, f.content]));

describe("generate() — déterminisme et forme", () => {
  it("deux appels donnent des fichiers identiques", () => {
    const again = generate(data, render, opts);
    expect(again).toEqual(files);
  });

  it("395 fichiers", () => {
    expect(files.length).toBe(395);
  });

  it("chaque fichier généré == le fichier commité sous dist/, octet pour octet", async () => {
    for (const f of files) {
      const committed = await Bun.file(`dist/${f.path}`).text();
      expect(f.content).toBe(committed);
    }
  });

  it("generateNativeHeader() == native/mira_symbols_data.h, octet pour octet", async () => {
    const header = generateNativeHeader(data, render, { version: pkg.version });
    const committed = await Bun.file("native/mira_symbols_data.h").text();
    expect(header).toBe(committed);
  });
});

describe("sprites", () => {
  const shapes = ["outline", "fill"];
  it("12 sprites <graisse>-<forme>.svg", () => {
    const sprites = files.filter((f) => f.path.startsWith("sprite/"));
    expect(sprites.length).toBe(data.WEIGHTS.length * shapes.length);
  });

  for (const w of data.WEIGHTS) {
    for (const shape of shapes) {
      it(`sprite/${w.id}-${shape}.svg contient un <symbol> par symbole`, () => {
        const content = byPath.get(`sprite/${w.id}-${shape}.svg`)!;
        expect(content).toBeDefined();
        const ids = [...content.matchAll(/<symbol id="([^"]+)"/g)].map((m) => m[1]);
        expect(ids).toEqual(data.SYMBOLS.map((s) => s.name));
      });
    }
  }
});

describe("codepoints.json", () => {
  it("contigus depuis U+E000 dans l'ordre de SYMBOLS", () => {
    const cp = JSON.parse(byPath.get("font/codepoints.json")!);
    data.SYMBOLS.forEach((s, i) => expect(cp[s.name]).toBe(codepoint(i)));
    expect(codepoint(0)).toBe("U+E000");
  });
});

describe("mira-symbols.css", () => {
  it("une règle ::before par symbole", () => {
    const css = byPath.get("font/mira-symbols.css")!;
    for (const s of data.SYMBOLS) {
      expect(css).toContain(`.mira-symbol-${s.name.replace(/\./g, "-")}::before`);
    }
    const rules = [...css.matchAll(/::before/g)];
    expect(rules.length).toBe(data.SYMBOLS.length);
  });
});

describe("esm/*.js", () => {
  it("export default sans clé cat, nom correspondant au fichier", () => {
    for (const s of data.SYMBOLS) {
      const content = byPath.get(`esm/${s.name}.js`)!;
      expect(content).toBeDefined();
      expect(content.startsWith("export default {")).toBe(true);
      expect(content.trim().endsWith("};")).toBe(true);
      const obj = JSON.parse(content.slice("export default ".length, content.lastIndexOf(";")));
      expect(obj.name).toBe(s.name);
      expect(obj.cat).toBeUndefined();
    }
  });

  it("index.js : une ligne de ré-export par symbole", () => {
    const content = byPath.get("esm/index.js")!;
    const lines = content.trim().split("\n");
    expect(lines.length).toBe(data.SYMBOLS.length);
    data.SYMBOLS.forEach((s, i) => {
      expect(lines[i]).toBe(`export { default as ${render.identifier(s.name)} } from "./${s.name}.js";`);
    });
  });
});
