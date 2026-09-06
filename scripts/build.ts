#!/usr/bin/env bun
// Build de @miralabs-tech/icones.
//   bun scripts/build.ts            → dist/ (modules transpilés, déclarations, metadata, symbols.json, ir.json, esm, sprites, css police) + native/mira_symbols_data.h
//   bun scripts/build.ts --static   → + dist/svg/<graisse>/<forme>/<nom>.svg
//   bun scripts/build.ts --font     → + dist/font/mira-symbols.{ttf,woff2} (héritage ; dépendances optionnelles)
//   bun scripts/build.ts --check    → n'écrit rien : compare la génération à ce qui est sur le disque, sort 1 en cas d'écart
//
// Police : nos glyphes sont des TRAITS ; une police exige des contours pleins. Le pas « stroke → outline »
// est donc obligatoire et non réversible : c'est pourquoi la police est un format d'héritage, dérivé, jamais la source.

import { mkdtemp, rm } from "node:fs/promises";
import { tmpdir } from "node:os";
import { join } from "node:path";
import { fileURLToPath } from "node:url";
import { generate, generateNativeHeader } from "./build-core.js";
import { NAMES_REL, namesSource, readNames, writeNames } from "./codegen.js";
import * as data from "../src/data.js";
import * as render from "../src/render.js";

const root = fileURLToPath(new URL("..", import.meta.url)).replace(/\\/g, "/").replace(/\/+$/, "");
const dist = `${root}/dist`;
const header = `${root}/native/mira_symbols_data.h`;
const args = new Set(process.argv.slice(2));
const pkg = (await Bun.file(`${root}/package.json`).json().catch(() => ({ name: "@miralabs-tech/icones", version: "0.3.0" }))) as { name: string; version: string };
const opts = { version: pkg.version, name: pkg.name, staticSvg: args.has("--static") };

async function run(cmd: string[]): Promise<void> {
  const proc = Bun.spawn(cmd, { cwd: root, stdout: "pipe", stderr: "pipe" });
  const [code, out, err] = await Promise.all([proc.exited, new Response(proc.stdout).text(), new Response(proc.stderr).text()]);
  if (code !== 0) throw new Error(`${cmd.join(" ")} → code ${code}\n${out}${err}`.trimEnd());
}

async function textOf(path: string): Promise<string | null> {
  const file = Bun.file(path);
  return (await file.exists()) ? await file.text() : null;
}

const ENTRIES = ["src/data.ts", "src/ir.ts", "src/render.ts", "src/mira-symbol.ts", "src/mira-symbol.all.ts"];

// Single definition of the compiled half of dist/, shared by the build and by --check: were --check to
// re-spell these commands, a divergence between the two would make the comparison meaningless.
// Bun.build({ bundle: false }) is ignored in Bun 1.4 and inlines imported modules into their importer;
// only the CLI's --no-bundle transpiles one file per entry and keeps the "./x.js" specifiers verbatim.
async function compile(outDir: string): Promise<void> {
  await Promise.all([
    run(["bun", "x", "tsc", "-p", "tsconfig.build.json", "--outDir", outDir]),
    run(["bun", "build", ...ENTRIES, "--no-bundle", "--root=src", "--target=browser", "--format=esm", `--outdir=${outDir}`]),
  ]);
}

const scan = async (cwd: string, pattern: string): Promise<string[]> => {
  const out: string[] = [];
  for await (const rel of new Bun.Glob(pattern).scan({ cwd })) out.push(rel.replace(/\\/g, "/"));
  return out.sort();
};

if (args.has("--check")) {
  const drift: string[] = [];
  if ((await readNames()) !== namesSource()) drift.push(NAMES_REL);
  const files = generate(data, render, opts);
  for (const f of files) if ((await textOf(`${dist}/${f.path}`)) !== f.content) drift.push(`dist/${f.path}`);
  if ((await textOf(header)) !== generateNativeHeader(data, render, { version: pkg.version })) drift.push("native/mira_symbols_data.h");

  // dist/*.js and dist/*.d.ts have no in-memory generator: recompile to a throwaway directory and diff.
  const tmp = await mkdtemp(join(tmpdir(), "mira-icones-check-"));
  let compiled: string[] = [];
  try {
    await compile(tmp);
    compiled = await scan(tmp, "**/*");
    for (const rel of compiled) {
      if ((await textOf(`${dist}/${rel}`)) !== (await Bun.file(`${tmp}/${rel}`).text())) drift.push(`dist/${rel}`);
    }
  } finally {
    await rm(tmp, { recursive: true, force: true });
  }

  // A source module deleted since the last build leaves its dist/*.js behind; the build rm -rf's dist/, --check cannot.
  const produced = new Set([...files.map((f) => f.path), ...compiled]);
  for (const rel of await scan(dist, "*.{js,d.ts}")) if (!produced.has(rel)) drift.push(`dist/${rel} (orphelin)`);

  if (drift.length) {
    console.error(`✗ ${drift.length} fichier(s) périmé(s) — lancez : bun run build`);
    for (const d of drift) console.error(`  ${d}`);
    process.exit(1);
  }
  console.log(`✓ ${files.length + compiled.length} fichiers + ${NAMES_REL} + native/mira_symbols_data.h à jour (${data.SYMBOLS.length} symboles)`);
} else {
  await rm(dist, { recursive: true, force: true });
  if (await writeNames()) console.log(`✓ ${NAMES_REL} régénéré`);

  await compile(dist);

  const files = generate(data, render, opts);
  for (const f of files) await Bun.write(`${dist}/${f.path}`, f.content);
  await Bun.write(header, generateNativeHeader(data, render, { version: pkg.version }));
  console.log(`✓ ${files.length} fichiers → dist/ + native/mira_symbols_data.h (${data.SYMBOLS.length} symboles)`);

  if (args.has("--font")) await (await import("./font.js")).buildFont(dist, data, render);
}
