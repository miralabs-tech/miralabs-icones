import { defineConfig } from "vitest/config";
import { playwright } from "@vitest/browser-playwright";

// Audit géométrique du jeu (test/browser/symbols.vitest.ts) : chaque symbole est rendu sur un canvas réel.
export default defineConfig({
  test: {
    include: ["test/browser/**/*.vitest.ts"],
    browser: { enabled: true, headless: true, provider: playwright(), instances: [{ browser: (process.env.MIRA_BROWSER ?? "chromium") as "chromium" | "firefox" | "webkit" }] },
  },
});
