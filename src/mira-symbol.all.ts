// Tout le jeu enregistré d'un coup — pour la doc, les prototypes, ou une app qui affiche des symboles arbitraires.
import { MiraSymbol } from "./mira-symbol.js";
import { SYMBOLS } from "./data.js";
MiraSymbol.register(...SYMBOLS);
export { MiraSymbol };
