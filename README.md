# Miralabs Icônes

Jeu de symboles de MiraLabs. **413 symboles, 24 collections**, tous dessinés à la main sur une grille 24 × 24 (trait 1,5 en Régulier, extrémités et jointures rondes). Les noms suivent la convention SF (`objet.modificateur`) ; aucun tracé n'est repris d'un jeu existant, aucun logo (voir [LICENSE-BRANDS](LICENSE-BRANDS)).

Explorateur : `docs/index.html` — en ligne via GitHub Pages (Settings → Pages → branche `main`, dossier `/` racine) à `https://miralabs-tech.github.io/miralabs-icones/docs/`, ou en local avec `bun run docs`.

## Le principe : une source, douze variantes, deux moteurs

Font Awesome dessine chaque style à la main. Ici un symbole est décrit **en couches**, et les variantes sont dérivées :

| Couche | Contour | Plein | Hiérarchique |
| --- | --- | --- | --- |
| `p` glyphe primaire | trait | trait, ou découpé dans `e` (`cut`), ou gardé au-dessus (`keep`, halo) | primaire |
| `e` enveloppe | trait | pleine | atténuée (42 %) |
| `c` traits à découper | trait | découpés dans `e` | suit `e` |
| `f` toujours pleine | pleine | pleine | primaire |
| `h` trou | découpé dans `f` | découpé dans `e` et `f` | — |
| `pf` chemin plein du glyphe | — | pleine (`"="` = fermer `p`) | — |

Six graisses = six largeurs de trait alignées sur `font-weight` (200 → 700 : 1 → 2,4). Deux formes (Contour, Plein), deux rendus (Mono, Hiérarchique). Couleur : toujours `currentColor`. Taille : par jeton (`--mira-icon-size-sm|md|lg`) ou longueur CSS.

Entre la source et les moteurs, une **IR** (`src/ir.ts`) : un symbole × une forme = une liste d'opérations `{ kind: fill|stroke, d, w: [k, c], cut }`. Le moteur web (`src/render.ts`) la traduit en SVG (masques) ; le moteur natif (`native/mira_symbols.h`, C99) la rasterise en masque de couverture. Les deux lisent la même chose, donc rendent la même chose.

## Arborescence

```
src/data.ts               ← LA source : couches, tags, collections (édition à la main, avec les aides circle/rr/txt)
src/ir.ts                 ← IR de rendu : symbolOps(sym, shape) — le contrat des moteurs
src/render.ts             ← moteur web (~1 kB) : symbolTree / symbolToString / symbolToElement
src/mira-symbol.ts        ← web component <mira-symbol> (light DOM, registre tree-shakable) ; .all.ts = tout le jeu
src/types.ts              ← contrats de types publics (SymbolData, SymbolSource, SymbolOptions, SymbolOp…)
src/names.ts              ← GÉNÉRÉ par scripts/codegen.ts depuis src/data.ts : unions SymbolName / SymbolCollection / SymbolWeight
scripts/build.ts          ← runner du build : codegen, tsc (déclarations) et bun build (JS) en parallèle, puis build-core
scripts/build-core.ts     ← génération pure (aucun disque) : metadata/symbols/ir.json, esm/*, index.d.ts, sprites, css police, header C
scripts/codegen.ts        ← écrit src/names.ts depuis src/data.ts (`--check` compare sans écrire)
scripts/font.ts           ← étape `--font` du build (trait → contour → woff2, dépendances optionnelles)
test/                     ← `bun test` (~1 s, audit géométrique via resvg inclus) ; test/browser/ = même audit sous Chromium, opt-in
native/                   ← mira_symbols.h (C99, nanosvg) + données générées + CMake + démo
adapters/                 ← React, Vue, Svelte, Angular : ~30 lignes chacun, aucun SVG dupliqué
docs/index.html           ← explorateur statique (GitHub Pages), importe dist/data.js et dist/render.js
dist/                     ← généré par `bun run build`, committé pour être consommable sans build : JS + .d.ts par sous-chemin, metadata/symbols/ir.json, esm/, sprite/, font/
```

## Sorties du build (`bun run build`)

- `data.js`, `ir.js`, `render.js`, `mira-symbol.js`, `mira-symbol.all.js` — transpilation directe de `src/*.ts` (`bun build --no-bundle`, un fichier par entrée, spécificateurs d'import inchangés) ; `.d.ts` associés émis par `bun x tsc` (déclarations seules).
- `index.d.ts` — généré par `build-core.ts` : **types seuls**, ré-exportés depuis `types.d.ts`, plus une constante typée par symbole (`trash: SymbolData & { name: "trash" }`). Il ne déclare aucune valeur que `esm/index.js` n'exporte pas au runtime : les fonctions vivent derrière `./ir` et `./render`, le tableau agrégé derrière `./data`.
- `symbols.json` — **la donnée complète et neutre** (chemins, couches, tags, collections) : ce qu'un moteur non-JS lit.
- `ir.json` — les opérations de peinture de chaque symbole × forme, une ligne par symbole.
- `metadata.json` — sans chemins : recherche, plugin Figma, autocomplétion.
- `esm/<nom>.js` + `esm/index.js` — un module par symbole (`squareAndArrowUp`, `_5g`) : tree-shaking natif.
- `sprite/<graisse>-<forme>.svg` — 12 sprites `<symbol>` pour `<use>`, zéro JS.
- `font/codepoints.json` + `font/mira-symbols.css` ; `--font` produit les `.ttf`/`.woff2` (héritage : les glyphes sont des traits, la conversion en contours est dérivée et non réversible ; via `oslllo-svg-fixer svgicons2svgfont svg2ttf ttf2woff2`).
- `--static` → `svg/<graisse>/<forme>/<nom>.svg`, 12 × 413 fichiers.
- `native/mira_symbols_data.h` — l'IR en tableaux C.

L'arbre `svg/` et les binaires de police ne sont **ni versionnés ni exportés par le paquet** : ce sont des [artefacts de release](#artefacts-de-release).

## Commandes

- `bun run build` — build complet (voir ci-dessus).
- `bun run build:static` — + `dist/svg/**`.
- `bun run build:font` — + `dist/font/mira-symbols.{ttf,woff2}`.
- `bun run build:check` — n'écrit rien, sort en erreur en cas de dérive : `src/names.ts`, fichiers générés, `native/mira_symbols_data.h`, ainsi que `dist/*.js` et `dist/*.d.ts` (recompilés dans un répertoire temporaire puis comparés) et les `dist/*.{js,d.ts}` orphelins.
- `bun run codegen` — régénère `src/names.ts` depuis `src/data.ts` ; `bun run codegen:check` — vérifie sans écrire.
- `bun run typecheck` — `src/` (isolatedDeclarations) + outillage (`scripts/`, `test/`).
- `bun run typecheck:dist` — compile un consommateur type contre `dist/*.d.ts`.
- `bun run test` — suite unitaire (`bun test`).
- `bun run test:browser` — suite géométrique opt-in (Chromium via Playwright, `vitest run -c vitest.config.ts`).
- `bun run dev` — serveur de développement : sert `docs/index.html`, reconstruit `dist/` à chaque modification de `src/` ou `scripts/` puis recharge la page (SSE, ~650 ms bout en bout). `--port`, `--static`.
- `bun run docs` — sert simplement la racine du dépôt, sans surveillance ni rechargement.

## Consommer

```sh
bun add @miralabs-tech/icones
```

```js
import { trash, magnifyingglass } from "@miralabs-tech/icones";           // données tree-shakées
import { symbolToString } from "@miralabs-tech/icones/render";
el.innerHTML = symbolToString(trash, { weight: "semibold", shape: "fill", size: "md", label: "Supprimer" });
```

```html
<mira-symbol name="trash" weight="semibold" shape="fill" size="md" label="Supprimer"></mira-symbol>
<svg style="inline-size:var(--mira-icon-size-md);block-size:var(--mira-icon-size-md)"><use href="/icones/sprite/semibold-fill.svg#trash"/></svg>
```

Natif (C, ou n'importe quel langage par FFI) : voir [`native/README.md`](native/README.md).

Dans **miralabs-ui**, le paquet est une dépendance npm versionnée (`"@miralabs-tech/icones": "^0.3.0"`) ; seul `packages/react/src/components/symbol/` y vit, à partir de `adapters/react/Symbol.tsx`. La forme `github:miralabs-tech/miralabs-icones#v0.3.0` reste valable puisque `dist/` est committé, mais n'a plus de raison d'être depuis la publication sur npm.

## Artefacts de release

Le paquet npm — et, à défaut, une dépendance `github:`, `dist/` étant committé — porte le JS, les types, les sprites et les JSON. Deux sorties du build en sont volontairement exclues — 4308 fichiers pour l'une, du binaire pour l'autre — donc elles ne sont pas des sous-chemins du paquet : [`.github/workflows/release.yml`](.github/workflows/release.yml) les attache à chaque tag `v*`.

| Archive | Contenu |
| --- | --- |
| `mira-icones-svg-<version>.zip` | `svg/<graisse>/<forme>/<nom>.svg` — 12 × 413 fichiers |
| `mira-icones-font-<version>.zip` | `mira-symbols.ttf`, `mira-symbols.woff2`, `mira-symbols.css`, `codepoints.json` |
| `mira-icones-sprite-<version>.zip` | les 12 sprites `<use>` (aussi dans le paquet, via `./sprite/*`) |
| `mira-icones-metadata-<version>.zip` | `metadata.json`, `symbols.json`, `ir.json` |

En local, `bun run build:font` les régénère à l'identique dans `dist/`.

## Ajouter ou corriger un symbole

1. Une ligne dans `src/data.ts`, dans sa collection : nom SF, tags (synonymes français — ce que l'on tape dans la recherche), couches.
2. Règles de dessin : grille 24, marges optiques ≈ 3, trait 1,5, arcs plutôt que courbes libres, points sur la demi-grille (x,5) pour un rendu net à 12 px. Un point = trait de longueur 0,01 (il grossit avec la graisse). Yeux, lettres et lignes internes vont dans `c`.
3. Nouveau nom : `bun run codegen` (ou simplement `bun run build`, qui l'inclut) pour régénérer `src/names.ts`. Puis vérification dans l'explorateur (Contour × Plein × 6 graisses) et `bun test`.

Note : l'identifiant JS d'un symbole est dérivé de son nom SF (`square.and.arrow.up` → `squareAndArrowUp`) ; un mot réservé JS est préfixé d'un `_` (`2g` → `_2g`, `return` → `_return`, `function` → `_function`).

## Versions

Semver côté consommateur : ajouter un symbole = mineure ; corriger un tracé = correctif ; renommer ou retirer = majeure. Chaque tag embarque `dist/` reconstruit.

## Licences

Dessins, code et données : [MIT](LICENSE). Marques de tiers : jamais incluses, politique dans [LICENSE-BRANDS](LICENSE-BRANDS). `native/vendor/nanosvg*` : zlib.
