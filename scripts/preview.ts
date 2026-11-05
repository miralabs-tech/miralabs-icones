import { Resvg } from "@resvg/resvg-js";
import { byName } from "../src/data.js";
import { symbolTree, treeToString } from "../src/render.js";

const NAMES = [
  "house", "magnifyingglass", "gearshape", "bell", "envelope", "bubble.left.and.bubble.right", "person.2", "heart",
  "star", "bookmark", "paperplane", "trash", "folder", "doc.text", "chart.bar", "calendar",
  "lock", "key", "shield", "eye", "faceid", "terminal", "curlybraces", "arrow.triangle.branch",
  "cpu", "wifi", "battery.100.bolt", "camera", "music.note", "play.rectangle", "mic", "headphones",
  "map", "mappin", "globe", "car", "bicycle", "airplane", "sailboat", "helicopter",
  "sun.max", "cloud.rain", "snowflake", "flame", "leaf", "rocket", "crown", "trophy",
  "gamecontroller", "dice", "tshirt", "hoodie", "cap", "sunglasses", "helmet.motorcycle", "backpack",
  "tent", "campfire", "axe", "binoculars", "skull", "sword", "rifle.ak47", "crosshair",
];
const COLS = 16;
const CELL = 56;
const ICON = 32;
const PAD = 24;

const picked = NAMES.map((n) => {
  const sym = byName[n as keyof typeof byName];
  if (!sym) throw new Error(`unknown symbol: ${n}`);
  return sym;
});
const ROWS = Math.ceil(picked.length / COLS);
const W = PAD * 2 + COLS * CELL;
const H = PAD * 2 + ROWS * CELL;
let body = "";
picked.forEach((sym, i) => {
  const x = PAD + (i % COLS) * CELL + (CELL - ICON) / 2;
  const y = PAD + Math.floor(i / COLS) * CELL + (CELL - ICON) / 2;
  const shape = Math.floor(i / COLS) % 2 === 1 ? "fill" : "outline";
  const t = symbolTree(sym, { weight: "regular", shape, id: `p${i}` });
  Object.assign(t.attrs, { x: String(x), y: String(y), width: String(ICON), height: String(ICON), color: "#e8e8ea" });
  body += treeToString(t);
});

const svg = `<svg xmlns="http://www.w3.org/2000/svg" width="${W}" height="${H}"><rect width="${W}" height="${H}" rx="16" fill="#16181c"/>${body}</svg>`;
const out = process.argv[2] ?? "docs/preview.png";
await Bun.write(out, new Resvg(svg, { fitTo: { mode: "zoom", value: 2 } }).render().asPng());
console.log(`${out}: ${picked.length} symbols`);
