// The optional font packages ship no types: minimal shapes of what scripts/font.ts uses.

declare module "oslllo-svg-fixer" {
  export default function fixer(source: string, destination: string, options?: Record<string, unknown>): { fix(): Promise<void> };
}

// Named export, not a default one: v16 exposes SVGIcons2SVGFontStream / SVGIconsDirStream / fileSorter.
declare module "svgicons2svgfont" {
  import type { Transform } from "node:stream";
  export class SVGIcons2SVGFontStream extends Transform {
    constructor(options?: Record<string, unknown>);
  }
}

declare module "svg2ttf" {
  export default function svg2ttf(svgFont: string, options?: Record<string, unknown>): { buffer: Uint8Array };
}

declare module "ttf2woff2" {
  export default function ttf2woff2(ttf: Uint8Array): Buffer;
}
