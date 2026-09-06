import { describe, expect, it } from "bun:test";
import { SYMBOLS, WEIGHTS } from "../src/data.js";
import { symbolOps, WEIGHT_STROKE, SHAPES } from "../src/ir.js";

function checkOp(op: ReturnType<typeof symbolOps>[number]) {
  expect(typeof op.d).toBe("string");
  expect(op.d.length).toBeGreaterThan(0);
  expect(["fill", "stroke"]).toContain(op.kind);
  if (op.w !== undefined) expect(op.w).toHaveLength(2);
  if (op.cut) {
    expect(op.cut.length).toBeGreaterThan(0);
    for (const c of op.cut) {
      expect(["fill", "stroke"]).toContain(c.kind);
      expect(typeof c.d).toBe("string");
      expect(c.d.length).toBeGreaterThan(0);
      if (c.w !== undefined) expect(c.w).toHaveLength(2);
    }
  }
}

describe("ir invariants", () => {
  for (const sym of SYMBOLS) {
    for (const shape of SHAPES) {
      it(`${sym.name} ${shape}`, () => {
        const ops = symbolOps(sym, shape);
        for (const op of ops) checkOp(op);
      });
    }
  }

  it("symbolOps deterministe", () => {
    for (const sym of SYMBOLS) {
      for (const shape of SHAPES) {
        expect(symbolOps(sym, shape)).toEqual(symbolOps(sym, shape));
      }
    }
  });

  it("WEIGHT_STROKE == WEIGHTS.sw par id", () => {
    for (const w of WEIGHTS) expect(WEIGHT_STROKE[w.id]).toBe(w.sw);
  });
});

const byName = Object.fromEntries(SYMBOLS.map((s) => [s.name, s]));

// One symbol per branch of src/ir.ts; see src/data.ts for each symbol's layers.
const SAMPLES: Array<[string, string]> = [
  ["plus", "seulement p"],
  ["cat", "e+p+c, cut par défaut"],
  ["scissors", "cut:false"],
  ["square.and.arrow.up", "keep:true"],
  ["star", 'pf:"="'],
  ["doc.on.doc", "pf chemin réel"],
  ["battery.100.bolt", "f+h"],
  ["house", 'fade:"p"'],
];

describe("ir snapshots (branches)", () => {
  for (const [name, label] of SAMPLES) {
    const sym = byName[name];
    for (const shape of SHAPES) {
      for (const hier of [false, true]) {
        it(`${name} (${label}) ${shape} hier=${hier}`, () => {
          expect(symbolOps(sym, shape, { hier })).toMatchSnapshot();
        });
      }
    }
  }
});
