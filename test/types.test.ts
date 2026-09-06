import { describe, expect, it } from "bun:test";

describe("déclarations publiées", () => {
  it("test/fixtures/consumer.ts compile contre dist/*.d.ts (skipLibCheck désactivé)", () => {
    const res = Bun.spawnSync(["bun", "x", "tsc", "-p", "tsconfig.dts.json", "--noEmit"]);
    if (res.exitCode !== 0) console.error(res.stdout.toString() + res.stderr.toString());
    expect(res.exitCode).toBe(0);
  });
});
