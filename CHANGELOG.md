# Changelog

All notable changes to `@miralabs-tech/icones`. The format follows [Keep a Changelog](https://keepachangelog.com/en/1.1.0/), and versions follow [semver](https://semver.org/) from the consumer's side: a new symbol is a minor, a corrected path is a patch, a renamed or removed symbol is a major.

## [Unreleased]

### Fixed

- `package.json`: `repository` is now an object, as npm expects (it was auto-corrected at publish time).

## [0.4.0] - 2026-11-06

### Added

- **Clothing & accessories** collection (36 symbols): `figure.stand`, `hair`, `helmet`, `tshirt`, `jacket`, `gloves`, `pants`, `shoe`, `underwear`, `eyeglasses`, `earring`, `necklace`, `bracelet`, `anklet`, `ring`, `vest`, `parachute`, `hat`, `cap`, `beanie`, `helmet.motorcycle`, `helmet.motocross`, `vest.armor`, `boot`, `shoe.heel`, `shorts`, `skirt`, `hoodie`, `shirt`, `sunglasses`, `goggles`, `mask`, `backpack`, `beard`, `tattoo`, `dress`.
- **Weapons** collection (18 symbols): `pistol`, `pistol.m1911`, `pistol.magnum`, `revolver`, `rifle.ak47`, `rifle.m4a1`, `rifle.m16`, `rifle.kar98k`, `rifle.sniper`, `shotgun`, `smg`, `smg.drum`, `launcher.rpg`, `knife`, `bat`, `grenade`, `ammo`, `crosshair`. Brand names live in tags only.
- **Survival** collection (14 symbols): `skull`, `sword`, `axe`, `pickaxe`, `tent`, `campfire`, `flashlight`, `pill`, `syringe`, `bandage`, `bottle`, `can`, `jerrycan`, `binoculars`.
- Vehicles in **Maps & places**: `bicycle`, `motorcycle`, `sailboat`, `helicopter`, `truck.box`.
- Interface symbols: `square.and.pencil`, `checklist`, `clock.arrow.circlepath`, `paintpalette`.
- English README with badges and a preview sheet, `README.fr.md`, `CONTRIBUTING.md`, and `scripts/preview.ts`.

### Changed

- Releases run from a manual workflow (`workflow_dispatch`) and publish through npm trusted publishing, with a provenance attestation and no token.

The set grows from 359 to 436 symbols and from 22 to 25 collections; existing names and codepoints are unchanged.

## [0.3.0] - 2026-09-06

### Added

- First public release under the `@miralabs-tech` scope: layered source on a 24 grid, six weights, outline and fill, mono and hierarchical tones; web renderer, `<mira-symbol>` web component, sprites, font, JSON data, framework adapters and the C99 native engine.

[Unreleased]: https://github.com/miralabs-tech/miralabs-icones/compare/v0.4.0...HEAD
[0.4.0]: https://github.com/miralabs-tech/miralabs-icones/compare/v0.3.0...v0.4.0
[0.3.0]: https://github.com/miralabs-tech/miralabs-icones/releases/tag/v0.3.0
