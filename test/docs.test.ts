import { describe, expect, it } from "bun:test";
import { existsSync } from "node:fs";
import { resolve } from "node:path";
import { pathToFileURL } from "node:url";

const html = await Bun.file("docs/index.html").text();
const specifiers = [...html.matchAll(/^import\b[^\n]*?\bfrom\s+"([^"]+)";?/gm)].map((m) => m[1]);
const EXPECTED: Record<string, string[]> = {
  data: ["SYMBOLS", "WEIGHTS", "CATEGORIES"],
  render: ["symbolToString", "identifier"],
};

describe("docs/index.html", () => {
  it("importe exactement deux modules relatifs", () => {
    expect(specifiers.length).toBe(2);
    for (const s of specifiers) expect(s.startsWith("../")).toBe(true);
  });

  for (const spec of specifiers) {
    const path = resolve("docs", spec);
    const key = spec.endsWith("data.js") ? "data" : "render";
    it(`${spec} existe tel quel et exporte ${EXPECTED[key].join(", ")}`, async () => {
      expect(existsSync(path)).toBe(true);
      const mod = await import(pathToFileURL(path).href);
      for (const k of EXPECTED[key]) expect(k in mod).toBe(true);
    });
  }
});
