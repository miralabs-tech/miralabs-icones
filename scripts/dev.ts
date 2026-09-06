#!/usr/bin/env bun
// Serveur de développement : sert le dépôt tel quel (ESM natif, aucun bundler), reconstruit dist/ dès que
// src/ ou scripts/ change, puis recharge la page ouverte.
//   bun scripts/dev.ts                → http://localhost:4173/ (docs/index.html)
//   bun scripts/dev.ts --port 5000    → autre port
//   bun scripts/dev.ts --static       → reconstruit aussi dist/svg/ (12 × N fichiers, lent)
//
// The reload client is injected into the HTML response, never into docs/index.html itself: that file is the
// published demo and test/docs.test.ts pins the exact set of module specifiers it is allowed to contain.

import { watch } from "node:fs";
import { fileURLToPath } from "node:url";

const root = fileURLToPath(new URL("..", import.meta.url)).replace(/\\/g, "/").replace(/\/+$/, "");
const argv = process.argv.slice(2);
const portFlag = argv.indexOf("--port");
const port = portFlag >= 0 ? Number(argv[portFlag + 1]) : 4173;
const buildArgs = argv.includes("--static") ? ["--static"] : [];

const encoder = new TextEncoder();
const clients = new Set<ReadableStreamDefaultController<Uint8Array>>();

function broadcast(event: string): void {
  for (const c of clients) {
    try {
      c.enqueue(encoder.encode(`data: ${event}\n\n`));
    } catch {
      clients.delete(c);
    }
  }
}

const RELOAD_CLIENT = `<script>(()=>{const s=new EventSource("/__dev");s.onmessage=(e)=>{if(e.data==="reload")location.reload()}})()</script>`;

let building = false, queued = false;

async function rebuild(): Promise<void> {
  if (building) { queued = true; return; }
  building = true;
  const t0 = performance.now();
  const proc = Bun.spawn(["bun", `${root}/scripts/build.ts`, ...buildArgs], { cwd: root, stdout: "pipe", stderr: "pipe" });
  const [code, out, err] = await Promise.all([proc.exited, new Response(proc.stdout).text(), new Response(proc.stderr).text()]);
  building = false;
  if (code === 0) {
    console.log(`✓ dist/ reconstruit en ${Math.round(performance.now() - t0)} ms — rechargement`);
    broadcast("reload");
  } else {
    // Keep the last good dist/ in the browser rather than reloading onto a half-written tree.
    console.error(`✗ build (code ${code}) — page laissée en l'état\n${out}${err}`.trimEnd());
  }
  if (queued) { queued = false; await rebuild(); }
}

const debounce = (ms: number, fn: () => void): (() => void) => {
  let t: ReturnType<typeof setTimeout> | undefined;
  return () => { clearTimeout(t); t = setTimeout(fn, ms); };
};

const scheduleBuild = debounce(120, () => void rebuild());
const scheduleReload = debounce(120, () => broadcast("reload"));

// src/names.ts is written BY the build: watching it would make every rebuild trigger the next one.
watch(`${root}/src`, { recursive: true }, (_e, file) => { if (!/names\.ts$/.test(String(file ?? ""))) scheduleBuild(); });
watch(`${root}/scripts`, { recursive: true }, scheduleBuild);
watch(`${root}/docs`, { recursive: true }, scheduleReload);

const server = Bun.serve({
  port,
  idleTimeout: 0,
  async fetch(req) {
    let path = decodeURIComponent(new URL(req.url).pathname);

    if (path === "/__dev") {
      let self: ReadableStreamDefaultController<Uint8Array> | undefined;
      const stream = new ReadableStream<Uint8Array>({
        start(c) { self = c; clients.add(c); c.enqueue(encoder.encode("retry: 500\n\n")); },
        cancel() { if (self) clients.delete(self); },
      });
      return new Response(stream, { headers: { "content-type": "text/event-stream", "cache-control": "no-cache" } });
    }

    if (path === "/") path = "/docs/index.html";
    else if (path.endsWith("/")) path += "index.html";

    const file = Bun.file(`${root}${path}`);
    if (!(await file.exists())) return new Response(`404 ${path}`, { status: 404 });

    // no-store throughout: a rebuilt dist/*.js must never be served from the browser cache after a reload.
    if (path.endsWith(".html")) {
      const html = await file.text();
      const body = html.includes("</body>") ? html.replace("</body>", `${RELOAD_CLIENT}</body>`) : html + RELOAD_CLIENT;
      return new Response(body, { headers: { "content-type": "text/html; charset=utf-8", "cache-control": "no-store" } });
    }
    return new Response(file, { headers: { "cache-control": "no-store" } });
  },
});

console.log(`▸ http://localhost:${server.port}/  — src/ et scripts/ surveillés, docs/ rechargé à chaud`);
