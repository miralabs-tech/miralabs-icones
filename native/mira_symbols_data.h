/* mira_symbols_data.h — GÉNÉRÉ par scripts/build.ts depuis src/data.ts (0.4.0). Ne pas éditer. */
#ifndef MIRA_SYMBOLS_DATA_H
#define MIRA_SYMBOLS_DATA_H

#define MIRA_SYMBOL_COUNT 413
#define MIRA_GRID 24
static const float MIRA_WEIGHT_STROKE[6] = { 1.0f, 1.25f, 1.5f, 1.75f, 2.0f, 2.4f };

static const char *const mira_tags_0[] = { "retour", "pr\303\251c\303\251dent", "gauche", "fl\303\250che" };
static const MiraOp mira_ops_o_0[] = { { 1, 1.0f, 0.0f, "M15 5 8 12l7 7", 0, 0 } };
static const MiraOp mira_ops_f_0[] = { { 1, 1.0f, 0.0f, "M15 5 8 12l7 7", 0, 0 } };
static const char *const mira_tags_1[] = { "suivant", "droite", "fl\303\250che", "disclosure" };
static const MiraOp mira_ops_o_1[] = { { 1, 1.0f, 0.0f, "M9 5l7 7-7 7", 0, 0 } };
static const MiraOp mira_ops_f_1[] = { { 1, 1.0f, 0.0f, "M9 5l7 7-7 7", 0, 0 } };
static const char *const mira_tags_2[] = { "haut", "replier", "monter" };
static const MiraOp mira_ops_o_2[] = { { 1, 1.0f, 0.0f, "M5 15l7-7 7 7", 0, 0 } };
static const MiraOp mira_ops_f_2[] = { { 1, 1.0f, 0.0f, "M5 15l7-7 7 7", 0, 0 } };
static const char *const mira_tags_3[] = { "bas", "d\303\251plier", "descendre", "menu" };
static const MiraOp mira_ops_o_3[] = { { 1, 1.0f, 0.0f, "M5 9l7 7 7-7", 0, 0 } };
static const MiraOp mira_ops_f_3[] = { { 1, 1.0f, 0.0f, "M5 9l7 7 7-7", 0, 0 } };
static const char *const mira_tags_4[] = { "s\303\251lecteur", "select", "popup", "trier" };
static const MiraOp mira_ops_o_4[] = { { 1, 1.0f, 0.0f, "M8 9.5l4-4 4 4M8 14.5l4 4 4-4", 0, 0 } };
static const MiraOp mira_ops_f_4[] = { { 1, 1.0f, 0.0f, "M8 9.5l4-4 4 4M8 14.5l4 4 4-4", 0, 0 } };
static const char *const mira_tags_5[] = { "d\303\251but", "reculer vite", "double" };
static const MiraOp mira_ops_o_5[] = { { 1, 1.0f, 0.0f, "M11 5 4 12l7 7M20 5l-7 7 7 7", 0, 0 } };
static const MiraOp mira_ops_f_5[] = { { 1, 1.0f, 0.0f, "M11 5 4 12l7 7M20 5l-7 7 7 7", 0, 0 } };
static const char *const mira_tags_6[] = { "fin", "avancer vite", "double" };
static const MiraOp mira_ops_o_6[] = { { 1, 1.0f, 0.0f, "M4 5l7 7-7 7M13 5l7 7-7 7", 0, 0 } };
static const MiraOp mira_ops_f_6[] = { { 1, 1.0f, 0.0f, "M4 5l7 7-7 7M13 5l7 7-7 7", 0, 0 } };
static const char *const mira_tags_7[] = { "accueil", "maison", "home" };
static const MiraOp mira_ops_o_7[] = { { 1, 1.0f, 0.0f, "M4.5 10.5 12 4l7.5 6.5V19a1.5 1.5 0 0 1-1.5 1.5H6A1.5 1.5 0 0 1 4.5 19z", 0, 0 }, { 1, 1.0f, 0.0f, "M10 20.5v-6h4v6", 0, 0 } };
static const MiraOp mira_cut_7_f0[] = { { 1, 1.0f, 0.0f, "M10 20.5v-6h4v6", 0, 0 } };
static const MiraOp mira_ops_f_7[] = { { 0, 0.0f, 0.0f, "M4.5 10.5 12 4l7.5 6.5V19a1.5 1.5 0 0 1-1.5 1.5H6A1.5 1.5 0 0 1 4.5 19z", mira_cut_7_f0, 1 } };
static const char *const mira_tags_8[] = { "barre lat\303\251rale", "panneau", "afficher", "masquer" };
static const MiraOp mira_ops_o_8[] = { { 1, 1.0f, 0.0f, "M3.5 7A2.5 2.5 0 0 1 6 4.5h12A2.5 2.5 0 0 1 20.5 7v10a2.5 2.5 0 0 1-2.5 2.5H6A2.5 2.5 0 0 1 3.5 17z", 0, 0 }, { 1, 1.0f, 0.0f, "M9.5 4.5v15", 0, 0 } };
static const MiraOp mira_cut_8_f0[] = { { 1, 1.0f, 0.0f, "M9.5 4.5v15", 0, 0 } };
static const MiraOp mira_ops_f_8[] = { { 0, 0.0f, 0.0f, "M3.5 7A2.5 2.5 0 0 1 6 4.5h12A2.5 2.5 0 0 1 20.5 7v10a2.5 2.5 0 0 1-2.5 2.5H6A2.5 2.5 0 0 1 3.5 17z", mira_cut_8_f0, 1 } };
static const char *const mira_tags_9[] = { "inspecteur", "panneau droit", "afficher", "masquer" };
static const MiraOp mira_ops_o_9[] = { { 1, 1.0f, 0.0f, "M3.5 7A2.5 2.5 0 0 1 6 4.5h12A2.5 2.5 0 0 1 20.5 7v10a2.5 2.5 0 0 1-2.5 2.5H6A2.5 2.5 0 0 1 3.5 17z", 0, 0 }, { 1, 1.0f, 0.0f, "M14.5 4.5v15", 0, 0 } };
static const MiraOp mira_cut_9_f0[] = { { 1, 1.0f, 0.0f, "M14.5 4.5v15", 0, 0 } };
static const MiraOp mira_ops_f_9[] = { { 0, 0.0f, 0.0f, "M3.5 7A2.5 2.5 0 0 1 6 4.5h12A2.5 2.5 0 0 1 20.5 7v10a2.5 2.5 0 0 1-2.5 2.5H6A2.5 2.5 0 0 1 3.5 17z", mira_cut_9_f0, 1 } };
static const char *const mira_tags_10[] = { "menu", "hamburger", "liste", "options" };
static const MiraOp mira_ops_o_10[] = { { 1, 1.0f, 0.0f, "M4 7h16M4 12h16M4 17h16", 0, 0 } };
static const MiraOp mira_ops_f_10[] = { { 1, 1.0f, 0.0f, "M4 7h16M4 12h16M4 17h16", 0, 0 } };
static const char *const mira_tags_11[] = { "rechercher", "loupe", "chercher", "filtrer" };
static const MiraOp mira_ops_o_11[] = { { 1, 1.0f, 0.0f, "M10.5 17a6.5 6.5 0 1 0 0-13 6.5 6.5 0 0 0 0 13zM15.5 15.5l5 5", 0, 0 } };
static const MiraOp mira_ops_f_11[] = { { 1, 1.0f, 0.0f, "M10.5 17a6.5 6.5 0 1 0 0-13 6.5 6.5 0 0 0 0 13zM15.5 15.5l5 5", 0, 0 } };
static const char *const mira_tags_12[] = { "plus", "options", "davantage", "menu" };
static const MiraOp mira_ops_o_12[] = { { 1, 1.0f, 0.0f, "M6 12h.01M12 12h.01M18 12h.01", 0, 0 } };
static const MiraOp mira_ops_f_12[] = { { 1, 1.0f, 0.0f, "M6 12h.01M12 12h.01M18 12h.01", 0, 0 } };
static const char *const mira_tags_13[] = { "grille", "galerie", "vue", "applications", "tous", "windows", "microsoft" };
static const MiraOp mira_ops_o_13[] = { { 1, 1.0f, 0.0f, "M5.5 4h4a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-4a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5zM14.5 4h4a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-4a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5zM5.5 13h4a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-4a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5zM14.5 13h4a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-4a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5z", 0, 0 } };
static const MiraOp mira_ops_f_13[] = { { 0, 0.0f, 0.0f, "M5.5 4h4a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-4a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5zM14.5 4h4a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-4a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5zM5.5 13h4a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-4a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5zM14.5 13h4a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-4a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5z", 0, 0 } };
static const char *const mira_tags_14[] = { "d\303\251connexion", "quitter", "sortir", "logout" };
static const MiraOp mira_ops_o_14[] = { { 1, 1.0f, 0.0f, "M14 6V5a1.5 1.5 0 0 0-1.5-1.5h-7A1.5 1.5 0 0 0 4 5v14a1.5 1.5 0 0 0 1.5 1.5h7A1.5 1.5 0 0 0 14 19v-1M9.5 12h11M17 8.5l3.5 3.5-3.5 3.5", 0, 0 } };
static const MiraOp mira_ops_f_14[] = { { 1, 1.0f, 0.0f, "M14 6V5a1.5 1.5 0 0 0-1.5-1.5h-7A1.5 1.5 0 0 0 4 5v14a1.5 1.5 0 0 0 1.5 1.5h7A1.5 1.5 0 0 0 14 19v-1M9.5 12h11M17 8.5l3.5 3.5-3.5 3.5", 0, 0 } };
static const char *const mira_tags_15[] = { "connexion", "se connecter", "entrer", "login" };
static const MiraOp mira_ops_o_15[] = { { 1, 1.0f, 0.0f, "M14 6V5a1.5 1.5 0 0 0-1.5-1.5h-7A1.5 1.5 0 0 0 4 5v14a1.5 1.5 0 0 0 1.5 1.5h7A1.5 1.5 0 0 0 14 19v-1M20.5 12h-11M13 8.5 9.5 12l3.5 3.5", 0, 0 } };
static const MiraOp mira_ops_f_15[] = { { 1, 1.0f, 0.0f, "M14 6V5a1.5 1.5 0 0 0-1.5-1.5h-7A1.5 1.5 0 0 0 4 5v14a1.5 1.5 0 0 0 1.5 1.5h7A1.5 1.5 0 0 0 14 19v-1M20.5 12h-11M13 8.5 9.5 12l3.5 3.5", 0, 0 } };
static const char *const mira_tags_16[] = { "retour", "pr\303\251c\303\251dent", "gauche" };
static const MiraOp mira_ops_o_16[] = { { 1, 1.0f, 0.0f, "M19 12H5M11 6l-6 6 6 6", 0, 0 } };
static const MiraOp mira_ops_f_16[] = { { 1, 1.0f, 0.0f, "M19 12H5M11 6l-6 6 6 6", 0, 0 } };
static const char *const mira_tags_17[] = { "suivant", "continuer", "droite" };
static const MiraOp mira_ops_o_17[] = { { 1, 1.0f, 0.0f, "M5 12h14M13 6l6 6-6 6", 0, 0 } };
static const MiraOp mira_ops_f_17[] = { { 1, 1.0f, 0.0f, "M5 12h14M13 6l6 6-6 6", 0, 0 } };
static const char *const mira_tags_18[] = { "haut", "monter", "envoyer" };
static const MiraOp mira_ops_o_18[] = { { 1, 1.0f, 0.0f, "M12 19V5M6 11l6-6 6 6", 0, 0 } };
static const MiraOp mira_ops_f_18[] = { { 1, 1.0f, 0.0f, "M12 19V5M6 11l6-6 6 6", 0, 0 } };
static const char *const mira_tags_19[] = { "bas", "descendre", "t\303\251l\303\251charger" };
static const MiraOp mira_ops_o_19[] = { { 1, 1.0f, 0.0f, "M12 5v14M6 13l6 6 6-6", 0, 0 } };
static const MiraOp mira_ops_f_19[] = { { 1, 1.0f, 0.0f, "M12 5v14M6 13l6 6 6-6", 0, 0 } };
static const char *const mira_tags_20[] = { "lien externe", "ouvrir", "sortant", "nouvelle fen\303\252tre" };
static const MiraOp mira_ops_o_20[] = { { 1, 1.0f, 0.0f, "M5 19 19 5M7 5h12v12", 0, 0 } };
static const MiraOp mira_ops_f_20[] = { { 1, 1.0f, 0.0f, "M5 19 19 5M7 5h12v12", 0, 0 } };
static const char *const mira_tags_21[] = { "coin", "haut gauche" };
static const MiraOp mira_ops_o_21[] = { { 1, 1.0f, 0.0f, "M19 19 5 5M5 17V5h12", 0, 0 } };
static const MiraOp mira_ops_f_21[] = { { 1, 1.0f, 0.0f, "M19 19 5 5M5 17V5h12", 0, 0 } };
static const char *const mira_tags_22[] = { "coin", "bas droite" };
static const MiraOp mira_ops_o_22[] = { { 1, 1.0f, 0.0f, "M5 5l14 14M19 7v12H7", 0, 0 } };
static const MiraOp mira_ops_f_22[] = { { 1, 1.0f, 0.0f, "M5 5l14 14M19 7v12H7", 0, 0 } };
static const char *const mira_tags_23[] = { "coin", "bas gauche" };
static const MiraOp mira_ops_o_23[] = { { 1, 1.0f, 0.0f, "M19 5 5 19M17 19H5V7", 0, 0 } };
static const MiraOp mira_ops_f_23[] = { { 1, 1.0f, 0.0f, "M19 5 5 19M17 19H5V7", 0, 0 } };
static const char *const mira_tags_24[] = { "\303\251changer", "permuter", "transfert", "aller-retour" };
static const MiraOp mira_ops_o_24[] = { { 1, 1.0f, 0.0f, "M4 8h13M13.5 4.5 17 8l-3.5 3.5M20 16H7M10.5 12.5 7 16l3.5 3.5", 0, 0 } };
static const MiraOp mira_ops_f_24[] = { { 1, 1.0f, 0.0f, "M4 8h13M13.5 4.5 17 8l-3.5 3.5M20 16H7M10.5 12.5 7 16l3.5 3.5", 0, 0 } };
static const char *const mira_tags_25[] = { "trier", "ordre", "croissant", "d\303\251croissant" };
static const MiraOp mira_ops_o_25[] = { { 1, 1.0f, 0.0f, "M8 20V4M4.5 7.5 8 4l3.5 3.5M16 4v16M12.5 16.5 16 20l3.5-3.5", 0, 0 } };
static const MiraOp mira_ops_f_25[] = { { 1, 1.0f, 0.0f, "M8 20V4M4.5 7.5 8 4l3.5 3.5M16 4v16M12.5 16.5 16 20l3.5-3.5", 0, 0 } };
static const char *const mira_tags_26[] = { "r\303\251pondre", "reply", "retour" };
static const MiraOp mira_ops_o_26[] = { { 1, 1.0f, 0.0f, "M9 6 4.5 10.5 9 15M4.5 10.5H15a4.5 4.5 0 0 1 4.5 4.5V19", 0, 0 } };
static const MiraOp mira_ops_f_26[] = { { 1, 1.0f, 0.0f, "M9 6 4.5 10.5 9 15M4.5 10.5H15a4.5 4.5 0 0 1 4.5 4.5V19", 0, 0 } };
static const char *const mira_tags_27[] = { "annuler", "undo", "d\303\251faire", "retour" };
static const MiraOp mira_ops_o_27[] = { { 1, 1.0f, 0.0f, "M7 9.25h5.5a4.5 4.5 0 0 1 0 9H8M7 9.25l3.5-3.5M7 9.25l3.5 3.5", 0, 0 } };
static const MiraOp mira_ops_f_27[] = { { 1, 1.0f, 0.0f, "M7 9.25h5.5a4.5 4.5 0 0 1 0 9H8M7 9.25l3.5-3.5M7 9.25l3.5 3.5", 0, 0 } };
static const char *const mira_tags_28[] = { "r\303\251tablir", "redo", "refaire" };
static const MiraOp mira_ops_o_28[] = { { 1, 1.0f, 0.0f, "M17 9.25h-5.5a4.5 4.5 0 0 0 0 9H16M17 9.25l-3.5-3.5M17 9.25l-3.5 3.5", 0, 0 } };
static const MiraOp mira_ops_f_28[] = { { 1, 1.0f, 0.0f, "M17 9.25h-5.5a4.5 4.5 0 0 0 0 9H16M17 9.25l-3.5-3.5M17 9.25l-3.5 3.5", 0, 0 } };
static const char *const mira_tags_29[] = { "actualiser", "recharger", "rafra\303\256chir", "refresh" };
static const MiraOp mira_ops_o_29[] = { { 1, 1.0f, 0.0f, "M20 12a8 8 0 1 1-2.34-5.66M17.66 6.34V2.5M17.66 6.34h-3.84", 0, 0 } };
static const MiraOp mira_ops_f_29[] = { { 1, 1.0f, 0.0f, "M20 12a8 8 0 1 1-2.34-5.66M17.66 6.34V2.5M17.66 6.34h-3.84", 0, 0 } };
static const char *const mira_tags_30[] = { "historique", "restaurer", "rembobiner", "r\303\251initialiser" };
static const MiraOp mira_ops_o_30[] = { { 1, 1.0f, 0.0f, "M4 12a8 8 0 1 0 2.34-5.66M6.34 6.34V2.5M6.34 6.34h3.84", 0, 0 } };
static const MiraOp mira_ops_f_30[] = { { 1, 1.0f, 0.0f, "M4 12a8 8 0 1 0 2.34-5.66M6.34 6.34V2.5M6.34 6.34h3.84", 0, 0 } };
static const char *const mira_tags_31[] = { "synchroniser", "sync", "boucle", "mettre \303\240 jour" };
static const MiraOp mira_ops_o_31[] = { { 1, 1.0f, 0.0f, "M4 12a8 8 0 0 1 13.66-5.66M17.66 6.34V2.5M17.66 6.34h-3.84M20 12a8 8 0 0 1-13.66 5.66M6.34 17.66V21.5M6.34 17.66h3.84", 0, 0 } };
static const MiraOp mira_ops_f_31[] = { { 1, 1.0f, 0.0f, "M4 12a8 8 0 0 1 13.66-5.66M17.66 6.34V2.5M17.66 6.34h-3.84M20 12a8 8 0 0 1-13.66 5.66M6.34 17.66V21.5M6.34 17.66h3.84", 0, 0 } };
static const char *const mira_tags_32[] = { "t\303\251l\303\251charger", "enregistrer", "download", "importer" };
static const MiraOp mira_ops_o_32[] = { { 1, 1.0f, 0.0f, "M12 3.5v12M6.5 10l5.5 5.5 5.5-5.5M5 20.5h14", 0, 0 } };
static const MiraOp mira_ops_f_32[] = { { 1, 1.0f, 0.0f, "M12 3.5v12M6.5 10l5.5 5.5 5.5-5.5M5 20.5h14", 0, 0 } };
static const char *const mira_tags_33[] = { "t\303\251l\303\251verser", "upload", "haut de page", "premier" };
static const MiraOp mira_ops_o_33[] = { { 1, 1.0f, 0.0f, "M12 20.5V8.5M6.5 14l5.5-5.5 5.5 5.5M5 3.5h14", 0, 0 } };
static const MiraOp mira_ops_f_33[] = { { 1, 1.0f, 0.0f, "M12 20.5V8.5M6.5 14l5.5-5.5 5.5 5.5M5 3.5h14", 0, 0 } };
static const char *const mira_tags_34[] = { "d\303\251placer", "glisser", "quatre directions", "move" };
static const MiraOp mira_ops_o_34[] = { { 1, 1.0f, 0.0f, "M12 3v18M3 12h18M9 6l3-3 3 3M9 18l3 3 3-3M6 9l-3 3 3 3M18 9l3 3-3 3", 0, 0 } };
static const MiraOp mira_ops_f_34[] = { { 1, 1.0f, 0.0f, "M12 3v18M3 12h18M9 6l3-3 3 3M9 18l3 3 3-3M6 9l-3 3 3 3M18 9l3 3-3 3", 0, 0 } };
static const char *const mira_tags_35[] = { "agrandir", "plein \303\251cran", "\303\251tendre", "maximiser" };
static const MiraOp mira_ops_o_35[] = { { 1, 1.0f, 0.0f, "M4 10V4h6M4 4l6 6M20 14v6h-6M20 20l-6-6", 0, 0 } };
static const MiraOp mira_ops_f_35[] = { { 1, 1.0f, 0.0f, "M4 10V4h6M4 4l6 6M20 14v6h-6M20 20l-6-6", 0, 0 } };
static const char *const mira_tags_36[] = { "r\303\251duire", "quitter le plein \303\251cran", "minimiser" };
static const MiraOp mira_ops_o_36[] = { { 1, 1.0f, 0.0f, "M10 4v6H4M10 10 4 4M14 20v-6h6M14 14l6 6", 0, 0 } };
static const MiraOp mira_ops_f_36[] = { { 1, 1.0f, 0.0f, "M10 4v6H4M10 10 4 4M14 20v-6h6M14 14l6 6", 0, 0 } };
static const char *const mira_tags_37[] = { "suivant", "continuer", "aller" };
static const MiraOp mira_ops_o_37[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M8 12h8M13 8.5l3.5 3.5-3.5 3.5", 0, 0 } };
static const MiraOp mira_cut_37_f0[] = { { 1, 1.0f, 0.0f, "M8 12h8M13 8.5l3.5 3.5-3.5 3.5", 0, 0 } };
static const MiraOp mira_ops_f_37[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_37_f0, 1 } };
static const char *const mira_tags_38[] = { "retour", "pr\303\251c\303\251dent" };
static const MiraOp mira_ops_o_38[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M16 12H8M11 8.5 7.5 12l3.5 3.5", 0, 0 } };
static const MiraOp mira_cut_38_f0[] = { { 1, 1.0f, 0.0f, "M16 12H8M11 8.5 7.5 12l3.5 3.5", 0, 0 } };
static const MiraOp mira_ops_f_38[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_38_f0, 1 } };
static const char *const mira_tags_39[] = { "envoyer", "monter", "publier" };
static const MiraOp mira_ops_o_39[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 16V8M8.5 11.5 12 8l3.5 3.5", 0, 0 } };
static const MiraOp mira_cut_39_f0[] = { { 1, 1.0f, 0.0f, "M12 16V8M8.5 11.5 12 8l3.5 3.5", 0, 0 } };
static const MiraOp mira_ops_f_39[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_39_f0, 1 } };
static const char *const mira_tags_40[] = { "t\303\251l\303\251charger", "descendre", "recevoir" };
static const MiraOp mira_ops_o_40[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 8v8M8.5 12.5l3.5 3.5 3.5-3.5", 0, 0 } };
static const MiraOp mira_cut_40_f0[] = { { 1, 1.0f, 0.0f, "M12 8v8M8.5 12.5l3.5 3.5 3.5-3.5", 0, 0 } };
static const MiraOp mira_ops_f_40[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_40_f0, 1 } };
static const char *const mira_tags_41[] = { "fl\303\250che pleine", "suivant", "direction" };
static const MiraOp mira_ops_o_41[] = { { 1, 1.0f, 0.0f, "M14 5l7 7-7 7v-4H3V9h11z", 0, 0 } };
static const MiraOp mira_ops_f_41[] = { { 0, 0.0f, 0.0f, "M14 5l7 7-7 7v-4H3V9h11z", 0, 0 }, { 1, 1.0f, -1.5f, "M14 5l7 7-7 7v-4H3V9h11z", 0, 0 } };
static const char *const mira_tags_42[] = { "fl\303\250che pleine", "retour", "direction" };
static const MiraOp mira_ops_o_42[] = { { 1, 1.0f, 0.0f, "M10 5 3 12l7 7v-4h11V9H10z", 0, 0 } };
static const MiraOp mira_ops_f_42[] = { { 0, 0.0f, 0.0f, "M10 5 3 12l7 7v-4h11V9H10z", 0, 0 }, { 1, 1.0f, -1.5f, "M10 5 3 12l7 7v-4h11V9H10z", 0, 0 } };
static const char *const mira_tags_43[] = { "ajouter", "nouveau", "cr\303\251er" };
static const MiraOp mira_ops_o_43[] = { { 1, 1.0f, 0.0f, "M12 5v14M5 12h14", 0, 0 } };
static const MiraOp mira_ops_f_43[] = { { 1, 1.0f, 0.0f, "M12 5v14M5 12h14", 0, 0 } };
static const char *const mira_tags_44[] = { "retirer", "supprimer", "moins", "r\303\251duire" };
static const MiraOp mira_ops_o_44[] = { { 1, 1.0f, 0.0f, "M5 12h14", 0, 0 } };
static const MiraOp mira_ops_f_44[] = { { 1, 1.0f, 0.0f, "M5 12h14", 0, 0 } };
static const char *const mira_tags_45[] = { "fermer", "annuler", "effacer", "croix" };
static const MiraOp mira_ops_o_45[] = { { 1, 1.0f, 0.0f, "M6 6l12 12M18 6 6 18", 0, 0 } };
static const MiraOp mira_ops_f_45[] = { { 1, 1.0f, 0.0f, "M6 6l12 12M18 6 6 18", 0, 0 } };
static const char *const mira_tags_46[] = { "valider", "coche", "ok", "termin\303\251", "s\303\251lectionn\303\251" };
static const MiraOp mira_ops_o_46[] = { { 1, 1.0f, 0.0f, "M4.5 12.5l5 5 10-11", 0, 0 } };
static const MiraOp mira_ops_f_46[] = { { 1, 1.0f, 0.0f, "M4.5 12.5l5 5 10-11", 0, 0 } };
static const char *const mira_tags_47[] = { "ajouter", "nouveau", "ins\303\251rer" };
static const MiraOp mira_ops_o_47[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 8v8M8 12h8", 0, 0 } };
static const MiraOp mira_cut_47_f0[] = { { 1, 1.0f, 0.0f, "M12 8v8M8 12h8", 0, 0 } };
static const MiraOp mira_ops_f_47[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_47_f0, 1 } };
static const char *const mira_tags_48[] = { "retirer", "supprimer", "r\303\251duire", "bouton moins" };
static const MiraOp mira_ops_o_48[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M8 12h8", 0, 0 } };
static const MiraOp mira_cut_48_f0[] = { { 1, 1.0f, 0.0f, "M8 12h8", 0, 0 } };
static const MiraOp mira_ops_f_48[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_48_f0, 1 } };
static const char *const mira_tags_49[] = { "effacer", "fermer", "clear", "champ de recherche", "croix" };
static const MiraOp mira_ops_o_49[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 9l6 6M15 9l-6 6", 0, 0 } };
static const MiraOp mira_cut_49_f0[] = { { 1, 1.0f, 0.0f, "M9 9l6 6M15 9l-6 6", 0, 0 } };
static const MiraOp mira_ops_f_49[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_49_f0, 1 } };
static const char *const mira_tags_50[] = { "succ\303\250s", "valid\303\251", "termin\303\251", "r\303\251ussi" };
static const MiraOp mira_ops_o_50[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M8 12.5l2.8 2.8L16.5 9", 0, 0 } };
static const MiraOp mira_cut_50_f0[] = { { 1, 1.0f, 0.0f, "M8 12.5l2.8 2.8L16.5 9", 0, 0 } };
static const MiraOp mira_ops_f_50[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_50_f0, 1 } };
static const char *const mira_tags_51[] = { "ajouter", "nouveau", "case" };
static const MiraOp mira_ops_o_51[] = { { 1, 1.0f, 0.0f, "M6.5 3.5h11a3 3 0 0 1 3 3v11a3 3 0 0 1 -3 3h-11a3 3 0 0 1 -3 -3v-11a3 3 0 0 1 3 -3z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 8v8M8 12h8", 0, 0 } };
static const MiraOp mira_cut_51_f0[] = { { 1, 1.0f, 0.0f, "M12 8v8M8 12h8", 0, 0 } };
static const MiraOp mira_ops_f_51[] = { { 0, 0.0f, 0.0f, "M6.5 3.5h11a3 3 0 0 1 3 3v11a3 3 0 0 1 -3 3h-11a3 3 0 0 1 -3 -3v-11a3 3 0 0 1 3 -3z", mira_cut_51_f0, 1 } };
static const char *const mira_tags_52[] = { "fermer", "supprimer", "case" };
static const MiraOp mira_ops_o_52[] = { { 1, 1.0f, 0.0f, "M6.5 3.5h11a3 3 0 0 1 3 3v11a3 3 0 0 1 -3 3h-11a3 3 0 0 1 -3 -3v-11a3 3 0 0 1 3 -3z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 9l6 6M15 9l-6 6", 0, 0 } };
static const MiraOp mira_cut_52_f0[] = { { 1, 1.0f, 0.0f, "M9 9l6 6M15 9l-6 6", 0, 0 } };
static const MiraOp mira_ops_f_52[] = { { 0, 0.0f, 0.0f, "M6.5 3.5h11a3 3 0 0 1 3 3v11a3 3 0 0 1 -3 3h-11a3 3 0 0 1 -3 -3v-11a3 3 0 0 1 3 -3z", mira_cut_52_f0, 1 } };
static const char *const mira_tags_53[] = { "case \303\240 cocher", "coch\303\251", "s\303\251lectionn\303\251", "checkbox" };
static const MiraOp mira_ops_o_53[] = { { 1, 1.0f, 0.0f, "M6.5 3.5h11a3 3 0 0 1 3 3v11a3 3 0 0 1 -3 3h-11a3 3 0 0 1 -3 -3v-11a3 3 0 0 1 3 -3z", 0, 0 }, { 1, 1.0f, 0.0f, "M8 12.5l2.8 2.8 5.5-5.8", 0, 0 } };
static const MiraOp mira_cut_53_f0[] = { { 1, 1.0f, 0.0f, "M8 12.5l2.8 2.8 5.5-5.8", 0, 0 } };
static const MiraOp mira_ops_f_53[] = { { 0, 0.0f, 0.0f, "M6.5 3.5h11a3 3 0 0 1 3 3v11a3 3 0 0 1 -3 3h-11a3 3 0 0 1 -3 -3v-11a3 3 0 0 1 3 -3z", mira_cut_53_f0, 1 } };
static const char *const mira_tags_54[] = { "partager", "exporter", "envoyer" };
static const MiraOp mira_ops_o_54[] = { { 1, 1.0f, 0.0f, "M8.5 10H6.5A1.5 1.5 0 0 0 5 11.5v8A1.5 1.5 0 0 0 6.5 21h11a1.5 1.5 0 0 0 1.5-1.5v-8a1.5 1.5 0 0 0-1.5-1.5h-2", 0, 0 }, { 1, 1.0f, 0.0f, "M12 15V3.5M8 7.5l4-4 4 4", 0, 0 } };
static const MiraOp mira_cut_54_f0[] = { { 1, 1.0f, 1.4f, "M12 15V3.5M8 7.5l4-4 4 4", 0, 0 } };
static const MiraOp mira_ops_f_54[] = { { 0, 0.0f, 0.0f, "M8.5 10H6.5A1.5 1.5 0 0 0 5 11.5v8A1.5 1.5 0 0 0 6.5 21h11a1.5 1.5 0 0 0 1.5-1.5v-8a1.5 1.5 0 0 0-1.5-1.5h-2", mira_cut_54_f0, 1 }, { 1, 1.0f, 0.0f, "M12 15V3.5M8 7.5l4-4 4 4", 0, 0 } };
static const char *const mira_tags_55[] = { "importer", "enregistrer dans", "t\303\251l\303\251charger" };
static const MiraOp mira_ops_o_55[] = { { 1, 1.0f, 0.0f, "M8.5 10H6.5A1.5 1.5 0 0 0 5 11.5v8A1.5 1.5 0 0 0 6.5 21h11a1.5 1.5 0 0 0 1.5-1.5v-8a1.5 1.5 0 0 0-1.5-1.5h-2", 0, 0 }, { 1, 1.0f, 0.0f, "M12 3.5V15M8 11l4 4 4-4", 0, 0 } };
static const MiraOp mira_cut_55_f0[] = { { 1, 1.0f, 1.4f, "M12 3.5V15M8 11l4 4 4-4", 0, 0 } };
static const MiraOp mira_ops_f_55[] = { { 0, 0.0f, 0.0f, "M8.5 10H6.5A1.5 1.5 0 0 0 5 11.5v8A1.5 1.5 0 0 0 6.5 21h11a1.5 1.5 0 0 0 1.5-1.5v-8a1.5 1.5 0 0 0-1.5-1.5h-2", mira_cut_55_f0, 1 }, { 1, 1.0f, 0.0f, "M12 3.5V15M8 11l4 4 4-4", 0, 0 } };
static const char *const mira_tags_56[] = { "copier", "dupliquer", "presse-papiers", "clipboard" };
static const MiraOp mira_ops_o_56[] = { { 1, 1.0f, 0.0f, "M9.5 10A1.5 1.5 0 0 1 11 8.5h7.5A1.5 1.5 0 0 1 20 10v9.5a1.5 1.5 0 0 1-1.5 1.5H11a1.5 1.5 0 0 1-1.5-1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M15 8.5V5.5A1.5 1.5 0 0 0 13.5 4h-8A1.5 1.5 0 0 0 4 5.5v10A1.5 1.5 0 0 0 5.5 17h4", 0, 0 } };
static const MiraOp mira_cut_56_f0[] = { { 0, 0.0f, 0.0f, "M9.5 10A1.5 1.5 0 0 1 11 8.5h7.5A1.5 1.5 0 0 1 20 10v9.5a1.5 1.5 0 0 1-1.5 1.5H11a1.5 1.5 0 0 1-1.5-1.5z", 0, 0 }, { 1, 1.0f, 1.0f, "M9.5 10A1.5 1.5 0 0 1 11 8.5h7.5A1.5 1.5 0 0 1 20 10v9.5a1.5 1.5 0 0 1-1.5 1.5H11a1.5 1.5 0 0 1-1.5-1.5z", 0, 0 } };
static const MiraOp mira_ops_f_56[] = { { 0, 0.0f, 0.0f, "M15 8.5V5.5A1.5 1.5 0 0 0 13.5 4h-8A1.5 1.5 0 0 0 4 5.5v10A1.5 1.5 0 0 0 5.5 17h4v-7A1.5 1.5 0 0 1 11 8.5z", mira_cut_56_f0, 2 }, { 0, 0.0f, 0.0f, "M9.5 10A1.5 1.5 0 0 1 11 8.5h7.5A1.5 1.5 0 0 1 20 10v9.5a1.5 1.5 0 0 1-1.5 1.5H11a1.5 1.5 0 0 1-1.5-1.5z", 0, 0 } };
static const char *const mira_tags_57[] = { "supprimer", "corbeille", "effacer", "jeter" };
static const MiraOp mira_ops_o_57[] = { { 1, 1.0f, 0.0f, "M5.5 8.5h13l-.9 10.6a1.6 1.6 0 0 1-1.6 1.4H8a1.6 1.6 0 0 1-1.6-1.4z", 0, 0 }, { 1, 1.0f, 0.0f, "M10 11.5v6M14 11.5v6", 0, 0 }, { 1, 1.0f, 0.0f, "M4 6h16M9.5 6V4.5h5V6", 0, 0 } };
static const MiraOp mira_cut_57_f0[] = { { 1, 1.0f, 0.0f, "M10 11.5v6M14 11.5v6", 0, 0 } };
static const MiraOp mira_ops_f_57[] = { { 0, 0.0f, 0.0f, "M5.5 8.5h13l-.9 10.6a1.6 1.6 0 0 1-1.6 1.4H8a1.6 1.6 0 0 1-1.6-1.4z", mira_cut_57_f0, 1 }, { 1, 1.0f, 0.0f, "M4 6h16M9.5 6V4.5h5V6", 0, 0 } };
static const char *const mira_tags_58[] = { "favori", "\303\251toile", "noter", "pr\303\251f\303\251r\303\251" };
static const MiraOp mira_ops_o_58[] = { { 1, 1.0f, 0.0f, "M12 3.5l2.6 5.4 5.9.8-4.3 4.1 1.1 5.9L12 16.9l-5.3 2.8 1.1-5.9-4.3-4.1 5.9-.8z", 0, 0 } };
static const MiraOp mira_ops_f_58[] = { { 0, 0.0f, 0.0f, "M12 3.5l2.6 5.4 5.9.8-4.3 4.1 1.1 5.9L12 16.9l-5.3 2.8 1.1-5.9-4.3-4.1 5.9-.8z", 0, 0 }, { 1, 1.0f, -1.5f, "M12 3.5l2.6 5.4 5.9.8-4.3 4.1 1.1 5.9L12 16.9l-5.3 2.8 1.1-5.9-4.3-4.1 5.9-.8z", 0, 0 } };
static const char *const mira_tags_59[] = { "aimer", "favori", "c\305\223ur", "like" };
static const MiraOp mira_ops_o_59[] = { { 1, 1.0f, 0.0f, "M12 19.2S4.5 14.8 4.5 9.2A4.1 4.1 0 0 1 12 6.6a4.1 4.1 0 0 1 7.5 2.6c0 5.6-7.5 10-7.5 10z", 0, 0 } };
static const MiraOp mira_ops_f_59[] = { { 0, 0.0f, 0.0f, "M12 19.2S4.5 14.8 4.5 9.2A4.1 4.1 0 0 1 12 6.6a4.1 4.1 0 0 1 7.5 2.6c0 5.6-7.5 10-7.5 10z", 0, 0 }, { 1, 1.0f, -1.5f, "M12 19.2S4.5 14.8 4.5 9.2A4.1 4.1 0 0 1 12 6.6a4.1 4.1 0 0 1 7.5 2.6c0 5.6-7.5 10-7.5 10z", 0, 0 } };
static const char *const mira_tags_60[] = { "marque-page", "enregistrer", "signet", "lire plus tard" };
static const MiraOp mira_ops_o_60[] = { { 1, 1.0f, 0.0f, "M6.5 4.5A1.5 1.5 0 0 1 8 3h8a1.5 1.5 0 0 1 1.5 1.5V21L12 16.5 6.5 21z", 0, 0 } };
static const MiraOp mira_ops_f_60[] = { { 0, 0.0f, 0.0f, "M6.5 4.5A1.5 1.5 0 0 1 8 3h8a1.5 1.5 0 0 1 1.5 1.5V21L12 16.5 6.5 21z", 0, 0 }, { 1, 1.0f, -1.5f, "M6.5 4.5A1.5 1.5 0 0 1 8 3h8a1.5 1.5 0 0 1 1.5 1.5V21L12 16.5 6.5 21z", 0, 0 } };
static const char *const mira_tags_61[] = { "envoyer", "message", "soumettre", "avion", "telegram" };
static const MiraOp mira_ops_o_61[] = { { 1, 1.0f, 0.0f, "M21 3 3 10.5l7.5 3 3 7.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M10.5 13.5 21 3", 0, 0 } };
static const MiraOp mira_cut_61_f0[] = { { 1, 1.0f, 0.0f, "M10.5 13.5 21 3", 0, 0 } };
static const MiraOp mira_ops_f_61[] = { { 0, 0.0f, 0.0f, "M21 3 3 10.5l7.5 3 3 7.5z", mira_cut_61_f0, 1 } };
static const char *const mira_tags_62[] = { "magie", "IA", "suggestion", "nouveau", "g\303\251n\303\251rer", "chatgpt", "openai" };
static const MiraOp mira_ops_o_62[] = { { 1, 1.0f, 0.0f, "M10 4l1.6 4.4L16 10l-4.4 1.6L10 16l-1.6-4.4L4 10l4.4-1.6zM18 14l.9 2.1L21 17l-2.1.9L18 20l-.9-2.1L15 17l2.1-.9z", 0, 0 } };
static const MiraOp mira_ops_f_62[] = { { 0, 0.0f, 0.0f, "M10 4l1.6 4.4L16 10l-4.4 1.6L10 16l-1.6-4.4L4 10l4.4-1.6zM18 14l.9 2.1L21 17l-2.1.9L18 20l-.9-2.1L15 17l2.1-.9z", 0, 0 }, { 1, 1.0f, -1.5f, "M10 4l1.6 4.4L16 10l-4.4 1.6L10 16l-1.6-4.4L4 10l4.4-1.6zM18 14l.9 2.1L21 17l-2.1.9L18 20l-.9-2.1L15 17l2.1-.9z", 0, 0 } };
static const char *const mira_tags_63[] = { "couper", "ciseaux", "d\303\251couper" };
static const MiraOp mira_ops_o_63[] = { { 1, 1.0f, 0.0f, "M4 6.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM4 17.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M8.3 8.3 20 19.5M8.3 15.7 20 4.5", 0, 0 } };
static const MiraOp mira_ops_f_63[] = { { 0, 0.0f, 0.0f, "M4 6.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM4 17.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M8.3 8.3 20 19.5M8.3 15.7 20 4.5", 0, 0 } };
static const char *const mira_tags_64[] = { "recadrer", "rogner", "cadre" };
static const MiraOp mira_ops_o_64[] = { { 1, 1.0f, 0.0f, "M6 3v12a3 3 0 0 0 3 3h12M3 6h12a3 3 0 0 1 3 3v12", 0, 0 } };
static const MiraOp mira_ops_f_64[] = { { 1, 1.0f, 0.0f, "M6 3v12a3 3 0 0 0 3 3h12M3 6h12a3 3 0 0 1 3 3v12", 0, 0 } };
static const char *const mira_tags_65[] = { "zoom avant", "agrandir", "loupe" };
static const MiraOp mira_ops_o_65[] = { { 1, 1.0f, 0.0f, "M10.5 17a6.5 6.5 0 1 0 0-13 6.5 6.5 0 0 0 0 13zM15.5 15.5l5 5M10.5 7.5v6M7.5 10.5h6", 0, 0 } };
static const MiraOp mira_ops_f_65[] = { { 1, 1.0f, 0.0f, "M10.5 17a6.5 6.5 0 1 0 0-13 6.5 6.5 0 0 0 0 13zM15.5 15.5l5 5M10.5 7.5v6M7.5 10.5h6", 0, 0 } };
static const char *const mira_tags_66[] = { "zoom arri\303\250re", "r\303\251duire", "loupe" };
static const MiraOp mira_ops_o_66[] = { { 1, 1.0f, 0.0f, "M10.5 17a6.5 6.5 0 1 0 0-13 6.5 6.5 0 0 0 0 13zM15.5 15.5l5 5M7.5 10.5h6", 0, 0 } };
static const MiraOp mira_ops_f_66[] = { { 1, 1.0f, 0.0f, "M10.5 17a6.5 6.5 0 1 0 0-13 6.5 6.5 0 0 0 0 13zM15.5 15.5l5 5M7.5 10.5h6", 0, 0 } };
static const char *const mira_tags_67[] = { "gras", "texte", "format", "graisse" };
static const MiraOp mira_ops_o_67[] = { { 1, 1.0f, 0.0f, "M7 4h5.5a3.5 3.5 0 0 1 0 7H7zM7 11h6.5a3.75 3.75 0 0 1 0 7.5H7z", 0, 0 } };
static const MiraOp mira_ops_f_67[] = { { 1, 1.0f, 0.0f, "M7 4h5.5a3.5 3.5 0 0 1 0 7H7zM7 11h6.5a3.75 3.75 0 0 1 0 7.5H7z", 0, 0 } };
static const char *const mira_tags_68[] = { "italique", "texte", "format", "oblique" };
static const MiraOp mira_ops_o_68[] = { { 1, 1.0f, 0.0f, "M9.5 4h6M8.5 20h6M13.5 4l-3 16", 0, 0 } };
static const MiraOp mira_ops_f_68[] = { { 1, 1.0f, 0.0f, "M9.5 4h6M8.5 20h6M13.5 4l-3 16", 0, 0 } };
static const char *const mira_tags_69[] = { "soulign\303\251", "texte", "format" };
static const MiraOp mira_ops_o_69[] = { { 1, 1.0f, 0.0f, "M6 4v6a6 6 0 0 0 12 0V4M5 20.5h14", 0, 0 } };
static const MiraOp mira_ops_f_69[] = { { 1, 1.0f, 0.0f, "M6 4v6a6 6 0 0 0 12 0V4M5 20.5h14", 0, 0 } };
static const char *const mira_tags_70[] = { "barr\303\251", "texte", "format", "rayer" };
static const MiraOp mira_ops_o_70[] = { { 1, 1.0f, 0.0f, "M15.5 8A3.5 3.5 0 0 0 12 6h-.5a3 3 0 0 0 0 6M12.5 12a3 3 0 0 1 0 6H12a3.5 3.5 0 0 1-3.5-2M5 12h14", 0, 0 } };
static const MiraOp mira_ops_f_70[] = { { 1, 1.0f, 0.0f, "M15.5 8A3.5 3.5 0 0 0 12 6h-.5a3 3 0 0 0 0 6M12.5 12a3 3 0 0 1 0 6H12a3.5 3.5 0 0 1-3.5-2M5 12h14", 0, 0 } };
static const char *const mira_tags_71[] = { "modifier", "\303\251diter", "crayon", "\303\251crire", "renommer" };
static const MiraOp mira_ops_o_71[] = { { 1, 1.0f, 0.0f, "M4 20l1.2-4.7L15.5 5a2.1 2.1 0 0 1 3 3L8.2 18.3zM13.5 7l3 3", 0, 0 } };
static const MiraOp mira_ops_f_71[] = { { 1, 1.0f, 0.0f, "M4 20l1.2-4.7L15.5 5a2.1 2.1 0 0 1 3 3L8.2 18.3zM13.5 7l3 3", 0, 0 } };
static const char *const mira_tags_72[] = { "lien", "url", "hyperlien", "attacher" };
static const MiraOp mira_ops_o_72[] = { { 1, 1.0f, 0.0f, "M10 14a4 4 0 0 0 5.66 0l2.83-2.83a4 4 0 0 0-5.66-5.66L11.4 6.9M14 10a4 4 0 0 0-5.66 0l-2.83 2.83a4 4 0 0 0 5.66 5.66l1.43-1.4", 0, 0 } };
static const MiraOp mira_ops_f_72[] = { { 1, 1.0f, 0.0f, "M10 14a4 4 0 0 0 5.66 0l2.83-2.83a4 4 0 0 0-5.66-5.66L11.4 6.9M14 10a4 4 0 0 0-5.66 0l-2.83 2.83a4 4 0 0 0 5.66 5.66l1.43-1.4", 0, 0 } };
static const char *const mira_tags_73[] = { "aligner \303\240 gauche", "paragraphe", "alignement" };
static const MiraOp mira_ops_o_73[] = { { 1, 1.0f, 0.0f, "M4 6h16M4 10h10M4 14h16M4 18h10", 0, 0 } };
static const MiraOp mira_ops_f_73[] = { { 1, 1.0f, 0.0f, "M4 6h16M4 10h10M4 14h16M4 18h10", 0, 0 } };
static const char *const mira_tags_74[] = { "centrer", "paragraphe", "alignement" };
static const MiraOp mira_ops_o_74[] = { { 1, 1.0f, 0.0f, "M4 6h16M7 10h10M4 14h16M7 18h10", 0, 0 } };
static const MiraOp mira_ops_f_74[] = { { 1, 1.0f, 0.0f, "M4 6h16M7 10h10M4 14h16M7 18h10", 0, 0 } };
static const char *const mira_tags_75[] = { "aligner \303\240 droite", "paragraphe", "alignement" };
static const MiraOp mira_ops_o_75[] = { { 1, 1.0f, 0.0f, "M4 6h16M10 10h10M4 14h16M10 18h10", 0, 0 } };
static const MiraOp mira_ops_f_75[] = { { 1, 1.0f, 0.0f, "M4 6h16M10 10h10M4 14h16M10 18h10", 0, 0 } };
static const char *const mira_tags_76[] = { "justifier", "paragraphe", "alignement" };
static const MiraOp mira_ops_o_76[] = { { 1, 1.0f, 0.0f, "M4 6h16M4 10h16M4 14h16M4 18h16", 0, 0 } };
static const MiraOp mira_ops_f_76[] = { { 1, 1.0f, 0.0f, "M4 6h16M4 10h16M4 14h16M4 18h16", 0, 0 } };
static const char *const mira_tags_77[] = { "liste \303\240 puces", "puces", "\303\251num\303\251ration" };
static const MiraOp mira_ops_o_77[] = { { 0, 0.0f, 0.0f, "M3.7 6a1.3 1.3 0 1 0 2.6 0a1.3 1.3 0 1 0 -2.6 0zM3.7 12a1.3 1.3 0 1 0 2.6 0a1.3 1.3 0 1 0 -2.6 0zM3.7 18a1.3 1.3 0 1 0 2.6 0a1.3 1.3 0 1 0 -2.6 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 6h11M9 12h11M9 18h11", 0, 0 } };
static const MiraOp mira_ops_f_77[] = { { 0, 0.0f, 0.0f, "M3.7 6a1.3 1.3 0 1 0 2.6 0a1.3 1.3 0 1 0 -2.6 0zM3.7 12a1.3 1.3 0 1 0 2.6 0a1.3 1.3 0 1 0 -2.6 0zM3.7 18a1.3 1.3 0 1 0 2.6 0a1.3 1.3 0 1 0 -2.6 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 6h11M9 12h11M9 18h11", 0, 0 } };
static const char *const mira_tags_78[] = { "liste num\303\251rot\303\251e", "num\303\251ros", "ordonn\303\251e" };
static const MiraOp mira_ops_o_78[] = { { 1, 1.0f, 0.0f, "M10 6h10M10 12h10M10 18h10M3.84 5.01L4.61 4.3V7.6M3.57 11.13A0.94 0.94 0 1 1 5.33 11.68L3.57 13.6H5.6M3.68 16.74A0.88 0.88 0 1 1 4.83 17.95H4.39M4.83 17.95A0.88 0.88 0 1 1 3.68 19.16", 0, 0 } };
static const MiraOp mira_ops_f_78[] = { { 1, 1.0f, 0.0f, "M10 6h10M10 12h10M10 18h10M3.84 5.01L4.61 4.3V7.6M3.57 11.13A0.94 0.94 0 1 1 5.33 11.68L3.57 13.6H5.6M3.68 16.74A0.88 0.88 0 1 1 4.83 17.95H4.39M4.83 17.95A0.88 0.88 0 1 1 3.68 19.16", 0, 0 } };
static const char *const mira_tags_79[] = { "augmenter le retrait", "indenter", "d\303\251caler" };
static const MiraOp mira_ops_o_79[] = { { 1, 1.0f, 0.0f, "M4 6h16M11 10h9M11 14h9M4 18h16M4 9.5 6.5 12 4 14.5", 0, 0 } };
static const MiraOp mira_ops_f_79[] = { { 1, 1.0f, 0.0f, "M4 6h16M11 10h9M11 14h9M4 18h16M4 9.5 6.5 12 4 14.5", 0, 0 } };
static const char *const mira_tags_80[] = { "diminuer le retrait", "d\303\251sindenter" };
static const MiraOp mira_ops_o_80[] = { { 1, 1.0f, 0.0f, "M4 6h16M11 10h9M11 14h9M4 18h16M6.5 9.5 4 12l2.5 2.5", 0, 0 } };
static const MiraOp mira_ops_f_80[] = { { 1, 1.0f, 0.0f, "M4 6h16M11 10h9M11 14h9M4 18h16M6.5 9.5 4 12l2.5 2.5", 0, 0 } };
static const char *const mira_tags_81[] = { "police", "style de texte", "Aa", "typographie" };
static const MiraOp mira_ops_o_81[] = { { 1, 1.0f, 0.0f, "M3 17 7.5 6l4.5 11M4.6 13h5.8M14.75 14.25a2.75 2.75 0 1 0 5.5 0a2.75 2.75 0 1 0 -5.5 0zM20.25 11.5V17", 0, 0 } };
static const MiraOp mira_ops_f_81[] = { { 1, 1.0f, 0.0f, "M3 17 7.5 6l4.5 11M4.6 13h5.8M14.75 14.25a2.75 2.75 0 1 0 5.5 0a2.75 2.75 0 1 0 -5.5 0zM20.25 11.5V17", 0, 0 } };
static const char *const mira_tags_82[] = { "taille du texte", "corps", "accessibilit\303\251", "zoom texte" };
static const MiraOp mira_ops_o_82[] = { { 1, 1.0f, 0.0f, "M3.5 14.25a2.75 2.75 0 1 0 5.5 0a2.75 2.75 0 1 0 -5.5 0zM9 11.5V17M12 17l4.5-11L21 17M13.6 13h5.8", 0, 0 } };
static const MiraOp mira_ops_f_82[] = { { 1, 1.0f, 0.0f, "M3.5 14.25a2.75 2.75 0 1 0 5.5 0a2.75 2.75 0 1 0 -5.5 0zM9 11.5V17M12 17l4.5-11L21 17M13.6 13h5.8", 0, 0 } };
static const char *const mira_tags_83[] = { "caract\303\250re", "lettre", "glyphe", "A" };
static const MiraOp mira_ops_o_83[] = { { 1, 1.0f, 0.0f, "M5 19 12 4l7 15M7.6 13.5h8.8", 0, 0 } };
static const MiraOp mira_ops_f_83[] = { { 1, 1.0f, 0.0f, "M5 19 12 4l7 15M7.6 13.5h8.8", 0, 0 } };
static const char *const mira_tags_84[] = { "citation", "guillemets", "bloc de citation" };
static const MiraOp mira_ops_o_84[] = { { 1, 1.0f, 0.0f, "M6 11.5V15h3.5v-3.5H6a3.5 3.5 0 0 1 3.5-3.5M15 11.5V15h3.5v-3.5H15a3.5 3.5 0 0 1 3.5-3.5", 0, 0 } };
static const MiraOp mira_ops_f_84[] = { { 1, 1.0f, 0.0f, "M6 11.5V15h3.5v-3.5H6a3.5 3.5 0 0 1 3.5-3.5M15 11.5V15h3.5v-3.5H15a3.5 3.5 0 0 1 3.5-3.5", 0, 0 } };
static const char *const mira_tags_85[] = { "pied-de-mouche", "paragraphe", "caract\303\250res invisibles" };
static const MiraOp mira_ops_o_85[] = { { 1, 1.0f, 0.0f, "M17.5 4H10a3.5 3.5 0 0 0 0 7h.5M10.5 4v16M14.5 4v16", 0, 0 } };
static const MiraOp mira_ops_f_85[] = { { 1, 1.0f, 0.0f, "M17.5 4H10a3.5 3.5 0 0 0 0 7h.5M10.5 4v16M14.5 4v16", 0, 0 } };
static const char *const mira_tags_86[] = { "document", "fichier", "page", "vierge" };
static const MiraOp mira_ops_o_86[] = { { 1, 1.0f, 0.0f, "M6.5 3h7L19 8.5v11a1.5 1.5 0 0 1-1.5 1.5h-11A1.5 1.5 0 0 1 5 19.5v-15A1.5 1.5 0 0 1 6.5 3z", 0, 0 }, { 1, 1.0f, 0.0f, "M13.5 3v5.5H19", 0, 0 } };
static const MiraOp mira_cut_86_f0[] = { { 1, 1.0f, 0.0f, "M13.5 3v5.5H19", 0, 0 } };
static const MiraOp mira_ops_f_86[] = { { 0, 0.0f, 0.0f, "M6.5 3h7L19 8.5v11a1.5 1.5 0 0 1-1.5 1.5h-11A1.5 1.5 0 0 1 5 19.5v-15A1.5 1.5 0 0 1 6.5 3z", mira_cut_86_f0, 1 } };
static const char *const mira_tags_87[] = { "document", "fichier", "page", "texte", "note" };
static const MiraOp mira_ops_o_87[] = { { 1, 1.0f, 0.0f, "M6.5 3h7L19 8.5v11a1.5 1.5 0 0 1-1.5 1.5h-11A1.5 1.5 0 0 1 5 19.5v-15A1.5 1.5 0 0 1 6.5 3z", 0, 0 }, { 1, 1.0f, 0.0f, "M13.5 3v5.5H19M8.5 13h7M8.5 16.5h7", 0, 0 } };
static const MiraOp mira_cut_87_f0[] = { { 1, 1.0f, 0.0f, "M13.5 3v5.5H19M8.5 13h7M8.5 16.5h7", 0, 0 } };
static const MiraOp mira_ops_f_87[] = { { 0, 0.0f, 0.0f, "M6.5 3h7L19 8.5v11a1.5 1.5 0 0 1-1.5 1.5h-11A1.5 1.5 0 0 1 5 19.5v-15A1.5 1.5 0 0 1 6.5 3z", mira_cut_87_f0, 1 } };
static const char *const mira_tags_88[] = { "archive", "zip", "compress\303\251" };
static const MiraOp mira_ops_o_88[] = { { 1, 1.0f, 0.0f, "M6.5 3h7L19 8.5v11a1.5 1.5 0 0 1-1.5 1.5h-11A1.5 1.5 0 0 1 5 19.5v-15A1.5 1.5 0 0 1 6.5 3z", 0, 0 }, { 1, 1.0f, 0.0f, "M13.5 3v5.5H19M9 11h2M9 13.5h2M9 16h2M9 18.5h2", 0, 0 } };
static const MiraOp mira_cut_88_f0[] = { { 1, 1.0f, 0.0f, "M13.5 3v5.5H19M9 11h2M9 13.5h2M9 16h2M9 18.5h2", 0, 0 } };
static const MiraOp mira_ops_f_88[] = { { 0, 0.0f, 0.0f, "M6.5 3h7L19 8.5v11a1.5 1.5 0 0 1-1.5 1.5h-11A1.5 1.5 0 0 1 5 19.5v-15A1.5 1.5 0 0 1 6.5 3z", mira_cut_88_f0, 1 } };
static const char *const mira_tags_89[] = { "t\303\251l\303\251charger le fichier", "document re\303\247u" };
static const MiraOp mira_ops_o_89[] = { { 1, 1.0f, 0.0f, "M6.5 3h7L19 8.5v11a1.5 1.5 0 0 1-1.5 1.5h-11A1.5 1.5 0 0 1 5 19.5v-15A1.5 1.5 0 0 1 6.5 3z", 0, 0 }, { 1, 1.0f, 0.0f, "M13.5 3v5.5H19M12 10.5v6.5M9.5 14.5l2.5 2.5 2.5-2.5", 0, 0 } };
static const MiraOp mira_cut_89_f0[] = { { 1, 1.0f, 0.0f, "M13.5 3v5.5H19M12 10.5v6.5M9.5 14.5l2.5 2.5 2.5-2.5", 0, 0 } };
static const MiraOp mira_ops_f_89[] = { { 0, 0.0f, 0.0f, "M6.5 3h7L19 8.5v11a1.5 1.5 0 0 1-1.5 1.5h-11A1.5 1.5 0 0 1 5 19.5v-15A1.5 1.5 0 0 1 6.5 3z", mira_cut_89_f0, 1 } };
static const char *const mira_tags_90[] = { "dossier", "fichiers", "r\303\251pertoire", "classer" };
static const MiraOp mira_ops_o_90[] = { { 1, 1.0f, 0.0f, "M3.5 7A1.5 1.5 0 0 1 5 5.5h4.4a1.5 1.5 0 0 1 1.06.44L12 7.5h7a1.5 1.5 0 0 1 1.5 1.5v8.5A1.5 1.5 0 0 1 19 19H5a1.5 1.5 0 0 1-1.5-1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M3.5 10.5h17", 0, 0 } };
static const MiraOp mira_cut_90_f0[] = { { 1, 1.0f, 0.0f, "M3.5 10.5h17", 0, 0 } };
static const MiraOp mira_ops_f_90[] = { { 0, 0.0f, 0.0f, "M3.5 7A1.5 1.5 0 0 1 5 5.5h4.4a1.5 1.5 0 0 1 1.06.44L12 7.5h7a1.5 1.5 0 0 1 1.5 1.5v8.5A1.5 1.5 0 0 1 19 19H5a1.5 1.5 0 0 1-1.5-1.5z", mira_cut_90_f0, 1 } };
static const char *const mira_tags_91[] = { "nouveau dossier", "ajouter un dossier" };
static const MiraOp mira_ops_o_91[] = { { 1, 1.0f, 0.0f, "M3.5 7A1.5 1.5 0 0 1 5 5.5h4.4a1.5 1.5 0 0 1 1.06.44L12 7.5h7a1.5 1.5 0 0 1 1.5 1.5v8.5A1.5 1.5 0 0 1 19 19H5a1.5 1.5 0 0 1-1.5-1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 11v6M9 14h6", 0, 0 } };
static const MiraOp mira_cut_91_f0[] = { { 1, 1.0f, 0.0f, "M12 11v6M9 14h6", 0, 0 } };
static const MiraOp mira_ops_f_91[] = { { 0, 0.0f, 0.0f, "M3.5 7A1.5 1.5 0 0 1 5 5.5h4.4a1.5 1.5 0 0 1 1.06.44L12 7.5h7a1.5 1.5 0 0 1 1.5 1.5v8.5A1.5 1.5 0 0 1 19 19H5a1.5 1.5 0 0 1-1.5-1.5z", mira_cut_91_f0, 1 } };
static const char *const mira_tags_92[] = { "presse-papiers", "coller", "bloc-notes" };
static const MiraOp mira_ops_o_92[] = { { 1, 1.0f, 0.0f, "M6.5 5.5H9V4.5A1 1 0 0 1 10 3.5h4a1 1 0 0 1 1 1v1h2.5A1.5 1.5 0 0 1 19 7v12a1.5 1.5 0 0 1-1.5 1.5h-11A1.5 1.5 0 0 1 5 19V7a1.5 1.5 0 0 1 1.5-1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 5.5v2h6v-2M8.5 12h7M8.5 15.5h5", 0, 0 } };
static const MiraOp mira_cut_92_f0[] = { { 1, 1.0f, 0.0f, "M9 5.5v2h6v-2M8.5 12h7M8.5 15.5h5", 0, 0 } };
static const MiraOp mira_ops_f_92[] = { { 0, 0.0f, 0.0f, "M6.5 5.5H9V4.5A1 1 0 0 1 10 3.5h4a1 1 0 0 1 1 1v1h2.5A1.5 1.5 0 0 1 19 7v12a1.5 1.5 0 0 1-1.5 1.5h-11A1.5 1.5 0 0 1 5 19V7a1.5 1.5 0 0 1 1.5-1.5z", mira_cut_92_f0, 1 } };
static const char *const mira_tags_93[] = { "archiver", "bo\303\256te", "ranger" };
static const MiraOp mira_ops_o_93[] = { { 1, 1.0f, 0.0f, "M3.5 8.5v-3A1.5 1.5 0 0 1 5 4h14a1.5 1.5 0 0 1 1.5 1.5v3zM4.5 8.5h15V19a1.5 1.5 0 0 1-1.5 1.5H6A1.5 1.5 0 0 1 4.5 19z", 0, 0 }, { 1, 1.0f, 0.0f, "M10 12.5h4", 0, 0 } };
static const MiraOp mira_cut_93_f0[] = { { 1, 1.0f, 0.0f, "M10 12.5h4", 0, 0 } };
static const MiraOp mira_ops_f_93[] = { { 0, 0.0f, 0.0f, "M3.5 8.5v-3A1.5 1.5 0 0 1 5 4h14a1.5 1.5 0 0 1 1.5 1.5v3zM4.5 8.5h15V19a1.5 1.5 0 0 1-1.5 1.5H6A1.5 1.5 0 0 1 4.5 19z", mira_cut_93_f0, 1 } };
static const char *const mira_tags_94[] = { "bo\303\256te de r\303\251ception", "recevoir", "inbox" };
static const MiraOp mira_ops_o_94[] = { { 1, 1.0f, 0.0f, "M4 13h4.5l1.5 2.5h4l1.5-2.5H20v5.5a1.5 1.5 0 0 1-1.5 1.5h-13A1.5 1.5 0 0 1 4 18.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 3.5v9M8.5 9l3.5 3.5L15.5 9", 0, 0 } };
static const MiraOp mira_ops_f_94[] = { { 0, 0.0f, 0.0f, "M4 13h4.5l1.5 2.5h4l1.5-2.5H20v5.5a1.5 1.5 0 0 1-1.5 1.5h-13A1.5 1.5 0 0 1 4 18.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 3.5v9M8.5 9l3.5 3.5L15.5 9", 0, 0 } };
static const char *const mira_tags_95[] = { "bo\303\256te d'envoi", "envoyer", "outbox" };
static const MiraOp mira_ops_o_95[] = { { 1, 1.0f, 0.0f, "M4 13h4.5l1.5 2.5h4l1.5-2.5H20v5.5a1.5 1.5 0 0 1-1.5 1.5h-13A1.5 1.5 0 0 1 4 18.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 12.5v-9M8.5 7 12 3.5 15.5 7", 0, 0 } };
static const MiraOp mira_ops_f_95[] = { { 0, 0.0f, 0.0f, "M4 13h4.5l1.5 2.5h4l1.5-2.5H20v5.5a1.5 1.5 0 0 1-1.5 1.5h-13A1.5 1.5 0 0 1 4 18.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 12.5v-9M8.5 7 12 3.5 15.5 7", 0, 0 } };
static const char *const mira_tags_96[] = { "disque externe", "stockage", "volume" };
static const MiraOp mira_ops_o_96[] = { { 1, 1.0f, 0.0f, "M3.5 10A1.5 1.5 0 0 1 5 8.5h14a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1-1.5 1.5H5A1.5 1.5 0 0 1 3.5 14z", 0, 0 }, { 1, 1.0f, 0.0f, "M16.5 12h1", 0, 0 } };
static const MiraOp mira_cut_96_f0[] = { { 1, 1.0f, 0.0f, "M16.5 12h1", 0, 0 } };
static const MiraOp mira_ops_f_96[] = { { 0, 0.0f, 0.0f, "M3.5 10A1.5 1.5 0 0 1 5 8.5h14a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1-1.5 1.5H5A1.5 1.5 0 0 1 3.5 14z", mira_cut_96_f0, 1 } };
static const char *const mira_tags_97[] = { "base de donn\303\251es", "database", "stockage", "table" };
static const MiraOp mira_ops_o_97[] = { { 1, 1.0f, 0.0f, "M5 6.5c0-1.7 3.1-3 7-3s7 1.3 7 3v11c0 1.7-3.1 3-7 3s-7-1.3-7-3z", 0, 0 }, { 1, 1.0f, 0.0f, "M5 6.5c0 1.7 3.1 3 7 3s7-1.3 7-3M5 12c0 1.7 3.1 3 7 3s7-1.3 7-3", 0, 0 } };
static const MiraOp mira_cut_97_f0[] = { { 1, 1.0f, 0.0f, "M5 6.5c0 1.7 3.1 3 7 3s7-1.3 7-3M5 12c0 1.7 3.1 3 7 3s7-1.3 7-3", 0, 0 } };
static const MiraOp mira_ops_f_97[] = { { 0, 0.0f, 0.0f, "M5 6.5c0-1.7 3.1-3 7-3s7 1.3 7 3v11c0 1.7-3.1 3-7 3s-7-1.3-7-3z", mira_cut_97_f0, 1 } };
static const char *const mira_tags_98[] = { "serveur", "h\303\251bergement", "infrastructure", "cloud" };
static const MiraOp mira_ops_o_98[] = { { 1, 1.0f, 0.0f, "M5.5 3h13a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-13a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5zM5.5 14h13a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-13a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M7 6.5h1M7 17.5h1", 0, 0 } };
static const MiraOp mira_cut_98_f0[] = { { 1, 1.0f, 0.0f, "M7 6.5h1M7 17.5h1", 0, 0 } };
static const MiraOp mira_ops_f_98[] = { { 0, 0.0f, 0.0f, "M5.5 3h13a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-13a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5zM5.5 14h13a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-13a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5z", mira_cut_98_f0, 1 } };
static const char *const mira_tags_99[] = { "tableau", "grille", "cellules", "feuille de calcul" };
static const MiraOp mira_ops_o_99[] = { { 1, 1.0f, 0.0f, "M5.5 4.5h13a2 2 0 0 1 2 2v11a2 2 0 0 1 -2 2h-13a2 2 0 0 1 -2 -2v-11a2 2 0 0 1 2 -2z", 0, 0 }, { 1, 1.0f, 0.0f, "M3.5 9.5h17M3.5 14.5h17M9.5 4.5v15M15 4.5v15", 0, 0 } };
static const MiraOp mira_cut_99_f0[] = { { 1, 1.0f, 0.0f, "M3.5 9.5h17M3.5 14.5h17M9.5 4.5v15M15 4.5v15", 0, 0 } };
static const MiraOp mira_ops_f_99[] = { { 0, 0.0f, 0.0f, "M5.5 4.5h13a2 2 0 0 1 2 2v11a2 2 0 0 1 -2 2h-13a2 2 0 0 1 -2 -2v-11a2 2 0 0 1 2 -2z", mira_cut_99_f0, 1 } };
static const char *const mira_tags_100[] = { "graphique", "barres", "statistiques", "histogramme" };
static const MiraOp mira_ops_o_100[] = { { 1, 1.0f, 0.0f, "M6 11h1a1 1 0 0 1 1 1v6a1 1 0 0 1 -1 1h-1a1 1 0 0 1 -1 -1v-6a1 1 0 0 1 1 -1zM11.5 5h1a1 1 0 0 1 1 1v12a1 1 0 0 1 -1 1h-1a1 1 0 0 1 -1 -1v-12a1 1 0 0 1 1 -1zM17 13h1a1 1 0 0 1 1 1v4a1 1 0 0 1 -1 1h-1a1 1 0 0 1 -1 -1v-4a1 1 0 0 1 1 -1z", 0, 0 } };
static const MiraOp mira_ops_f_100[] = { { 0, 0.0f, 0.0f, "M6 11h1a1 1 0 0 1 1 1v6a1 1 0 0 1 -1 1h-1a1 1 0 0 1 -1 -1v-6a1 1 0 0 1 1 -1zM11.5 5h1a1 1 0 0 1 1 1v12a1 1 0 0 1 -1 1h-1a1 1 0 0 1 -1 -1v-12a1 1 0 0 1 1 -1zM17 13h1a1 1 0 0 1 1 1v4a1 1 0 0 1 -1 1h-1a1 1 0 0 1 -1 -1v-4a1 1 0 0 1 1 -1z", 0, 0 } };
static const char *const mira_tags_101[] = { "graphique", "camembert", "r\303\251partition", "secteurs" };
static const MiraOp mira_ops_o_101[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 3v9h9M12 12l6.36 6.36", 0, 0 } };
static const MiraOp mira_cut_101_f0[] = { { 1, 1.0f, 0.0f, "M12 3v9h9M12 12l6.36 6.36", 0, 0 } };
static const MiraOp mira_ops_f_101[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_101_f0, 1 } };
static const char *const mira_tags_102[] = { "graphique", "courbe", "hausse", "tendance", "croissance" };
static const MiraOp mira_ops_o_102[] = { { 1, 1.0f, 0.0f, "M4 4v16h16M7 15l4-5 3 3 5-7M15.5 6H19v3.5", 0, 0 } };
static const MiraOp mira_ops_f_102[] = { { 1, 1.0f, 0.0f, "M4 4v16h16M7 15l4-5 3 3 5-7M15.5 6H19v3.5", 0, 0 } };
static const char *const mira_tags_103[] = { "pi\303\250ce jointe", "trombone", "joindre" };
static const MiraOp mira_ops_o_103[] = { { 1, 1.0f, 0.0f, "M16.5 6.5 9 14a2.12 2.12 0 0 0 3 3l7.5-7.5a4.24 4.24 0 0 0-6-6L6 11a6.36 6.36 0 0 0 9 9l6-6", 0, 0 } };
static const MiraOp mira_ops_f_103[] = { { 1, 1.0f, 0.0f, "M16.5 6.5 9 14a2.12 2.12 0 0 0 3 3l7.5-7.5a4.24 4.24 0 0 0-6-6L6 11a6.36 6.36 0 0 0 9 9l6-6", 0, 0 } };
static const char *const mira_tags_104[] = { "imprimer", "imprimante" };
static const MiraOp mira_ops_o_104[] = { { 1, 1.0f, 0.0f, "M6 17H5a1.5 1.5 0 0 1-1.5-1.5V11A1.5 1.5 0 0 1 5 9.5h14a1.5 1.5 0 0 1 1.5 1.5v4.5A1.5 1.5 0 0 1 19 17h-1", 0, 0 }, { 1, 1.0f, 0.0f, "M7 9.5V4h10v5.5M7 14h10v6H7z", 0, 0 } };
static const MiraOp mira_ops_f_104[] = { { 0, 0.0f, 0.0f, "M6 17H5a1.5 1.5 0 0 1-1.5-1.5V11A1.5 1.5 0 0 1 5 9.5h14a1.5 1.5 0 0 1 1.5 1.5v4.5A1.5 1.5 0 0 1 19 17h-1", 0, 0 }, { 1, 1.0f, 0.0f, "M7 9.5V4h10v5.5M7 14h10v6H7z", 0, 0 } };
static const char *const mira_tags_105[] = { "QR code", "scanner", "code" };
static const MiraOp mira_ops_o_105[] = { { 1, 1.0f, 0.0f, "M4.7 3.5h4.6a1.2 1.2 0 0 1 1.2 1.2v4.6a1.2 1.2 0 0 1 -1.2 1.2h-4.6a1.2 1.2 0 0 1 -1.2 -1.2v-4.6a1.2 1.2 0 0 1 1.2 -1.2zM14.7 3.5h4.6a1.2 1.2 0 0 1 1.2 1.2v4.6a1.2 1.2 0 0 1 -1.2 1.2h-4.6a1.2 1.2 0 0 1 -1.2 -1.2v-4.6a1.2 1.2 0 0 1 1.2 -1.2zM4.7 13.5h4.6a1.2 1.2 0 0 1 1.2 1.2v4.6a1.2 1.2 0 0 1 -1.2 1.2h-4.6a1.2 1.2 0 0 1 -1.2 -1.2v-4.6a1.2 1.2 0 0 1 1.2 -1.2zM14 13.5h2a0.5 0.5 0 0 1 0.5 0.5v2a0.5 0.5 0 0 1 -0.5 0.5h-2a0.5 0.5 0 0 1 -0.5 -0.5v-2a0.5 0.5 0 0 1 0.5 -0.5zM18 17.5h2a0.5 0.5 0 0 1 0.5 0.5v2a0.5 0.5 0 0 1 -0.5 0.5h-2a0.5 0.5 0 0 1 -0.5 -0.5v-2a0.5 0.5 0 0 1 0.5 -0.5zM18 13.5h2a0.5 0.5 0 0 1 0.5 0.5v2a0.5 0.5 0 0 1 -0.5 0.5h-2a0.5 0.5 0 0 1 -0.5 -0.5v-2a0.5 0.5 0 0 1 0.5 -0.5zM14 17.5h2a0.5 0.5 0 0 1 0.5 0.5v2a0.5 0.5 0 0 1 -0.5 0.5h-2a0.5 0.5 0 0 1 -0.5 -0.5v-2a0.5 0.5 0 0 1 0.5 -0.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M6.5 7h1M16.5 7h1M6.5 17h1", 0, 0 } };
static const MiraOp mira_cut_105_f0[] = { { 1, 1.0f, 0.0f, "M6.5 7h1M16.5 7h1M6.5 17h1", 0, 0 } };
static const MiraOp mira_ops_f_105[] = { { 0, 0.0f, 0.0f, "M4.7 3.5h4.6a1.2 1.2 0 0 1 1.2 1.2v4.6a1.2 1.2 0 0 1 -1.2 1.2h-4.6a1.2 1.2 0 0 1 -1.2 -1.2v-4.6a1.2 1.2 0 0 1 1.2 -1.2zM14.7 3.5h4.6a1.2 1.2 0 0 1 1.2 1.2v4.6a1.2 1.2 0 0 1 -1.2 1.2h-4.6a1.2 1.2 0 0 1 -1.2 -1.2v-4.6a1.2 1.2 0 0 1 1.2 -1.2zM4.7 13.5h4.6a1.2 1.2 0 0 1 1.2 1.2v4.6a1.2 1.2 0 0 1 -1.2 1.2h-4.6a1.2 1.2 0 0 1 -1.2 -1.2v-4.6a1.2 1.2 0 0 1 1.2 -1.2zM14 13.5h2a0.5 0.5 0 0 1 0.5 0.5v2a0.5 0.5 0 0 1 -0.5 0.5h-2a0.5 0.5 0 0 1 -0.5 -0.5v-2a0.5 0.5 0 0 1 0.5 -0.5zM18 17.5h2a0.5 0.5 0 0 1 0.5 0.5v2a0.5 0.5 0 0 1 -0.5 0.5h-2a0.5 0.5 0 0 1 -0.5 -0.5v-2a0.5 0.5 0 0 1 0.5 -0.5zM18 13.5h2a0.5 0.5 0 0 1 0.5 0.5v2a0.5 0.5 0 0 1 -0.5 0.5h-2a0.5 0.5 0 0 1 -0.5 -0.5v-2a0.5 0.5 0 0 1 0.5 -0.5zM14 17.5h2a0.5 0.5 0 0 1 0.5 0.5v2a0.5 0.5 0 0 1 -0.5 0.5h-2a0.5 0.5 0 0 1 -0.5 -0.5v-2a0.5 0.5 0 0 1 0.5 -0.5z", mira_cut_105_f0, 1 } };
static const char *const mira_tags_106[] = { "code-barres", "scanner", "produit" };
static const MiraOp mira_ops_o_106[] = { { 1, 1.0f, 0.0f, "M3.5 6v12M7 6v12M9.5 6v12M13 6v12M16.5 6v12M20.5 6v12", 0, 0 } };
static const MiraOp mira_ops_f_106[] = { { 1, 1.0f, 0.0f, "M3.5 6v12M7 6v12M9.5 6v12M13 6v12M16.5 6v12M20.5 6v12", 0, 0 } };
static const char *const mira_tags_107[] = { "mail", "courrier", "e-mail", "message", "enveloppe" };
static const MiraOp mira_ops_o_107[] = { { 1, 1.0f, 0.0f, "M3.5 6.5A1.5 1.5 0 0 1 5 5h14a1.5 1.5 0 0 1 1.5 1.5v11A1.5 1.5 0 0 1 19 19H5a1.5 1.5 0 0 1-1.5-1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M3.5 7.5l8.5 6 8.5-6", 0, 0 } };
static const MiraOp mira_cut_107_f0[] = { { 1, 1.0f, 0.0f, "M3.5 7.5l8.5 6 8.5-6", 0, 0 } };
static const MiraOp mira_ops_f_107[] = { { 0, 0.0f, 0.0f, "M3.5 6.5A1.5 1.5 0 0 1 5 5h14a1.5 1.5 0 0 1 1.5 1.5v11A1.5 1.5 0 0 1 19 19H5a1.5 1.5 0 0 1-1.5-1.5z", mira_cut_107_f0, 1 } };
static const char *const mira_tags_108[] = { "mail lu", "ouvrir", "courrier" };
static const MiraOp mira_ops_o_108[] = { { 1, 1.0f, 0.0f, "M3.5 10 12 4l8.5 6v8.5A1.5 1.5 0 0 1 19 20H5a1.5 1.5 0 0 1-1.5-1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M3.5 10.5 12 16l8.5-5.5", 0, 0 } };
static const MiraOp mira_cut_108_f0[] = { { 1, 1.0f, 0.0f, "M3.5 10.5 12 16l8.5-5.5", 0, 0 } };
static const MiraOp mira_ops_f_108[] = { { 0, 0.0f, 0.0f, "M3.5 10 12 4l8.5 6v8.5A1.5 1.5 0 0 1 19 20H5a1.5 1.5 0 0 1-1.5-1.5z", mira_cut_108_f0, 1 } };
static const char *const mira_tags_109[] = { "message", "discussion", "chat", "commentaire", "bulle" };
static const MiraOp mira_ops_o_109[] = { { 1, 1.0f, 0.0f, "M12 4c5 0 8.5 3 8.5 6.8S17 17.5 12 17.5c-1 0-2-.1-2.8-.4L5 19l1-3.4C4.6 14.3 3.5 12.6 3.5 10.8 3.5 7 7 4 12 4z", 0, 0 } };
static const MiraOp mira_ops_f_109[] = { { 0, 0.0f, 0.0f, "M12 4c5 0 8.5 3 8.5 6.8S17 17.5 12 17.5c-1 0-2-.1-2.8-.4L5 19l1-3.4C4.6 14.3 3.5 12.6 3.5 10.8 3.5 7 7 4 12 4z", 0, 0 } };
static const char *const mira_tags_110[] = { "conversation", "discussion", "chat", "messagerie", "discord" };
static const MiraOp mira_ops_o_110[] = { { 1, 1.0f, 0.0f, "M6.5 5h6a3 3 0 0 1 3 3v3a3 3 0 0 1-3 3H8.5L5 16.5v-2.9A3 3 0 0 1 3.5 11V8a3 3 0 0 1 3-3z", 0, 0 }, { 1, 1.0f, 0.0f, "M17.5 9.5a3 3 0 0 1 3 3v3a3 3 0 0 1-1.5 2.6v2.4l-3-2.5H12a3 3 0 0 1-2.5-1.5", 0, 0 } };
static const MiraOp mira_ops_f_110[] = { { 0, 0.0f, 0.0f, "M6.5 5h6a3 3 0 0 1 3 3v3a3 3 0 0 1-3 3H8.5L5 16.5v-2.9A3 3 0 0 1 3.5 11V8a3 3 0 0 1 3-3z", 0, 0 }, { 1, 1.0f, 0.0f, "M17.5 9.5a3 3 0 0 1 3 3v3a3 3 0 0 1-1.5 2.6v2.4l-3-2.5H12a3 3 0 0 1-2.5-1.5", 0, 0 } };
static const char *const mira_tags_111[] = { "t\303\251l\303\251phone", "appeler", "appel" };
static const MiraOp mira_ops_o_111[] = { { 1, 1.0f, 0.0f, "M6.5 3.5h3l1.5 4-2 1.5a10 10 0 0 0 6 6l1.5-2 4 1.5v3a2 2 0 0 1-2 2A15 15 0 0 1 4.5 5.5a2 2 0 0 1 2-2z", 0, 0 } };
static const MiraOp mira_ops_f_111[] = { { 0, 0.0f, 0.0f, "M6.5 3.5h3l1.5 4-2 1.5a10 10 0 0 0 6 6l1.5-2 4 1.5v3a2 2 0 0 1-2 2A15 15 0 0 1 4.5 5.5a2 2 0 0 1 2-2z", 0, 0 }, { 1, 1.0f, -1.5f, "M6.5 3.5h3l1.5 4-2 1.5a10 10 0 0 0 6 6l1.5-2 4 1.5v3a2 2 0 0 1-2 2A15 15 0 0 1 4.5 5.5a2 2 0 0 1 2-2z", 0, 0 } };
static const char *const mira_tags_112[] = { "visio", "cam\303\251ra", "appel vid\303\251o", "enregistrer" };
static const MiraOp mira_ops_o_112[] = { { 1, 1.0f, 0.0f, "M3.5 8A1.5 1.5 0 0 1 5 6.5h9A1.5 1.5 0 0 1 15.5 8v8a1.5 1.5 0 0 1-1.5 1.5H5A1.5 1.5 0 0 1 3.5 16zM15.5 10.5 20.5 8v8l-5-2.5z", 0, 0 } };
static const MiraOp mira_ops_f_112[] = { { 0, 0.0f, 0.0f, "M3.5 8A1.5 1.5 0 0 1 5 6.5h9A1.5 1.5 0 0 1 15.5 8v8a1.5 1.5 0 0 1-1.5 1.5H5A1.5 1.5 0 0 1 3.5 16zM15.5 10.5 20.5 8v8l-5-2.5z", 0, 0 } };
static const char *const mira_tags_113[] = { "arobase", "mention", "adresse e-mail" };
static const MiraOp mira_ops_o_113[] = { { 1, 1.0f, 0.0f, "M16 12a4 4 0 1 1-8 0 4 4 0 0 1 8 0zM16 8v5.5a2.5 2.5 0 0 0 5 0V12a9 9 0 1 0-3.5 7.1", 0, 0 } };
static const MiraOp mira_ops_f_113[] = { { 1, 1.0f, 0.0f, "M16 12a4 4 0 1 1-8 0 4 4 0 0 1 8 0zM16 8v5.5a2.5 2.5 0 0 0 5 0V12a9 9 0 1 0-3.5 7.1", 0, 0 } };
static const char *const mira_tags_114[] = { "di\303\250se", "hashtag", "canal", "num\303\251ro", "slack" };
static const MiraOp mira_ops_o_114[] = { { 1, 1.0f, 0.0f, "M9.5 4 7.5 20M16.5 4l-2 16M4.5 9h16M3.5 15h16", 0, 0 } };
static const MiraOp mira_ops_f_114[] = { { 1, 1.0f, 0.0f, "M9.5 4 7.5 20M16.5 4l-2 16M4.5 9h16M3.5 15h16", 0, 0 } };
static const char *const mira_tags_115[] = { "notifications", "alerte", "cloche", "rappel" };
static const MiraOp mira_ops_o_115[] = { { 1, 1.0f, 0.0f, "M6 16V10.5a6 6 0 0 1 12 0V16l1.5 1.5H4.5zM10 17.5a2 2 0 0 0 4 0z", 0, 0 } };
static const MiraOp mira_ops_f_115[] = { { 0, 0.0f, 0.0f, "M6 16V10.5a6 6 0 0 1 12 0V16l1.5 1.5H4.5zM10 17.5a2 2 0 0 0 4 0z", 0, 0 } };
static const char *const mira_tags_116[] = { "nouvelle notification", "non lu", "pastille" };
static const MiraOp mira_ops_o_116[] = { { 1, 1.0f, 0.0f, "M6 16V10.5a6 6 0 0 1 12 0V16l1.5 1.5H4.5zM10 17.5a2 2 0 0 0 4 0z", 0, 0 }, { 0, 0.0f, 0.0f, "M16.5 5.5a2 2 0 1 0 4 0a2 2 0 1 0 -4 0z", 0, 0 } };
static const MiraOp mira_ops_f_116[] = { { 0, 0.0f, 0.0f, "M6 16V10.5a6 6 0 0 1 12 0V16l1.5 1.5H4.5zM10 17.5a2 2 0 0 0 4 0z", 0, 0 }, { 0, 0.0f, 0.0f, "M16.5 5.5a2 2 0 1 0 4 0a2 2 0 1 0 -4 0z", 0, 0 } };
static const char *const mira_tags_117[] = { "notifications coup\303\251es", "silencieux", "ne pas d\303\251ranger" };
static const MiraOp mira_ops_o_117[] = { { 1, 1.0f, 0.0f, "M6 16V10.5a6 6 0 0 1 12 0V16l1.5 1.5H4.5zM10 17.5a2 2 0 0 0 4 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M4 4l16 16", 0, 0 } };
static const MiraOp mira_cut_117_f0[] = { { 1, 1.0f, 1.4f, "M4 4l16 16", 0, 0 } };
static const MiraOp mira_ops_f_117[] = { { 0, 0.0f, 0.0f, "M6 16V10.5a6 6 0 0 1 12 0V16l1.5 1.5H4.5zM10 17.5a2 2 0 0 0 4 0z", mira_cut_117_f0, 1 }, { 1, 1.0f, 0.0f, "M4 4l16 16", 0, 0 } };
static const char *const mira_tags_118[] = { "annonce", "promotion", "haut-parleur", "campagne" };
static const MiraOp mira_ops_o_118[] = { { 1, 1.0f, 0.0f, "M4 10v4a1.5 1.5 0 0 0 1.5 1.5H8l9 4.5V4L8 8.5H5.5A1.5 1.5 0 0 0 4 10z", 0, 0 }, { 1, 1.0f, 0.0f, "M8 15.5v3.5a1.5 1.5 0 0 0 3 0v-2.5M17 9.5a3 3 0 0 1 0 5", 0, 0 } };
static const MiraOp mira_ops_f_118[] = { { 0, 0.0f, 0.0f, "M4 10v4a1.5 1.5 0 0 0 1.5 1.5H8l9 4.5V4L8 8.5H5.5A1.5 1.5 0 0 0 4 10z", 0, 0 }, { 1, 1.0f, 0.0f, "M8 15.5v3.5a1.5 1.5 0 0 0 3 0v-2.5M17 9.5a3 3 0 0 1 0 5", 0, 0 } };
static const char *const mira_tags_119[] = { "diffusion", "r\303\251seau cellulaire", "antenne", "signal", "live" };
static const MiraOp mira_ops_o_119[] = { { 0, 0.0f, 0.0f, "M10.4 10.5a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 12v7.5M6.5 5a7.8 7.8 0 0 0 0 11M17.5 5a7.8 7.8 0 0 1 0 11M9 7.5a4.3 4.3 0 0 0 0 6M15 7.5a4.3 4.3 0 0 1 0 6", 0, 0 } };
static const MiraOp mira_ops_f_119[] = { { 0, 0.0f, 0.0f, "M10.4 10.5a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 12v7.5M6.5 5a7.8 7.8 0 0 0 0 11M17.5 5a7.8 7.8 0 0 1 0 11M9 7.5a4.3 4.3 0 0 0 0 6M15 7.5a4.3 4.3 0 0 1 0 6", 0, 0 } };
static const char *const mira_tags_120[] = { "casque micro", "vocal", "discord", "twitch", "gaming", "support", "chat vocal" };
static const MiraOp mira_ops_o_120[] = { { 1, 1.0f, 0.0f, "M5.5 11h1a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-1a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5zM17.5 11h1a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-1a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M4 13v-2a8 8 0 0 1 16 0v2M18 18v1.5a2 2 0 0 1-2 2h-3.5", 0, 0 } };
static const MiraOp mira_ops_f_120[] = { { 0, 0.0f, 0.0f, "M5.5 11h1a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-1a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5zM17.5 11h1a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-1a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M4 13v-2a8 8 0 0 1 16 0v2M18 18v1.5a2 2 0 0 1-2 2h-3.5", 0, 0 } };
static const char *const mira_tags_121[] = { "casque", "\303\251couter", "support", "audio" };
static const MiraOp mira_ops_o_121[] = { { 1, 1.0f, 0.0f, "M5.5 13h1a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-1a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5zM17.5 13h1a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-1a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M4 15v-3a8 8 0 0 1 16 0v3", 0, 0 } };
static const MiraOp mira_ops_f_121[] = { { 0, 0.0f, 0.0f, "M5.5 13h1a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-1a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5zM17.5 13h1a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-1a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M4 15v-3a8 8 0 0 1 16 0v3", 0, 0 } };
static const char *const mira_tags_122[] = { "sourire", "content", "emoji", "r\303\251action", "heureux" };
static const MiraOp mira_ops_o_122[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M8.35 9.75a0.9 0.9 0 1 0 1.8 0a0.9 0.9 0 1 0 -1.8 0zM13.85 9.75a0.9 0.9 0 1 0 1.8 0a0.9 0.9 0 1 0 -1.8 0zM8.25 14a4 4 0 0 0 7.5 0", 0, 0 } };
static const MiraOp mira_cut_122_f0[] = { { 1, 1.0f, 0.0f, "M8.35 9.75a0.9 0.9 0 1 0 1.8 0a0.9 0.9 0 1 0 -1.8 0zM13.85 9.75a0.9 0.9 0 1 0 1.8 0a0.9 0.9 0 1 0 -1.8 0zM8.25 14a4 4 0 0 0 7.5 0", 0, 0 } };
static const MiraOp mira_ops_f_122[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_122_f0, 1 } };
static const char *const mira_tags_123[] = { "neutre", "bof", "emoji", "r\303\251action" };
static const MiraOp mira_ops_o_123[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M8.35 9.75a0.9 0.9 0 1 0 1.8 0a0.9 0.9 0 1 0 -1.8 0zM13.85 9.75a0.9 0.9 0 1 0 1.8 0a0.9 0.9 0 1 0 -1.8 0zM9 14.5h6", 0, 0 } };
static const MiraOp mira_cut_123_f0[] = { { 1, 1.0f, 0.0f, "M8.35 9.75a0.9 0.9 0 1 0 1.8 0a0.9 0.9 0 1 0 -1.8 0zM13.85 9.75a0.9 0.9 0 1 0 1.8 0a0.9 0.9 0 1 0 -1.8 0zM9 14.5h6", 0, 0 } };
static const MiraOp mira_ops_f_123[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_123_f0, 1 } };
static const char *const mira_tags_124[] = { "triste", "m\303\251content", "emoji", "r\303\251action" };
static const MiraOp mira_ops_o_124[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M8.35 9.75a0.9 0.9 0 1 0 1.8 0a0.9 0.9 0 1 0 -1.8 0zM13.85 9.75a0.9 0.9 0 1 0 1.8 0a0.9 0.9 0 1 0 -1.8 0zM8.25 16a4 4 0 0 1 7.5 0", 0, 0 } };
static const MiraOp mira_cut_124_f0[] = { { 1, 1.0f, 0.0f, "M8.35 9.75a0.9 0.9 0 1 0 1.8 0a0.9 0.9 0 1 0 -1.8 0zM13.85 9.75a0.9 0.9 0 1 0 1.8 0a0.9 0.9 0 1 0 -1.8 0zM8.25 16a4 4 0 0 1 7.5 0", 0, 0 } };
static const MiraOp mira_ops_f_124[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_124_f0, 1 } };
static const char *const mira_tags_125[] = { "pouce lev\303\251", "j'aime", "approuver", "like", "bravo", "facebook" };
static const MiraOp mira_ops_o_125[] = { { 1, 1.0f, 0.0f, "M3 12A1.5 1.5 0 0 1 4.5 10.5H7V20H4.5A1.5 1.5 0 0 1 3 18.5zM7 10.5 10.3 4.3A1.9 1.9 0 0 1 13.9 5.2L13.3 9.5h5.2a2 2 0 0 1 2 2.3l-1.2 6.5A2 2 0 0 1 17.3 20H7z", 0, 0 } };
static const MiraOp mira_ops_f_125[] = { { 0, 0.0f, 0.0f, "M3 12A1.5 1.5 0 0 1 4.5 10.5H7V20H4.5A1.5 1.5 0 0 1 3 18.5zM7 10.5 10.3 4.3A1.9 1.9 0 0 1 13.9 5.2L13.3 9.5h5.2a2 2 0 0 1 2 2.3l-1.2 6.5A2 2 0 0 1 17.3 20H7z", 0, 0 }, { 1, 1.0f, -1.5f, "M3 12A1.5 1.5 0 0 1 4.5 10.5H7V20H4.5A1.5 1.5 0 0 1 3 18.5zM7 10.5 10.3 4.3A1.9 1.9 0 0 1 13.9 5.2L13.3 9.5h5.2a2 2 0 0 1 2 2.3l-1.2 6.5A2 2 0 0 1 17.3 20H7z", 0, 0 } };
static const char *const mira_tags_126[] = { "pouce baiss\303\251", "je n'aime pas", "d\303\251sapprouver", "dislike" };
static const MiraOp mira_ops_o_126[] = { { 1, 1.0f, 0.0f, "M3 12a1.5 1.5 0 0 0 1.5 1.5H7V4H4.5A1.5 1.5 0 0 0 3 5.5zM7 13.5l3.3 6.2a1.9 1.9 0 0 0 3.6-.9l-.6-4.3h5.2a2 2 0 0 0 2-2.3l-1.2-6.5A2 2 0 0 0 17.3 4H7z", 0, 0 } };
static const MiraOp mira_ops_f_126[] = { { 0, 0.0f, 0.0f, "M3 12a1.5 1.5 0 0 0 1.5 1.5H7V4H4.5A1.5 1.5 0 0 0 3 5.5zM7 13.5l3.3 6.2a1.9 1.9 0 0 0 3.6-.9l-.6-4.3h5.2a2 2 0 0 0 2-2.3l-1.2-6.5A2 2 0 0 0 17.3 4H7z", 0, 0 }, { 1, 1.0f, -1.5f, "M3 12a1.5 1.5 0 0 0 1.5 1.5H7V4H4.5A1.5 1.5 0 0 0 3 5.5zM7 13.5l3.3 6.2a1.9 1.9 0 0 0 3.6-.9l-.6-4.3h5.2a2 2 0 0 0 2-2.3l-1.2-6.5A2 2 0 0 0 17.3 4H7z", 0, 0 } };
static const char *const mira_tags_127[] = { "main lev\303\251e", "stop", "bonjour", "attendre", "question" };
static const MiraOp mira_ops_o_127[] = { { 1, 1.0f, 0.0f, "M8 15V6a1.5 1.5 0 0 1 3 0v5M11 11V4.5a1.5 1.5 0 0 1 3 0V11M14 11V6a1.5 1.5 0 0 1 3 0v6M17 12V8.5a1.5 1.5 0 0 1 3 0V15a6 6 0 0 1-6 6h-2a6 6 0 0 1-4.7-2.3l-3-3.8a1.6 1.6 0 0 1 2.5-2L8 15", 0, 0 } };
static const MiraOp mira_ops_f_127[] = { { 1, 1.0f, 0.0f, "M8 15V6a1.5 1.5 0 0 1 3 0v5M11 11V4.5a1.5 1.5 0 0 1 3 0V11M14 11V6a1.5 1.5 0 0 1 3 0v6M17 12V8.5a1.5 1.5 0 0 1 3 0V15a6 6 0 0 1-6 6h-2a6 6 0 0 1-4.7-2.3l-3-3.8a1.6 1.6 0 0 1 2.5-2L8 15", 0, 0 } };
static const char *const mira_tags_128[] = { "pointer", "index", "curseur", "toucher", "cliquer" };
static const MiraOp mira_ops_o_128[] = { { 1, 1.0f, 0.0f, "M9 14.5V5a1.5 1.5 0 0 1 3 0v6h5.5a2.5 2.5 0 0 1 2.5 2.5V15a6 6 0 0 1-6 6h-2a6 6 0 0 1-4.7-2.3l-2.9-3.7a1.5 1.5 0 0 1 2.4-1.9z", 0, 0 } };
static const MiraOp mira_ops_f_128[] = { { 0, 0.0f, 0.0f, "M9 14.5V5a1.5 1.5 0 0 1 3 0v6h5.5a2.5 2.5 0 0 1 2.5 2.5V15a6 6 0 0 1-6 6h-2a6 6 0 0 1-4.7-2.3l-2.9-3.7a1.5 1.5 0 0 1 2.4-1.9z", 0, 0 }, { 1, 1.0f, -1.5f, "M9 14.5V5a1.5 1.5 0 0 1 3 0v6h5.5a2.5 2.5 0 0 1 2.5 2.5V15a6 6 0 0 1-6 6h-2a6 6 0 0 1-4.7-2.3l-2.9-3.7a1.5 1.5 0 0 1 2.4-1.9z", 0, 0 } };
static const char *const mira_tags_129[] = { "saluer", "coucou", "bonjour", "au revoir", "main" };
static const MiraOp mira_ops_o_129[] = { { 1, 1.0f, 0.0f, "M9 15V6a1.5 1.5 0 0 1 3 0v5M12 11V4.5a1.5 1.5 0 0 1 3 0V11M15 11V6a1.5 1.5 0 0 1 3 0v6M18 12V8.5a1.5 1.5 0 0 1 3 0V15a6 6 0 0 1-6 6h-2a6 6 0 0 1-4.7-2.3l-2.9-3.7a1.5 1.5 0 0 1 2.4-1.9L9 14.8M5.5 5A6 6 0 0 0 4 8.5M3 2.5A9 9 0 0 0 1.5 7", 0, 0 } };
static const MiraOp mira_ops_f_129[] = { { 1, 1.0f, 0.0f, "M9 15V6a1.5 1.5 0 0 1 3 0v5M12 11V4.5a1.5 1.5 0 0 1 3 0V11M15 11V6a1.5 1.5 0 0 1 3 0v6M18 12V8.5a1.5 1.5 0 0 1 3 0V15a6 6 0 0 1-6 6h-2a6 6 0 0 1-4.7-2.3l-2.9-3.7a1.5 1.5 0 0 1 2.4-1.9L9 14.8M5.5 5A6 6 0 0 0 4 8.5M3 2.5A9 9 0 0 0 1.5 7", 0, 0 } };
static const char *const mira_tags_130[] = { "utilisateur", "profil", "compte", "contact", "personne" };
static const MiraOp mira_ops_o_130[] = { { 1, 1.0f, 0.0f, "M8 7.5a4 4 0 1 0 8 0a4 4 0 1 0 -8 0zM4.5 20.5a7.5 7.5 0 0 1 15 0z", 0, 0 } };
static const MiraOp mira_ops_f_130[] = { { 0, 0.0f, 0.0f, "M8 7.5a4 4 0 1 0 8 0a4 4 0 1 0 -8 0zM4.5 20.5a7.5 7.5 0 0 1 15 0z", 0, 0 } };
static const char *const mira_tags_131[] = { "groupe", "\303\251quipe", "contacts", "partag\303\251" };
static const MiraOp mira_ops_o_131[] = { { 1, 1.0f, 0.0f, "M5.5 8a3.5 3.5 0 1 0 7 0a3.5 3.5 0 1 0 -7 0zM2.5 19.5a6.5 6.5 0 0 1 13 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M15.5 4.6a3.5 3.5 0 0 1 0 6.8M17.5 13.5a6 6 0 0 1 4 6", 0, 0 } };
static const MiraOp mira_cut_131_f0[] = { { 1, 1.0f, 1.4f, "M15.5 4.6a3.5 3.5 0 0 1 0 6.8M17.5 13.5a6 6 0 0 1 4 6", 0, 0 } };
static const MiraOp mira_ops_f_131[] = { { 0, 0.0f, 0.0f, "M5.5 8a3.5 3.5 0 1 0 7 0a3.5 3.5 0 1 0 -7 0zM2.5 19.5a6.5 6.5 0 0 1 13 0z", mira_cut_131_f0, 1 }, { 1, 1.0f, 0.0f, "M15.5 4.6a3.5 3.5 0 0 1 0 6.8M17.5 13.5a6 6 0 0 1 4 6", 0, 0 } };
static const char *const mira_tags_132[] = { "ajouter un contact", "inviter", "nouvel utilisateur" };
static const MiraOp mira_ops_o_132[] = { { 1, 1.0f, 0.0f, "M6 7.5a4 4 0 1 0 8 0a4 4 0 1 0 -8 0zM2.5 20.5a7.5 7.5 0 0 1 15 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M19.5 12v6M16.5 15h6", 0, 0 } };
static const MiraOp mira_ops_f_132[] = { { 0, 0.0f, 0.0f, "M6 7.5a4 4 0 1 0 8 0a4 4 0 1 0 -8 0zM2.5 20.5a7.5 7.5 0 0 1 15 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M19.5 12v6M16.5 15h6", 0, 0 } };
static const char *const mira_tags_133[] = { "profil", "compte", "utilisateur", "avatar", "personne" };
static const MiraOp mira_ops_o_133[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 9.5a3 3 0 1 0 6 0a3 3 0 1 0 -6 0zM6.2 18.2a6.4 6.4 0 0 1 11.6 0", 0, 0 } };
static const MiraOp mira_cut_133_f0[] = { { 1, 1.0f, 0.0f, "M9 9.5a3 3 0 1 0 6 0a3 3 0 1 0 -6 0zM6.2 18.2a6.4 6.4 0 0 1 11.6 0", 0, 0 } };
static const MiraOp mira_ops_f_133[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_133_f0, 1 } };
static const char *const mira_tags_134[] = { "portrait", "photo d'identit\303\251", "avatar carr\303\251" };
static const MiraOp mira_ops_o_134[] = { { 1, 1.0f, 0.0f, "M6.5 3.5h11a3 3 0 0 1 3 3v11a3 3 0 0 1 -3 3h-11a3 3 0 0 1 -3 -3v-11a3 3 0 0 1 3 -3z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 10a3 3 0 1 0 6 0a3 3 0 1 0 -6 0zM6.2 20.5a6.3 6.3 0 0 1 11.6 0", 0, 0 } };
static const MiraOp mira_cut_134_f0[] = { { 1, 1.0f, 0.0f, "M9 10a3 3 0 1 0 6 0a3 3 0 1 0 -6 0zM6.2 20.5a6.3 6.3 0 0 1 11.6 0", 0, 0 } };
static const MiraOp mira_ops_f_134[] = { { 0, 0.0f, 0.0f, "M6.5 3.5h11a3 3 0 0 1 3 3v11a3 3 0 0 1 -3 3h-11a3 3 0 0 1 -3 -3v-11a3 3 0 0 1 3 -3z", mira_cut_134_f0, 1 } };
static const char *const mira_tags_135[] = { "pr\303\251sentation", "bienvenue", "saluer", "onboarding" };
static const MiraOp mira_ops_o_135[] = { { 1, 1.0f, 0.0f, "M6.5 7.5a4 4 0 1 0 8 0a4 4 0 1 0 -8 0zM3 20.5a7.5 7.5 0 0 1 15 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M17 8.5a4 4 0 0 1 0 5.5M19.3 6a7.5 7.5 0 0 1 0 10.5", 0, 0 } };
static const MiraOp mira_cut_135_f0[] = { { 1, 1.0f, 1.4f, "M17 8.5a4 4 0 0 1 0 5.5M19.3 6a7.5 7.5 0 0 1 0 10.5", 0, 0 } };
static const MiraOp mira_ops_f_135[] = { { 0, 0.0f, 0.0f, "M6.5 7.5a4 4 0 1 0 8 0a4 4 0 1 0 -8 0zM3 20.5a7.5 7.5 0 0 1 15 0z", mira_cut_135_f0, 1 }, { 1, 1.0f, 0.0f, "M17 8.5a4 4 0 0 1 0 5.5M19.3 6a7.5 7.5 0 0 1 0 10.5", 0, 0 } };
static const char *const mira_tags_136[] = { "carte bancaire", "paiement", "carte de cr\303\251dit", "payer" };
static const MiraOp mira_ops_o_136[] = { { 1, 1.0f, 0.0f, "M5 5h14a2.5 2.5 0 0 1 2.5 2.5v9a2.5 2.5 0 0 1 -2.5 2.5h-14a2.5 2.5 0 0 1 -2.5 -2.5v-9a2.5 2.5 0 0 1 2.5 -2.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M2.5 9.5h19M6 15h4", 0, 0 } };
static const MiraOp mira_cut_136_f0[] = { { 1, 1.0f, 0.0f, "M2.5 9.5h19M6 15h4", 0, 0 } };
static const MiraOp mira_ops_f_136[] = { { 0, 0.0f, 0.0f, "M5 5h14a2.5 2.5 0 0 1 2.5 2.5v9a2.5 2.5 0 0 1 -2.5 2.5h-14a2.5 2.5 0 0 1 -2.5 -2.5v-9a2.5 2.5 0 0 1 2.5 -2.5z", mira_cut_136_f0, 1 } };
static const char *const mira_tags_137[] = { "billet", "argent", "esp\303\250ces", "cash" };
static const MiraOp mira_ops_o_137[] = { { 1, 1.0f, 0.0f, "M4.5 6h15a2 2 0 0 1 2 2v8a2 2 0 0 1 -2 2h-15a2 2 0 0 1 -2 -2v-8a2 2 0 0 1 2 -2z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 12a3 3 0 1 0 6 0a3 3 0 1 0 -6 0zM6 12h1M17 12h1", 0, 0 } };
static const MiraOp mira_cut_137_f0[] = { { 1, 1.0f, 0.0f, "M9 12a3 3 0 1 0 6 0a3 3 0 1 0 -6 0zM6 12h1M17 12h1", 0, 0 } };
static const MiraOp mira_ops_f_137[] = { { 0, 0.0f, 0.0f, "M4.5 6h15a2 2 0 0 1 2 2v8a2 2 0 0 1 -2 2h-15a2 2 0 0 1 -2 -2v-8a2 2 0 0 1 2 -2z", mira_cut_137_f0, 1 } };
static const char *const mira_tags_138[] = { "panier", "acheter", "boutique", "commande" };
static const MiraOp mira_ops_o_138[] = { { 0, 0.0f, 0.0f, "M8.1 19.5a1.4 1.4 0 1 0 2.8 0a1.4 1.4 0 1 0 -2.8 0zM15.6 19.5a1.4 1.4 0 1 0 2.8 0a1.4 1.4 0 1 0 -2.8 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M3.5 4.5h2l2.4 10.5h10.6l2-7.5H7", 0, 0 } };
static const MiraOp mira_ops_f_138[] = { { 0, 0.0f, 0.0f, "M8.1 19.5a1.4 1.4 0 1 0 2.8 0a1.4 1.4 0 1 0 -2.8 0zM15.6 19.5a1.4 1.4 0 1 0 2.8 0a1.4 1.4 0 1 0 -2.8 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M3.5 4.5h2l2.4 10.5h10.6l2-7.5H7", 0, 0 } };
static const char *const mira_tags_139[] = { "sac", "achats", "boutique", "shopping" };
static const MiraOp mira_ops_o_139[] = { { 1, 1.0f, 0.0f, "M6 8.5h12l1 11a1.5 1.5 0 0 1-1.5 1.5h-11A1.5 1.5 0 0 1 5 19.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 10.5V7a3 3 0 0 1 6 0v3.5", 0, 0 } };
static const MiraOp mira_ops_f_139[] = { { 0, 0.0f, 0.0f, "M6 8.5h12l1 11a1.5 1.5 0 0 1-1.5 1.5h-11A1.5 1.5 0 0 1 5 19.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 10.5V7a3 3 0 0 1 6 0v3.5", 0, 0 } };
static const char *const mira_tags_140[] = { "\303\251tiquette", "label", "cat\303\251gorie", "prix" };
static const MiraOp mira_ops_o_140[] = { { 1, 1.0f, 0.0f, "M3.5 5A1.5 1.5 0 0 1 5 3.5h6.4a1.5 1.5 0 0 1 1.06.44l8.1 8.1a1.5 1.5 0 0 1 0 2.12l-6.4 6.4a1.5 1.5 0 0 1-2.12 0l-8.1-8.1A1.5 1.5 0 0 1 3.5 11.4z", 0, 0 }, { 1, 1.0f, 0.0f, "M8 8h.01", 0, 0 } };
static const MiraOp mira_cut_140_f0[] = { { 1, 1.0f, 0.0f, "M8 8h.01", 0, 0 } };
static const MiraOp mira_ops_f_140[] = { { 0, 0.0f, 0.0f, "M3.5 5A1.5 1.5 0 0 1 5 3.5h6.4a1.5 1.5 0 0 1 1.06.44l8.1 8.1a1.5 1.5 0 0 1 0 2.12l-6.4 6.4a1.5 1.5 0 0 1-2.12 0l-8.1-8.1A1.5 1.5 0 0 1 3.5 11.4z", mira_cut_140_f0, 1 } };
static const char *const mira_tags_141[] = { "pourcentage", "remise", "promotion", "taux" };
static const MiraOp mira_ops_o_141[] = { { 1, 1.0f, 0.0f, "M5 7.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM14 16.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M18 6 6 18", 0, 0 } };
static const MiraOp mira_ops_f_141[] = { { 0, 0.0f, 0.0f, "M5 7.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM14 16.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M18 6 6 18", 0, 0 } };
static const char *const mira_tags_142[] = { "cadeau", "offrir", "r\303\251compense", "bonus" };
static const MiraOp mira_ops_o_142[] = { { 1, 1.0f, 0.0f, "M3.5 11h17v8a1.5 1.5 0 0 1-1.5 1.5H5A1.5 1.5 0 0 1 3.5 19z", 0, 0 }, { 1, 1.0f, 0.0f, "M3 7.5h18V11H3zM12 7.5v13M12 7.5C10.5 4.5 7 4 7 6s3.5 1.5 5 1.5S17 8 17 6s-3.5-1.5-5 1.5", 0, 0 } };
static const MiraOp mira_ops_f_142[] = { { 0, 0.0f, 0.0f, "M3.5 11h17v8a1.5 1.5 0 0 1-1.5 1.5H5A1.5 1.5 0 0 1 3.5 19z", 0, 0 }, { 1, 1.0f, 0.0f, "M3 7.5h18V11H3zM12 7.5v13M12 7.5C10.5 4.5 7 4 7 6s3.5 1.5 5 1.5S17 8 17 6s-3.5-1.5-5 1.5", 0, 0 } };
static const char *const mira_tags_143[] = { "re\303\247u", "ticket", "facture", "note" };
static const MiraOp mira_ops_o_143[] = { { 1, 1.0f, 0.0f, "M5.5 3.5h13V20.5l-2.17-1.5-2.16 1.5L12 19l-2.17 1.5-2.16-1.5L5.5 20.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 8.5h6M9 12h6M9 15.5h3", 0, 0 } };
static const MiraOp mira_cut_143_f0[] = { { 1, 1.0f, 0.0f, "M9 8.5h6M9 12h6M9 15.5h3", 0, 0 } };
static const MiraOp mira_ops_f_143[] = { { 0, 0.0f, 0.0f, "M5.5 3.5h13V20.5l-2.17-1.5-2.16 1.5L12 19l-2.17 1.5-2.16-1.5L5.5 20.5z", mira_cut_143_f0, 1 } };
static const char *const mira_tags_144[] = { "portefeuille", "carte", "pass", "billets" };
static const MiraOp mira_ops_o_144[] = { { 1, 1.0f, 0.0f, "M3.5 7A2.5 2.5 0 0 1 6 4.5h12A2.5 2.5 0 0 1 20.5 7v10a2.5 2.5 0 0 1-2.5 2.5H6A2.5 2.5 0 0 1 3.5 17z", 0, 0 }, { 1, 1.0f, 0.0f, "M3.5 10h17M15 14h2.5", 0, 0 } };
static const MiraOp mira_cut_144_f0[] = { { 1, 1.0f, 0.0f, "M3.5 10h17M15 14h2.5", 0, 0 } };
static const MiraOp mira_ops_f_144[] = { { 0, 0.0f, 0.0f, "M3.5 7A2.5 2.5 0 0 1 6 4.5h12A2.5 2.5 0 0 1 20.5 7v10a2.5 2.5 0 0 1-2.5 2.5H6A2.5 2.5 0 0 1 3.5 17z", mira_cut_144_f0, 1 } };
static const char *const mira_tags_145[] = { "boutique", "magasin", "commerce", "vitrine" };
static const MiraOp mira_ops_o_145[] = { { 1, 1.0f, 0.0f, "M4 10v9a1.5 1.5 0 0 0 1.5 1.5h13A1.5 1.5 0 0 0 20 19v-9", 0, 0 }, { 1, 1.0f, 0.0f, "M10 20.5v-6h4v6", 0, 0 }, { 1, 1.0f, 0.0f, "M3 6.5 5 3.5h14l2 3M3 6.5v1.5a2.25 2.25 0 0 0 4.5 0 2.25 2.25 0 0 0 4.5 0 2.25 2.25 0 0 0 4.5 0 2.25 2.25 0 0 0 4.5 0V6.5", 0, 0 } };
static const MiraOp mira_cut_145_f0[] = { { 1, 1.0f, 0.0f, "M10 20.5v-6h4v6", 0, 0 } };
static const MiraOp mira_ops_f_145[] = { { 0, 0.0f, 0.0f, "M4 10v9a1.5 1.5 0 0 0 1.5 1.5h13A1.5 1.5 0 0 0 20 19v-9", mira_cut_145_f0, 1 }, { 1, 1.0f, 0.0f, "M3 6.5 5 3.5h14l2 3M3 6.5v1.5a2.25 2.25 0 0 0 4.5 0 2.25 2.25 0 0 0 4.5 0 2.25 2.25 0 0 0 4.5 0 2.25 2.25 0 0 0 4.5 0V6.5", 0, 0 } };
static const char *const mira_tags_146[] = { "dollar", "prix", "monnaie", "co\303\273t" };
static const MiraOp mira_ops_o_146[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 6v12M14.5 9.25A2.25 2.25 0 0 0 12.25 7.5h-.5a2.25 2.25 0 0 0 0 4.5h.5a2.25 2.25 0 0 1 0 4.5h-.5A2.25 2.25 0 0 1 9.5 14.75", 0, 0 } };
static const MiraOp mira_cut_146_f0[] = { { 1, 1.0f, 0.0f, "M12 6v12M14.5 9.25A2.25 2.25 0 0 0 12.25 7.5h-.5a2.25 2.25 0 0 0 0 4.5h.5a2.25 2.25 0 0 1 0 4.5h-.5A2.25 2.25 0 0 1 9.5 14.75", 0, 0 } };
static const MiraOp mira_ops_f_146[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_146_f0, 1 } };
static const char *const mira_tags_147[] = { "euro", "prix", "monnaie", "co\303\273t" };
static const MiraOp mira_ops_o_147[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M15.5 8.7a4.6 4.6 0 1 0 0 6.6M6.5 10.75h7M6.5 13.25h7", 0, 0 } };
static const MiraOp mira_cut_147_f0[] = { { 1, 1.0f, 0.0f, "M15.5 8.7a4.6 4.6 0 1 0 0 6.6M6.5 10.75h7M6.5 13.25h7", 0, 0 } };
static const MiraOp mira_ops_f_147[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_147_f0, 1 } };
static const char *const mira_tags_148[] = { "bitcoin", "crypto", "cryptomonnaie", "BTC" };
static const MiraOp mira_ops_o_148[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M9.5 7.5v9M9.5 7.5h3.5a2 2 0 0 1 0 4H9.5M9.5 11.5h4a2.25 2.25 0 0 1 0 4.5H9.5M11 6v1.5M13 6v1.5M11 16.5V18M13 16.5V18", 0, 0 } };
static const MiraOp mira_cut_148_f0[] = { { 1, 1.0f, 0.0f, "M9.5 7.5v9M9.5 7.5h3.5a2 2 0 0 1 0 4H9.5M9.5 11.5h4a2.25 2.25 0 0 1 0 4.5H9.5M11 6v1.5M13 6v1.5M11 16.5V18M13 16.5V18", 0, 0 } };
static const MiraOp mira_ops_f_148[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_148_f0, 1 } };
static const char *const mira_tags_149[] = { "bourse", "trading", "chandeliers", "cours", "march\303\251" };
static const MiraOp mira_ops_o_149[] = { { 1, 1.0f, 0.0f, "M5.5 8h2a0.5 0.5 0 0 1 0.5 0.5v5a0.5 0.5 0 0 1 -0.5 0.5h-2a0.5 0.5 0 0 1 -0.5 -0.5v-5a0.5 0.5 0 0 1 0.5 -0.5zM11 5h2a0.5 0.5 0 0 1 0.5 0.5v6a0.5 0.5 0 0 1 -0.5 0.5h-2a0.5 0.5 0 0 1 -0.5 -0.5v-6a0.5 0.5 0 0 1 0.5 -0.5zM16.5 10h2a0.5 0.5 0 0 1 0.5 0.5v6a0.5 0.5 0 0 1 -0.5 0.5h-2a0.5 0.5 0 0 1 -0.5 -0.5v-6a0.5 0.5 0 0 1 0.5 -0.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M6.5 5v3M6.5 14v4M12 3v2M12 12v3M17.5 7v3M17.5 17v3", 0, 0 } };
static const MiraOp mira_ops_f_149[] = { { 0, 0.0f, 0.0f, "M5.5 8h2a0.5 0.5 0 0 1 0.5 0.5v5a0.5 0.5 0 0 1 -0.5 0.5h-2a0.5 0.5 0 0 1 -0.5 -0.5v-5a0.5 0.5 0 0 1 0.5 -0.5zM11 5h2a0.5 0.5 0 0 1 0.5 0.5v6a0.5 0.5 0 0 1 -0.5 0.5h-2a0.5 0.5 0 0 1 -0.5 -0.5v-6a0.5 0.5 0 0 1 0.5 -0.5zM16.5 10h2a0.5 0.5 0 0 1 0.5 0.5v6a0.5 0.5 0 0 1 -0.5 0.5h-2a0.5 0.5 0 0 1 -0.5 -0.5v-6a0.5 0.5 0 0 1 0.5 -0.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M6.5 5v3M6.5 14v4M12 3v2M12 12v3M17.5 7v3M17.5 17v3", 0, 0 } };
static const char *const mira_tags_150[] = { "baisse", "perte", "tendance", "cours" };
static const MiraOp mira_ops_o_150[] = { { 1, 1.0f, 0.0f, "M4 4v16h16M7 8l4 5 3-3 5 7M15.5 17H19v-3.5", 0, 0 } };
static const MiraOp mira_ops_f_150[] = { { 1, 1.0f, 0.0f, "M4 4v16h16M7 8l4 5 3-3 5 7M15.5 17H19v-3.5", 0, 0 } };
static const char *const mira_tags_151[] = { "t\303\251l\303\251phone", "smartphone", "mobile", "appareil" };
static const MiraOp mira_ops_o_151[] = { { 1, 1.0f, 0.0f, "M8.5 2.5h7a2.5 2.5 0 0 1 2.5 2.5v14a2.5 2.5 0 0 1 -2.5 2.5h-7a2.5 2.5 0 0 1 -2.5 -2.5v-14a2.5 2.5 0 0 1 2.5 -2.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M10 5.5h4", 0, 0 } };
static const MiraOp mira_cut_151_f0[] = { { 1, 1.0f, 0.0f, "M10 5.5h4", 0, 0 } };
static const MiraOp mira_ops_f_151[] = { { 0, 0.0f, 0.0f, "M8.5 2.5h7a2.5 2.5 0 0 1 2.5 2.5v14a2.5 2.5 0 0 1 -2.5 2.5h-7a2.5 2.5 0 0 1 -2.5 -2.5v-14a2.5 2.5 0 0 1 2.5 -2.5z", mira_cut_151_f0, 1 } };
static const char *const mira_tags_152[] = { "tablette", "appareil" };
static const MiraOp mira_ops_o_152[] = { { 1, 1.0f, 0.0f, "M6 3h12a2.5 2.5 0 0 1 2.5 2.5v13a2.5 2.5 0 0 1 -2.5 2.5h-12a2.5 2.5 0 0 1 -2.5 -2.5v-13a2.5 2.5 0 0 1 2.5 -2.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M11 18h2", 0, 0 } };
static const MiraOp mira_cut_152_f0[] = { { 1, 1.0f, 0.0f, "M11 18h2", 0, 0 } };
static const MiraOp mira_ops_f_152[] = { { 0, 0.0f, 0.0f, "M6 3h12a2.5 2.5 0 0 1 2.5 2.5v13a2.5 2.5 0 0 1 -2.5 2.5h-12a2.5 2.5 0 0 1 -2.5 -2.5v-13a2.5 2.5 0 0 1 2.5 -2.5z", mira_cut_152_f0, 1 } };
static const char *const mira_tags_153[] = { "ordinateur portable", "mac", "notebook" };
static const MiraOp mira_ops_o_153[] = { { 1, 1.0f, 0.0f, "M5.5 5h13a1.5 1.5 0 0 1 1.5 1.5v8a1.5 1.5 0 0 1 -1.5 1.5h-13a1.5 1.5 0 0 1 -1.5 -1.5v-8a1.5 1.5 0 0 1 1.5 -1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M2 19h20", 0, 0 } };
static const MiraOp mira_ops_f_153[] = { { 0, 0.0f, 0.0f, "M5.5 5h13a1.5 1.5 0 0 1 1.5 1.5v8a1.5 1.5 0 0 1 -1.5 1.5h-13a1.5 1.5 0 0 1 -1.5 -1.5v-8a1.5 1.5 0 0 1 1.5 -1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M2 19h20", 0, 0 } };
static const char *const mira_tags_154[] = { "ordinateur", "\303\251cran", "bureau", "moniteur" };
static const MiraOp mira_ops_o_154[] = { { 1, 1.0f, 0.0f, "M5 4h14a2 2 0 0 1 2 2v8a2 2 0 0 1 -2 2h-14a2 2 0 0 1 -2 -2v-8a2 2 0 0 1 2 -2z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 16v4M8 20h8", 0, 0 } };
static const MiraOp mira_ops_f_154[] = { { 0, 0.0f, 0.0f, "M5 4h14a2 2 0 0 1 2 2v8a2 2 0 0 1 -2 2h-14a2 2 0 0 1 -2 -2v-8a2 2 0 0 1 2 -2z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 16v4M8 20h8", 0, 0 } };
static const char *const mira_tags_155[] = { "montre", "montre connect\303\251e", "poignet" };
static const MiraOp mira_ops_o_155[] = { { 1, 1.0f, 0.0f, "M10 6h4a3 3 0 0 1 3 3v6a3 3 0 0 1 -3 3h-4a3 3 0 0 1 -3 -3v-6a3 3 0 0 1 3 -3z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 6V3.5h6V6M9 18v2.5h6V18", 0, 0 } };
static const MiraOp mira_ops_f_155[] = { { 0, 0.0f, 0.0f, "M10 6h4a3 3 0 0 1 3 3v6a3 3 0 0 1 -3 3h-4a3 3 0 0 1 -3 -3v-6a3 3 0 0 1 3 -3z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 6V3.5h6V6M9 18v2.5h6V18", 0, 0 } };
static const char *const mira_tags_156[] = { "clavier", "saisie", "touches" };
static const MiraOp mira_ops_o_156[] = { { 1, 1.0f, 0.0f, "M4.5 6.5h15a2 2 0 0 1 2 2v7a2 2 0 0 1 -2 2h-15a2 2 0 0 1 -2 -2v-7a2 2 0 0 1 2 -2z", 0, 0 }, { 1, 1.0f, 0.0f, "M6 9.5h1M9.5 9.5h1M13 9.5h1M16.5 9.5h1M6 12.5h1M9.5 12.5h1M13 12.5h1M16.5 12.5h1M8 15.5h8", 0, 0 } };
static const MiraOp mira_cut_156_f0[] = { { 1, 1.0f, 0.0f, "M6 9.5h1M9.5 9.5h1M13 9.5h1M16.5 9.5h1M6 12.5h1M9.5 12.5h1M13 12.5h1M16.5 12.5h1M8 15.5h8", 0, 0 } };
static const MiraOp mira_ops_f_156[] = { { 0, 0.0f, 0.0f, "M4.5 6.5h15a2 2 0 0 1 2 2v7a2 2 0 0 1 -2 2h-15a2 2 0 0 1 -2 -2v-7a2 2 0 0 1 2 -2z", mira_cut_156_f0, 1 } };
static const char *const mira_tags_157[] = { "souris", "pointeur", "clic" };
static const MiraOp mira_ops_o_157[] = { { 1, 1.0f, 0.0f, "M7 9a5 5 0 0 1 10 0v6a5 5 0 0 1-10 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 4v4.5", 0, 0 } };
static const MiraOp mira_cut_157_f0[] = { { 1, 1.0f, 0.0f, "M12 4v4.5", 0, 0 } };
static const MiraOp mira_ops_f_157[] = { { 0, 0.0f, 0.0f, "M7 9a5 5 0 0 1 10 0v6a5 5 0 0 1-10 0z", mira_cut_157_f0, 1 } };
static const char *const mira_tags_158[] = { "batterie pleine", "\303\251nergie", "charge" };
static const MiraOp mira_ops_o_158[] = { { 1, 1.0f, 0.0f, "M4.5 7.5h13a2 2 0 0 1 2 2v5a2 2 0 0 1 -2 2h-13a2 2 0 0 1 -2 -2v-5a2 2 0 0 1 2 -2z", 0, 0 }, { 0, 0.0f, 0.0f, "M5.5 9.5h11a1 1 0 0 1 1 1v3a1 1 0 0 1 -1 1h-11a1 1 0 0 1 -1 -1v-3a1 1 0 0 1 1 -1z", 0, 0 }, { 1, 1.0f, 0.0f, "M21.5 10.5v3", 0, 0 } };
static const MiraOp mira_ops_f_158[] = { { 0, 0.0f, 0.0f, "M4.5 7.5h13a2 2 0 0 1 2 2v5a2 2 0 0 1 -2 2h-13a2 2 0 0 1 -2 -2v-5a2 2 0 0 1 2 -2z", 0, 0 }, { 0, 0.0f, 0.0f, "M5.5 9.5h11a1 1 0 0 1 1 1v3a1 1 0 0 1 -1 1h-11a1 1 0 0 1 -1 -1v-3a1 1 0 0 1 1 -1z", 0, 0 }, { 1, 1.0f, 0.0f, "M21.5 10.5v3", 0, 0 } };
static const char *const mira_tags_159[] = { "batterie moiti\303\251", "\303\251nergie" };
static const MiraOp mira_ops_o_159[] = { { 1, 1.0f, 0.0f, "M4.5 7.5h13a2 2 0 0 1 2 2v5a2 2 0 0 1 -2 2h-13a2 2 0 0 1 -2 -2v-5a2 2 0 0 1 2 -2z", 0, 0 }, { 0, 0.0f, 0.0f, "M5.5 9.5h4.5a1 1 0 0 1 1 1v3a1 1 0 0 1 -1 1h-4.5a1 1 0 0 1 -1 -1v-3a1 1 0 0 1 1 -1z", 0, 0 }, { 1, 1.0f, 0.0f, "M21.5 10.5v3", 0, 0 } };
static const MiraOp mira_ops_f_159[] = { { 0, 0.0f, 0.0f, "M4.5 7.5h13a2 2 0 0 1 2 2v5a2 2 0 0 1 -2 2h-13a2 2 0 0 1 -2 -2v-5a2 2 0 0 1 2 -2z", 0, 0 }, { 0, 0.0f, 0.0f, "M5.5 9.5h4.5a1 1 0 0 1 1 1v3a1 1 0 0 1 -1 1h-4.5a1 1 0 0 1 -1 -1v-3a1 1 0 0 1 1 -1z", 0, 0 }, { 1, 1.0f, 0.0f, "M21.5 10.5v3", 0, 0 } };
static const char *const mira_tags_160[] = { "batterie faible", "\303\251nergie", "alerte" };
static const MiraOp mira_ops_o_160[] = { { 1, 1.0f, 0.0f, "M4.5 7.5h13a2 2 0 0 1 2 2v5a2 2 0 0 1 -2 2h-13a2 2 0 0 1 -2 -2v-5a2 2 0 0 1 2 -2z", 0, 0 }, { 0, 0.0f, 0.0f, "M5.5 9.5h1.5a1 1 0 0 1 1 1v3a1 1 0 0 1 -1 1h-1.5a1 1 0 0 1 -1 -1v-3a1 1 0 0 1 1 -1z", 0, 0 }, { 1, 1.0f, 0.0f, "M21.5 10.5v3", 0, 0 } };
static const MiraOp mira_ops_f_160[] = { { 0, 0.0f, 0.0f, "M4.5 7.5h13a2 2 0 0 1 2 2v5a2 2 0 0 1 -2 2h-13a2 2 0 0 1 -2 -2v-5a2 2 0 0 1 2 -2z", 0, 0 }, { 0, 0.0f, 0.0f, "M5.5 9.5h1.5a1 1 0 0 1 1 1v3a1 1 0 0 1 -1 1h-1.5a1 1 0 0 1 -1 -1v-3a1 1 0 0 1 1 -1z", 0, 0 }, { 1, 1.0f, 0.0f, "M21.5 10.5v3", 0, 0 } };
static const char *const mira_tags_161[] = { "en charge", "batterie", "\303\251clair", "secteur" };
static const MiraOp mira_cut_161_o1[] = { { 0, 0.0f, 0.0f, "M12.8 9.7 9.8 12.6h2.3l-.8 1.8 3-3.1h-2.3z", 0, 0 } };
static const MiraOp mira_ops_o_161[] = { { 1, 1.0f, 0.0f, "M4.5 7.5h13a2 2 0 0 1 2 2v5a2 2 0 0 1 -2 2h-13a2 2 0 0 1 -2 -2v-5a2 2 0 0 1 2 -2z", 0, 0 }, { 0, 0.0f, 0.0f, "M5.5 9.5h11a1 1 0 0 1 1 1v3a1 1 0 0 1 -1 1h-11a1 1 0 0 1 -1 -1v-3a1 1 0 0 1 1 -1z", mira_cut_161_o1, 1 }, { 1, 1.0f, 0.0f, "M21.5 10.5v3", 0, 0 } };
static const MiraOp mira_cut_161_f0[] = { { 0, 0.0f, 0.0f, "M12.8 9.7 9.8 12.6h2.3l-.8 1.8 3-3.1h-2.3z", 0, 0 } };
static const MiraOp mira_cut_161_f1[] = { { 0, 0.0f, 0.0f, "M12.8 9.7 9.8 12.6h2.3l-.8 1.8 3-3.1h-2.3z", 0, 0 } };
static const MiraOp mira_ops_f_161[] = { { 0, 0.0f, 0.0f, "M4.5 7.5h13a2 2 0 0 1 2 2v5a2 2 0 0 1 -2 2h-13a2 2 0 0 1 -2 -2v-5a2 2 0 0 1 2 -2z", mira_cut_161_f0, 1 }, { 0, 0.0f, 0.0f, "M5.5 9.5h11a1 1 0 0 1 1 1v3a1 1 0 0 1 -1 1h-11a1 1 0 0 1 -1 -1v-3a1 1 0 0 1 1 -1z", mira_cut_161_f1, 1 }, { 1, 1.0f, 0.0f, "M21.5 10.5v3", 0, 0 } };
static const char *const mira_tags_162[] = { "\303\251clair", "\303\251nergie", "flash", "rapide", "charge" };
static const MiraOp mira_ops_o_162[] = { { 1, 1.0f, 0.0f, "M13.5 2.5 5.5 13.5H11L10 21.5l8.5-11.5H13z", 0, 0 } };
static const MiraOp mira_ops_f_162[] = { { 0, 0.0f, 0.0f, "M13.5 2.5 5.5 13.5H11L10 21.5l8.5-11.5H13z", 0, 0 }, { 1, 1.0f, -1.5f, "M13.5 2.5 5.5 13.5H11L10 21.5l8.5-11.5H13z", 0, 0 } };
static const char *const mira_tags_163[] = { "marche/arr\303\252t", "allumer", "\303\251teindre", "alimentation" };
static const MiraOp mira_ops_o_163[] = { { 1, 1.0f, 0.0f, "M12 3.5V12M7.05 7.05a7 7 0 1 0 9.9 0", 0, 0 } };
static const MiraOp mira_ops_f_163[] = { { 1, 1.0f, 0.0f, "M12 3.5V12M7.05 7.05a7 7 0 1 0 9.9 0", 0, 0 } };
static const char *const mira_tags_164[] = { "r\303\251seau", "connexion", "sans fil", "signal" };
static const MiraOp mira_ops_o_164[] = { { 1, 1.0f, 0.0f, "M2.5 9a14 14 0 0 1 19 0M5.5 12.5a9.5 9.5 0 0 1 13 0M8.5 16a5 5 0 0 1 7 0M12 19.5v.01", 0, 0 } };
static const MiraOp mira_ops_f_164[] = { { 1, 1.0f, 0.0f, "M2.5 9a14 14 0 0 1 19 0M5.5 12.5a9.5 9.5 0 0 1 13 0M8.5 16a5 5 0 0 1 7 0M12 19.5v.01", 0, 0 } };
static const char *const mira_tags_165[] = { "hors ligne", "pas de r\303\251seau", "d\303\251connect\303\251" };
static const MiraOp mira_ops_o_165[] = { { 1, 1.0f, 0.0f, "M2.5 9a14 14 0 0 1 19 0M5.5 12.5a9.5 9.5 0 0 1 13 0M8.5 16a5 5 0 0 1 7 0M12 19.5v.01M4 4l16 16", 0, 0 } };
static const MiraOp mira_ops_f_165[] = { { 1, 1.0f, 0.0f, "M2.5 9a14 14 0 0 1 19 0M5.5 12.5a9.5 9.5 0 0 1 13 0M8.5 16a5 5 0 0 1 7 0M12 19.5v.01M4 4l16 16", 0, 0 } };
static const char *const mira_tags_166[] = { "sans fil", "appairage", "casque", "connexion" };
static const MiraOp mira_ops_o_166[] = { { 1, 1.0f, 0.0f, "M7 7.5l10 8.5-5 4V4l5 4-10 8.5", 0, 0 } };
static const MiraOp mira_ops_f_166[] = { { 1, 1.0f, 0.0f, "M7 7.5l10 8.5-5 4V4l5 4-10 8.5", 0, 0 } };
static const char *const mira_tags_167[] = { "r\303\251seau mobile", "signal", "barres", "r\303\251ception" };
static const MiraOp mira_ops_o_167[] = { { 1, 1.0f, 0.0f, "M3.75 15h1.5a0.75 0.75 0 0 1 0.75 0.75v3.5a0.75 0.75 0 0 1 -0.75 0.75h-1.5a0.75 0.75 0 0 1 -0.75 -0.75v-3.5a0.75 0.75 0 0 1 0.75 -0.75zM8.75 12h1.5a0.75 0.75 0 0 1 0.75 0.75v6.5a0.75 0.75 0 0 1 -0.75 0.75h-1.5a0.75 0.75 0 0 1 -0.75 -0.75v-6.5a0.75 0.75 0 0 1 0.75 -0.75zM13.75 8.5h1.5a0.75 0.75 0 0 1 0.75 0.75v10a0.75 0.75 0 0 1 -0.75 0.75h-1.5a0.75 0.75 0 0 1 -0.75 -0.75v-10a0.75 0.75 0 0 1 0.75 -0.75zM18.75 4.5h1.5a0.75 0.75 0 0 1 0.75 0.75v14a0.75 0.75 0 0 1 -0.75 0.75h-1.5a0.75 0.75 0 0 1 -0.75 -0.75v-14a0.75 0.75 0 0 1 0.75 -0.75z", 0, 0 } };
static const MiraOp mira_ops_f_167[] = { { 0, 0.0f, 0.0f, "M3.75 15h1.5a0.75 0.75 0 0 1 0.75 0.75v3.5a0.75 0.75 0 0 1 -0.75 0.75h-1.5a0.75 0.75 0 0 1 -0.75 -0.75v-3.5a0.75 0.75 0 0 1 0.75 -0.75zM8.75 12h1.5a0.75 0.75 0 0 1 0.75 0.75v6.5a0.75 0.75 0 0 1 -0.75 0.75h-1.5a0.75 0.75 0 0 1 -0.75 -0.75v-6.5a0.75 0.75 0 0 1 0.75 -0.75zM13.75 8.5h1.5a0.75 0.75 0 0 1 0.75 0.75v10a0.75 0.75 0 0 1 -0.75 0.75h-1.5a0.75 0.75 0 0 1 -0.75 -0.75v-10a0.75 0.75 0 0 1 0.75 -0.75zM18.75 4.5h1.5a0.75 0.75 0 0 1 0.75 0.75v14a0.75 0.75 0 0 1 -0.75 0.75h-1.5a0.75 0.75 0 0 1 -0.75 -0.75v-14a0.75 0.75 0 0 1 0.75 -0.75z", 0, 0 } };
static const char *const mira_tags_168[] = { "r\303\251seau", "EDGE", "2G", "donn\303\251es mobiles" };
static const MiraOp mira_ops_o_168[] = { { 1, 1.0f, 0.0f, "M16 6H8V18H16M8 12H14", 0, 0 } };
static const MiraOp mira_ops_f_168[] = { { 1, 1.0f, 0.0f, "M16 6H8V18H16M8 12H14", 0, 0 } };
static const char *const mira_tags_169[] = { "r\303\251seau", "2G", "donn\303\251es mobiles", "GPRS" };
static const MiraOp mira_ops_o_169[] = { { 1, 1.0f, 0.0f, "M4.98 9.6A2.72 2.72 0 1 1 10.1 11.2L4.98 16.8H10.9M19.54 9.44A3.36 3.36 0 0 0 16.34 7.2A3.2 3.2 0 0 0 13.14 10.4V13.6A3.2 3.2 0 0 0 16.34 16.8A3.2 3.2 0 0 0 19.54 13.6V12.32H16.66", 0, 0 } };
static const MiraOp mira_ops_f_169[] = { { 1, 1.0f, 0.0f, "M4.98 9.6A2.72 2.72 0 1 1 10.1 11.2L4.98 16.8H10.9M19.54 9.44A3.36 3.36 0 0 0 16.34 7.2A3.2 3.2 0 0 0 13.14 10.4V13.6A3.2 3.2 0 0 0 16.34 16.8A3.2 3.2 0 0 0 19.54 13.6V12.32H16.66", 0, 0 } };
static const char *const mira_tags_170[] = { "r\303\251seau", "3G", "donn\303\251es mobiles", "UMTS" };
static const MiraOp mira_ops_o_170[] = { { 1, 1.0f, 0.0f, "M5.3 8.48A2.56 2.56 0 1 1 8.66 12H7.38M8.66 12A2.56 2.56 0 1 1 5.3 15.52M19.54 9.44A3.36 3.36 0 0 0 16.34 7.2A3.2 3.2 0 0 0 13.14 10.4V13.6A3.2 3.2 0 0 0 16.34 16.8A3.2 3.2 0 0 0 19.54 13.6V12.32H16.66", 0, 0 } };
static const MiraOp mira_ops_f_170[] = { { 1, 1.0f, 0.0f, "M5.3 8.48A2.56 2.56 0 1 1 8.66 12H7.38M8.66 12A2.56 2.56 0 1 1 5.3 15.52M19.54 9.44A3.36 3.36 0 0 0 16.34 7.2A3.2 3.2 0 0 0 13.14 10.4V13.6A3.2 3.2 0 0 0 16.34 16.8A3.2 3.2 0 0 0 19.54 13.6V12.32H16.66", 0, 0 } };
static const char *const mira_tags_171[] = { "r\303\251seau", "4G", "donn\303\251es mobiles" };
static const MiraOp mira_ops_o_171[] = { { 1, 1.0f, 0.0f, "M9.62 16.8V7.2L4.5 13.92H10.9M19.54 9.44A3.36 3.36 0 0 0 16.34 7.2A3.2 3.2 0 0 0 13.14 10.4V13.6A3.2 3.2 0 0 0 16.34 16.8A3.2 3.2 0 0 0 19.54 13.6V12.32H16.66", 0, 0 } };
static const MiraOp mira_ops_f_171[] = { { 1, 1.0f, 0.0f, "M9.62 16.8V7.2L4.5 13.92H10.9M19.54 9.44A3.36 3.36 0 0 0 16.34 7.2A3.2 3.2 0 0 0 13.14 10.4V13.6A3.2 3.2 0 0 0 16.34 16.8A3.2 3.2 0 0 0 19.54 13.6V12.32H16.66", 0, 0 } };
static const char *const mira_tags_172[] = { "r\303\251seau", "5G", "donn\303\251es mobiles" };
static const MiraOp mira_ops_o_172[] = { { 1, 1.0f, 0.0f, "M10.26 7.2H5.78L5.3 11.68H7.86A2.56 2.56 0 1 1 5.3 15.36M19.54 9.44A3.36 3.36 0 0 0 16.34 7.2A3.2 3.2 0 0 0 13.14 10.4V13.6A3.2 3.2 0 0 0 16.34 16.8A3.2 3.2 0 0 0 19.54 13.6V12.32H16.66", 0, 0 } };
static const MiraOp mira_ops_f_172[] = { { 1, 1.0f, 0.0f, "M10.26 7.2H5.78L5.3 11.68H7.86A2.56 2.56 0 1 1 5.3 15.36M19.54 9.44A3.36 3.36 0 0 0 16.34 7.2A3.2 3.2 0 0 0 13.14 10.4V13.6A3.2 3.2 0 0 0 16.34 16.8A3.2 3.2 0 0 0 19.54 13.6V12.32H16.66", 0, 0 } };
static const char *const mira_tags_173[] = { "r\303\251seau", "LTE", "4G", "donn\303\251es mobiles" };
static const MiraOp mira_ops_o_173[] = { { 1, 1.0f, 0.0f, "M3.1 8.4V15.6H7.9M9.58 8.4H14.38M11.98 8.4V15.6M20.86 8.4H16.06V15.6H20.86M16.06 12H19.66", 0, 0 } };
static const MiraOp mira_ops_f_173[] = { { 1, 1.0f, 0.0f, "M3.1 8.4V15.6H7.9M9.58 8.4H14.38M11.98 8.4V15.6M20.86 8.4H16.06V15.6H20.86M16.06 12H19.66", 0, 0 } };
static const char *const mira_tags_174[] = { "processeur", "puce", "calcul", "performances" };
static const MiraOp mira_ops_o_174[] = { { 1, 1.0f, 0.0f, "M8 6h8a2 2 0 0 1 2 2v8a2 2 0 0 1 -2 2h-8a2 2 0 0 1 -2 -2v-8a2 2 0 0 1 2 -2z", 0, 0 }, { 1, 1.0f, 0.0f, "M10.5 9.5h3a1 1 0 0 1 1 1v3a1 1 0 0 1 -1 1h-3a1 1 0 0 1 -1 -1v-3a1 1 0 0 1 1 -1z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 6V3M12 6V3M15 6V3M9 21v-3M12 21v-3M15 21v-3M6 9H3M6 12H3M6 15H3M21 9h-3M21 12h-3M21 15h-3", 0, 0 } };
static const MiraOp mira_cut_174_f0[] = { { 1, 1.0f, 0.0f, "M10.5 9.5h3a1 1 0 0 1 1 1v3a1 1 0 0 1 -1 1h-3a1 1 0 0 1 -1 -1v-3a1 1 0 0 1 1 -1z", 0, 0 } };
static const MiraOp mira_ops_f_174[] = { { 0, 0.0f, 0.0f, "M8 6h8a2 2 0 0 1 2 2v8a2 2 0 0 1 -2 2h-8a2 2 0 0 1 -2 -2v-8a2 2 0 0 1 2 -2z", mira_cut_174_f0, 1 }, { 1, 1.0f, 0.0f, "M9 6V3M12 6V3M15 6V3M9 21v-3M12 21v-3M15 21v-3M6 9H3M6 12H3M6 15H3M21 9h-3M21 12h-3M21 15h-3", 0, 0 } };
static const char *const mira_tags_175[] = { "m\303\251moire", "RAM", "composant" };
static const MiraOp mira_ops_o_175[] = { { 1, 1.0f, 0.0f, "M5.5 6h13a1.5 1.5 0 0 1 1.5 1.5v7a1.5 1.5 0 0 1 -1.5 1.5h-13a1.5 1.5 0 0 1 -1.5 -1.5v-7a1.5 1.5 0 0 1 1.5 -1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M8 9v4M12 9v4M16 9v4", 0, 0 }, { 1, 1.0f, 0.0f, "M6.5 16v3M10 16v3M14 16v3M17.5 16v3", 0, 0 } };
static const MiraOp mira_cut_175_f0[] = { { 1, 1.0f, 0.0f, "M8 9v4M12 9v4M16 9v4", 0, 0 } };
static const MiraOp mira_ops_f_175[] = { { 0, 0.0f, 0.0f, "M5.5 6h13a1.5 1.5 0 0 1 1.5 1.5v7a1.5 1.5 0 0 1 -1.5 1.5h-13a1.5 1.5 0 0 1 -1.5 -1.5v-7a1.5 1.5 0 0 1 1.5 -1.5z", mira_cut_175_f0, 1 }, { 1, 1.0f, 0.0f, "M6.5 16v3M10 16v3M14 16v3M17.5 16v3", 0, 0 } };
static const char *const mira_tags_176[] = { "carte SD", "stockage", "m\303\251moire" };
static const MiraOp mira_ops_o_176[] = { { 1, 1.0f, 0.0f, "M7 3.5h8l3 3V19a1.5 1.5 0 0 1-1.5 1.5h-9A1.5 1.5 0 0 1 6 19V4.5a1 1 0 0 1 1-1z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 6v3M12 6v3M15 6v3", 0, 0 } };
static const MiraOp mira_cut_176_f0[] = { { 1, 1.0f, 0.0f, "M9 6v3M12 6v3M15 6v3", 0, 0 } };
static const MiraOp mira_ops_f_176[] = { { 0, 0.0f, 0.0f, "M7 3.5h8l3 3V19a1.5 1.5 0 0 1-1.5 1.5h-9A1.5 1.5 0 0 1 6 19V4.5a1 1 0 0 1 1-1z", mira_cut_176_f0, 1 } };
static const char *const mira_tags_177[] = { "mode avion", "voyage", "vol" };
static const MiraOp mira_ops_o_177[] = { { 1, 1.0f, 0.0f, "M12 3c.8 0 1.5.7 1.5 1.5V9l7.5 4.5v2l-7.5-2.5v4l2 1.5V20l-3.5-1-3.5 1v-1.5l2-1.5v-4L3 15.5v-2L10.5 9V4.5C10.5 3.7 11.2 3 12 3z", 0, 0 } };
static const MiraOp mira_ops_f_177[] = { { 0, 0.0f, 0.0f, "M12 3c.8 0 1.5.7 1.5 1.5V9l7.5 4.5v2l-7.5-2.5v4l2 1.5V20l-3.5-1-3.5 1v-1.5l2-1.5v-4L3 15.5v-2L10.5 9V4.5C10.5 3.7 11.2 3 12 3z", 0, 0 }, { 1, 1.0f, -1.5f, "M12 3c.8 0 1.5.7 1.5 1.5V9l7.5 4.5v2l-7.5-2.5v4l2 1.5V20l-3.5-1-3.5 1v-1.5l2-1.5v-4L3 15.5v-2L10.5 9V4.5C10.5 3.7 11.2 3 12 3z", 0, 0 } };
static const char *const mira_tags_178[] = { "t\303\251l\303\251vision", "\303\251cran", "diffuser" };
static const MiraOp mira_ops_o_178[] = { { 1, 1.0f, 0.0f, "M5 5h14a2 2 0 0 1 2 2v8a2 2 0 0 1 -2 2h-14a2 2 0 0 1 -2 -2v-8a2 2 0 0 1 2 -2z", 0, 0 }, { 1, 1.0f, 0.0f, "M8 20.5h8", 0, 0 } };
static const MiraOp mira_ops_f_178[] = { { 0, 0.0f, 0.0f, "M5 5h14a2 2 0 0 1 2 2v8a2 2 0 0 1 -2 2h-14a2 2 0 0 1 -2 -2v-8a2 2 0 0 1 2 -2z", 0, 0 }, { 1, 1.0f, 0.0f, "M8 20.5h8", 0, 0 } };
static const char *const mira_tags_179[] = { "carte", "plan", "itin\303\251raire" };
static const MiraOp mira_ops_o_179[] = { { 1, 1.0f, 0.0f, "M3.5 6.5 9 4l6 2.5 5.5-2.5v13.5L15 20l-6-2.5-5.5 2.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 4v13.5M15 6.5V20", 0, 0 } };
static const MiraOp mira_cut_179_f0[] = { { 1, 1.0f, 0.0f, "M9 4v13.5M15 6.5V20", 0, 0 } };
static const MiraOp mira_ops_f_179[] = { { 0, 0.0f, 0.0f, "M3.5 6.5 9 4l6 2.5 5.5-2.5v13.5L15 20l-6-2.5-5.5 2.5z", mira_cut_179_f0, 1 } };
static const char *const mira_tags_180[] = { "\303\251pingle", "lieu", "position", "adresse" };
static const MiraOp mira_ops_o_180[] = { { 1, 1.0f, 0.0f, "M12 21.5s-6.5-6.5-6.5-11.5a6.5 6.5 0 0 1 13 0c0 5-6.5 11.5-6.5 11.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M9.5 10a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0z", 0, 0 } };
static const MiraOp mira_cut_180_f0[] = { { 1, 1.0f, 0.0f, "M9.5 10a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0z", 0, 0 } };
static const MiraOp mira_ops_f_180[] = { { 0, 0.0f, 0.0f, "M12 21.5s-6.5-6.5-6.5-11.5a6.5 6.5 0 0 1 13 0c0 5-6.5 11.5-6.5 11.5z", mira_cut_180_f0, 1 } };
static const char *const mira_tags_181[] = { "lieu", "position actuelle", "destination" };
static const MiraOp mira_ops_o_181[] = { { 1, 1.0f, 0.0f, "M12 17s-5-5-5-9a5 5 0 0 1 10 0c0 4-5 9-5 9z", 0, 0 }, { 1, 1.0f, 0.0f, "M10 8a2 2 0 1 0 4 0a2 2 0 1 0 -4 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M6.5 17.5C5 18.2 4 19.1 4 20c0 1.7 3.6 2.5 8 2.5s8-.8 8-2.5c0-.9-1-1.8-2.5-2.5", 0, 0 } };
static const MiraOp mira_cut_181_f0[] = { { 1, 1.0f, 0.0f, "M10 8a2 2 0 1 0 4 0a2 2 0 1 0 -4 0z", 0, 0 } };
static const MiraOp mira_ops_f_181[] = { { 0, 0.0f, 0.0f, "M12 17s-5-5-5-9a5 5 0 0 1 10 0c0 4-5 9-5 9z", mira_cut_181_f0, 1 }, { 1, 1.0f, 0.0f, "M6.5 17.5C5 18.2 4 19.1 4 20c0 1.7 3.6 2.5 8 2.5s8-.8 8-2.5c0-.9-1-1.8-2.5-2.5", 0, 0 } };
static const char *const mira_tags_182[] = { "localisation", "position", "GPS", "boussole" };
static const MiraOp mira_ops_o_182[] = { { 1, 1.0f, 0.0f, "M20 4 4 10.5l8 1.5 1.5 8z", 0, 0 } };
static const MiraOp mira_ops_f_182[] = { { 0, 0.0f, 0.0f, "M20 4 4 10.5l8 1.5 1.5 8z", 0, 0 }, { 1, 1.0f, -1.5f, "M20 4 4 10.5l8 1.5 1.5 8z", 0, 0 } };
static const char *const mira_tags_183[] = { "nord", "aiguille", "direction", "cap" };
static const MiraOp mira_ops_o_183[] = { { 1, 1.0f, 0.0f, "M12 4l5 16-5-3-5 3z", 0, 0 } };
static const MiraOp mira_ops_f_183[] = { { 0, 0.0f, 0.0f, "M12 4l5 16-5-3-5 3z", 0, 0 }, { 1, 1.0f, -1.5f, "M12 4l5 16-5-3-5 3z", 0, 0 } };
static const char *const mira_tags_184[] = { "boussole", "explorer", "navigateur", "direction", "safari" };
static const MiraOp mira_ops_o_184[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M15.5 8.5 13.5 13.5 8.5 15.5l2-5z", 0, 0 } };
static const MiraOp mira_cut_184_f0[] = { { 1, 1.0f, 0.0f, "M15.5 8.5 13.5 13.5 8.5 15.5l2-5z", 0, 0 } };
static const MiraOp mira_ops_f_184[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_184_f0, 1 } };
static const char *const mira_tags_185[] = { "monde", "langue", "international", "web", "plan\303\250te", "chrome", "navigateur" };
static const MiraOp mira_ops_o_185[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M3 12h18M12 3c-2.5 2.5-3.75 5.5-3.75 9s1.25 6.5 3.75 9c2.5-2.5 3.75-5.5 3.75-9S14.5 5.5 12 3", 0, 0 } };
static const MiraOp mira_cut_185_f0[] = { { 1, 1.0f, 0.0f, "M3 12h18M12 3c-2.5 2.5-3.75 5.5-3.75 9s1.25 6.5 3.75 9c2.5-2.5 3.75-5.5 3.75-9S14.5 5.5 12 3", 0, 0 } };
static const MiraOp mira_ops_f_185[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_185_f0, 1 } };
static const char *const mira_tags_186[] = { "panneau", "direction", "guide", "orientation" };
static const MiraOp mira_ops_o_186[] = { { 1, 1.0f, 0.0f, "M5.5 6h10.5l3.5 3.5-3.5 3.5H5.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M10.5 3v3M10.5 13v8M7.5 21h6", 0, 0 } };
static const MiraOp mira_ops_f_186[] = { { 0, 0.0f, 0.0f, "M5.5 6h10.5l3.5 3.5-3.5 3.5H5.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M10.5 3v3M10.5 13v8M7.5 21h6", 0, 0 } };
static const char *const mira_tags_187[] = { "voiture", "trajet", "transport", "route" };
static const MiraOp mira_ops_o_187[] = { { 1, 1.0f, 0.0f, "M4 10.5 5.6 6.4A2 2 0 0 1 7.5 5h9a2 2 0 0 1 1.9 1.4L20 10.5v5a1.5 1.5 0 0 1-1.5 1.5H5.5A1.5 1.5 0 0 1 4 15.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M4 10.5h16M7.5 13.5h1.5M15 13.5h1.5", 0, 0 }, { 1, 1.0f, 0.0f, "M6.5 17v2.5M17.5 17v2.5", 0, 0 } };
static const MiraOp mira_cut_187_f0[] = { { 1, 1.0f, 0.0f, "M4 10.5h16M7.5 13.5h1.5M15 13.5h1.5", 0, 0 } };
static const MiraOp mira_ops_f_187[] = { { 0, 0.0f, 0.0f, "M4 10.5 5.6 6.4A2 2 0 0 1 7.5 5h9a2 2 0 0 1 1.9 1.4L20 10.5v5a1.5 1.5 0 0 1-1.5 1.5H5.5A1.5 1.5 0 0 1 4 15.5z", mira_cut_187_f0, 1 }, { 1, 1.0f, 0.0f, "M6.5 17v2.5M17.5 17v2.5", 0, 0 } };
static const char *const mira_tags_188[] = { "bus", "transport en commun", "trajet" };
static const MiraOp mira_ops_o_188[] = { { 1, 1.0f, 0.0f, "M6.5 3.5h11a2.5 2.5 0 0 1 2.5 2.5v10a2.5 2.5 0 0 1 -2.5 2.5h-11a2.5 2.5 0 0 1 -2.5 -2.5v-10a2.5 2.5 0 0 1 2.5 -2.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M4 9h16M4 14h16M8 16.5h1M15 16.5h1", 0, 0 }, { 1, 1.0f, 0.0f, "M7 18.5v2M17 18.5v2", 0, 0 } };
static const MiraOp mira_cut_188_f0[] = { { 1, 1.0f, 0.0f, "M4 9h16M4 14h16M8 16.5h1M15 16.5h1", 0, 0 } };
static const MiraOp mira_ops_f_188[] = { { 0, 0.0f, 0.0f, "M6.5 3.5h11a2.5 2.5 0 0 1 2.5 2.5v10a2.5 2.5 0 0 1 -2.5 2.5h-11a2.5 2.5 0 0 1 -2.5 -2.5v-10a2.5 2.5 0 0 1 2.5 -2.5z", mira_cut_188_f0, 1 }, { 1, 1.0f, 0.0f, "M7 18.5v2M17 18.5v2", 0, 0 } };
static const char *const mira_tags_189[] = { "drapeau", "signaler", "marquer", "jalon" };
static const MiraOp mira_ops_o_189[] = { { 1, 1.0f, 0.0f, "M5 4.5c2-1.5 5-1.5 7 0s5 1.5 7 0V14c-2 1.5-5 1.5-7 0s-5-1.5-7 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M5 21V4", 0, 0 } };
static const MiraOp mira_ops_f_189[] = { { 0, 0.0f, 0.0f, "M5 4.5c2-1.5 5-1.5 7 0s5 1.5 7 0V14c-2 1.5-5 1.5-7 0s-5-1.5-7 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M5 21V4", 0, 0 } };
static const char *const mira_tags_190[] = { "b\303\242timent", "bureau", "entreprise", "ville", "immeuble" };
static const MiraOp mira_ops_o_190[] = { { 1, 1.0f, 0.0f, "M3.5 9.5h8v11h-8zM11.5 3.5h9v17h-9z", 0, 0 }, { 1, 1.0f, 0.0f, "M6 13h1M8.5 13h1M6 16.5h1M8.5 16.5h1M14 7h1M17 7h1M14 10.5h1M17 10.5h1M14 14h1M17 14h1", 0, 0 } };
static const MiraOp mira_cut_190_f0[] = { { 1, 1.0f, 0.0f, "M6 13h1M8.5 13h1M6 16.5h1M8.5 16.5h1M14 7h1M17 7h1M14 10.5h1M17 10.5h1M14 14h1M17 14h1", 0, 0 } };
static const MiraOp mira_ops_f_190[] = { { 0, 0.0f, 0.0f, "M3.5 9.5h8v11h-8zM11.5 3.5h9v17h-9z", mira_cut_190_f0, 1 } };
static const char *const mira_tags_191[] = { "heure", "r\303\251cents", "historique", "horloge", "dur\303\251e" };
static const MiraOp mira_ops_o_191[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 7v5.2l3.3 2", 0, 0 } };
static const MiraOp mira_cut_191_f0[] = { { 1, 1.0f, 0.0f, "M12 7v5.2l3.3 2", 0, 0 } };
static const MiraOp mira_ops_f_191[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_191_f0, 1 } };
static const char *const mira_tags_192[] = { "r\303\251veil", "alarme", "rappel", "sonnerie" };
static const MiraOp mira_ops_o_192[] = { { 1, 1.0f, 0.0f, "M4.5 13a7.5 7.5 0 1 0 15 0a7.5 7.5 0 1 0 -15 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 9v4l2.5 1.5", 0, 0 }, { 1, 1.0f, 0.0f, "M5 5.5 7.5 3M19 5.5 16.5 3", 0, 0 } };
static const MiraOp mira_cut_192_f0[] = { { 1, 1.0f, 0.0f, "M12 9v4l2.5 1.5", 0, 0 } };
static const MiraOp mira_ops_f_192[] = { { 0, 0.0f, 0.0f, "M4.5 13a7.5 7.5 0 1 0 15 0a7.5 7.5 0 1 0 -15 0z", mira_cut_192_f0, 1 }, { 1, 1.0f, 0.0f, "M5 5.5 7.5 3M19 5.5 16.5 3", 0, 0 } };
static const char *const mira_tags_193[] = { "minuteur", "compte \303\240 rebours", "chrono" };
static const MiraOp mira_ops_o_193[] = { { 1, 1.0f, 0.0f, "M4.5 13.5a7.5 7.5 0 1 0 15 0a7.5 7.5 0 1 0 -15 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 9v4.5", 0, 0 }, { 1, 1.0f, 0.0f, "M10 3h4M12 3v3", 0, 0 } };
static const MiraOp mira_cut_193_f0[] = { { 1, 1.0f, 0.0f, "M12 9v4.5", 0, 0 } };
static const MiraOp mira_ops_f_193[] = { { 0, 0.0f, 0.0f, "M4.5 13.5a7.5 7.5 0 1 0 15 0a7.5 7.5 0 1 0 -15 0z", mira_cut_193_f0, 1 }, { 1, 1.0f, 0.0f, "M10 3h4M12 3v3", 0, 0 } };
static const char *const mira_tags_194[] = { "sablier", "attente", "chargement", "d\303\251lai" };
static const MiraOp mira_ops_o_194[] = { { 1, 1.0f, 0.0f, "M8 3.5h8V7a4 4 0 0 1-1.6 3.2L12 12l-2.4-1.8A4 4 0 0 1 8 7zM8 20.5h8V17a4 4 0 0 0-1.6-3.2L12 12l-2.4 1.8A4 4 0 0 0 8 17z", 0, 0 }, { 1, 1.0f, 0.0f, "M6.5 3.5h11M6.5 20.5h11", 0, 0 } };
static const MiraOp mira_ops_f_194[] = { { 0, 0.0f, 0.0f, "M8 3.5h8V7a4 4 0 0 1-1.6 3.2L12 12l-2.4-1.8A4 4 0 0 1 8 7zM8 20.5h8V17a4 4 0 0 0-1.6-3.2L12 12l-2.4 1.8A4 4 0 0 0 8 17z", 0, 0 }, { 1, 1.0f, 0.0f, "M6.5 3.5h11M6.5 20.5h11", 0, 0 } };
static const char *const mira_tags_195[] = { "date", "agenda", "calendrier", "\303\251v\303\251nement", "planning" };
static const MiraOp mira_ops_o_195[] = { { 1, 1.0f, 0.0f, "M3.5 7A2.5 2.5 0 0 1 6 4.5h12A2.5 2.5 0 0 1 20.5 7v11a2.5 2.5 0 0 1-2.5 2.5H6A2.5 2.5 0 0 1 3.5 18z", 0, 0 }, { 1, 1.0f, 0.0f, "M3.5 9.5h17", 0, 0 }, { 1, 1.0f, 0.0f, "M8 3v3M16 3v3", 0, 0 } };
static const MiraOp mira_cut_195_f0[] = { { 1, 1.0f, 0.0f, "M3.5 9.5h17", 0, 0 } };
static const MiraOp mira_ops_f_195[] = { { 0, 0.0f, 0.0f, "M3.5 7A2.5 2.5 0 0 1 6 4.5h12A2.5 2.5 0 0 1 20.5 7v11a2.5 2.5 0 0 1-2.5 2.5H6A2.5 2.5 0 0 1 3.5 18z", mira_cut_195_f0, 1 }, { 1, 1.0f, 0.0f, "M8 3v3M16 3v3", 0, 0 } };
static const char *const mira_tags_196[] = { "nouvel \303\251v\303\251nement", "ajouter au calendrier", "planifier" };
static const MiraOp mira_ops_o_196[] = { { 1, 1.0f, 0.0f, "M3.5 7A2.5 2.5 0 0 1 6 4.5h12A2.5 2.5 0 0 1 20.5 7v11a2.5 2.5 0 0 1-2.5 2.5H6A2.5 2.5 0 0 1 3.5 18z", 0, 0 }, { 1, 1.0f, 0.0f, "M3.5 9.5h17M12 12.5v5M9.5 15h5", 0, 0 }, { 1, 1.0f, 0.0f, "M8 3v3M16 3v3", 0, 0 } };
static const MiraOp mira_cut_196_f0[] = { { 1, 1.0f, 0.0f, "M3.5 9.5h17M12 12.5v5M9.5 15h5", 0, 0 } };
static const MiraOp mira_ops_f_196[] = { { 0, 0.0f, 0.0f, "M3.5 7A2.5 2.5 0 0 1 6 4.5h12A2.5 2.5 0 0 1 20.5 7v11a2.5 2.5 0 0 1-2.5 2.5H6A2.5 2.5 0 0 1 3.5 18z", mira_cut_196_f0, 1 }, { 1, 1.0f, 0.0f, "M8 3v3M16 3v3", 0, 0 } };
static const char *const mira_tags_197[] = { "\303\251ch\303\251ance", "rendez-vous", "horaire", "deadline" };
static const MiraOp mira_ops_o_197[] = { { 1, 1.0f, 0.0f, "M3.5 7A2.5 2.5 0 0 1 6 4.5h12A2.5 2.5 0 0 1 20.5 7v11a2.5 2.5 0 0 1-2.5 2.5H6A2.5 2.5 0 0 1 3.5 18z", 0, 0 }, { 1, 1.0f, 0.0f, "M3.5 9.5h17M8.75 15a3.25 3.25 0 1 0 6.5 0a3.25 3.25 0 1 0 -6.5 0zM12 13.25V15l1.25.75", 0, 0 }, { 1, 1.0f, 0.0f, "M8 3v3M16 3v3", 0, 0 } };
static const MiraOp mira_cut_197_f0[] = { { 1, 1.0f, 0.0f, "M3.5 9.5h17M8.75 15a3.25 3.25 0 1 0 6.5 0a3.25 3.25 0 1 0 -6.5 0zM12 13.25V15l1.25.75", 0, 0 } };
static const MiraOp mira_ops_f_197[] = { { 0, 0.0f, 0.0f, "M3.5 7A2.5 2.5 0 0 1 6 4.5h12A2.5 2.5 0 0 1 20.5 7v11a2.5 2.5 0 0 1-2.5 2.5H6A2.5 2.5 0 0 1 3.5 18z", mira_cut_197_f0, 1 }, { 1, 1.0f, 0.0f, "M8 3v3M16 3v3", 0, 0 } };
static const char *const mira_tags_198[] = { "terminal", "console", "ligne de commande", "shell" };
static const MiraOp mira_ops_o_198[] = { { 1, 1.0f, 0.0f, "M5 4h14a2.5 2.5 0 0 1 2.5 2.5v11a2.5 2.5 0 0 1 -2.5 2.5h-14a2.5 2.5 0 0 1 -2.5 -2.5v-11a2.5 2.5 0 0 1 2.5 -2.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M6.5 9l3 3-3 3M12 15h5", 0, 0 } };
static const MiraOp mira_cut_198_f0[] = { { 1, 1.0f, 0.0f, "M6.5 9l3 3-3 3M12 15h5", 0, 0 } };
static const MiraOp mira_ops_f_198[] = { { 0, 0.0f, 0.0f, "M5 4h14a2.5 2.5 0 0 1 2.5 2.5v11a2.5 2.5 0 0 1 -2.5 2.5h-14a2.5 2.5 0 0 1 -2.5 -2.5v-11a2.5 2.5 0 0 1 2.5 -2.5z", mira_cut_198_f0, 1 } };
static const char *const mira_tags_199[] = { "code", "d\303\251veloppeur", "source", "balise", "html" };
static const MiraOp mira_ops_o_199[] = { { 1, 1.0f, 0.0f, "M8 7 3 12l5 5M16 7l5 5-5 5M14 4l-4 16", 0, 0 } };
static const MiraOp mira_ops_f_199[] = { { 1, 1.0f, 0.0f, "M8 7 3 12l5 5M16 7l5 5-5 5M14 4l-4 16", 0, 0 } };
static const char *const mira_tags_200[] = { "accolades", "JSON", "objet", "code" };
static const MiraOp mira_ops_o_200[] = { { 1, 1.0f, 0.0f, "M8.5 4H8a2 2 0 0 0-2 2v3.5a2 2 0 0 1-2 2 2 2 0 0 1 2 2V18a2 2 0 0 0 2 2h.5M15.5 4h.5a2 2 0 0 1 2 2v3.5a2 2 0 0 0 2 2 2 2 0 0 0-2 2V18a2 2 0 0 1-2 2h-.5", 0, 0 } };
static const MiraOp mira_ops_f_200[] = { { 1, 1.0f, 0.0f, "M8.5 4H8a2 2 0 0 0-2 2v3.5a2 2 0 0 1-2 2 2 2 0 0 1 2 2V18a2 2 0 0 0 2 2h.5M15.5 4h.5a2 2 0 0 1 2 2v3.5a2 2 0 0 0 2 2 2 2 0 0 0-2 2V18a2 2 0 0 1-2 2h-.5", 0, 0 } };
static const char *const mira_tags_201[] = { "git", "branche", "fork", "version" };
static const MiraOp mira_ops_o_201[] = { { 1, 1.0f, 0.0f, "M3.5 4.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM3.5 19.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM15.5 8a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M6 7v10M18 10.5a6 6 0 0 1-6 6H6", 0, 0 } };
static const MiraOp mira_ops_f_201[] = { { 0, 0.0f, 0.0f, "M3.5 4.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM3.5 19.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM15.5 8a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M6 7v10M18 10.5a6 6 0 0 1-6 6H6", 0, 0 } };
static const char *const mira_tags_202[] = { "git", "fusionner", "merge", "version" };
static const MiraOp mira_ops_o_202[] = { { 1, 1.0f, 0.0f, "M3.5 4.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM15.5 4.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM9.5 19.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M6 7v2.5a4 4 0 0 0 4 4h4a4 4 0 0 0 4-4V7M12 13.5V17", 0, 0 } };
static const MiraOp mira_ops_f_202[] = { { 0, 0.0f, 0.0f, "M3.5 4.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM15.5 4.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM9.5 19.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M6 7v2.5a4 4 0 0 0 4 4h4a4 4 0 0 0 4-4V7M12 13.5V17", 0, 0 } };
static const char *const mira_tags_203[] = { "git", "pull request", "demande de fusion", "revue" };
static const MiraOp mira_ops_o_203[] = { { 1, 1.0f, 0.0f, "M3.5 4.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM3.5 19.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM15.5 19.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M6 7v10M13 4.5h2.5A2.5 2.5 0 0 1 18 7v10M13 4.5 15 2.5M13 4.5 15 6.5", 0, 0 } };
static const MiraOp mira_ops_f_203[] = { { 0, 0.0f, 0.0f, "M3.5 4.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM3.5 19.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM15.5 19.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M6 7v10M13 4.5h2.5A2.5 2.5 0 0 1 18 7v10M13 4.5 15 2.5M13 4.5 15 6.5", 0, 0 } };
static const char *const mira_tags_204[] = { "graphe", "n\305\223uds", "r\303\251seau", "commits", "relations" };
static const MiraOp mira_ops_o_204[] = { { 1, 1.0f, 0.0f, "M9.5 5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM2.5 18.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM16.5 18.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M10.8 7.2 6.3 16.3M13.2 7.2l4.5 9.1M7.5 18.5h9", 0, 0 } };
static const MiraOp mira_ops_f_204[] = { { 0, 0.0f, 0.0f, "M9.5 5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM2.5 18.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM16.5 18.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M10.8 7.2 6.3 16.3M13.2 7.2l4.5 9.1M7.5 18.5h9", 0, 0 } };
static const char *const mira_tags_205[] = { "bug", "bogue", "insecte", "erreur", "d\303\251bogage" };
static const MiraOp mira_ops_o_205[] = { { 1, 1.0f, 0.0f, "M12 8c3.5 0 6 2.7 6 6.5S15.5 21 12 21s-6-2.7-6-6.5S8.5 8 12 8z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 8v13M9.5 12h.01M14.5 12h.01M10 16h.01M14 16h.01", 0, 0 }, { 1, 1.0f, 0.0f, "M9 4l1.5 2.5M15 4l-1.5 2.5M6 12.5H3M18 12.5h3M6.5 17l-2.5 1.5M17.5 17l2.5 1.5", 0, 0 } };
static const MiraOp mira_cut_205_f0[] = { { 1, 1.0f, 0.0f, "M12 8v13M9.5 12h.01M14.5 12h.01M10 16h.01M14 16h.01", 0, 0 } };
static const MiraOp mira_ops_f_205[] = { { 0, 0.0f, 0.0f, "M12 8c3.5 0 6 2.7 6 6.5S15.5 21 12 21s-6-2.7-6-6.5S8.5 8 12 8z", mira_cut_205_f0, 1 }, { 1, 1.0f, 0.0f, "M9 4l1.5 2.5M15 4l-1.5 2.5M6 12.5H3M18 12.5h3M6.5 17l-2.5 1.5M17.5 17l2.5 1.5", 0, 0 } };
static const char *const mira_tags_206[] = { "build", "construire", "outil", "marteau", "compiler" };
static const MiraOp mira_ops_o_206[] = { { 1, 1.0f, 0.0f, "M9.5 6l3-3 8 8-3 3z", 0, 0 }, { 1, 1.0f, 0.0f, "M3.5 18.5 10 12M3.5 18.5 5.5 20.5 12 14", 0, 0 } };
static const MiraOp mira_ops_f_206[] = { { 0, 0.0f, 0.0f, "M9.5 6l3-3 8 8-3 3z", 0, 0 }, { 1, 1.0f, 0.0f, "M3.5 18.5 10 12M3.5 18.5 5.5 20.5 12 14", 0, 0 } };
static const char *const mira_tags_207[] = { "outil", "r\303\251parer", "r\303\251glage", "maintenance", "cl\303\251" };
static const MiraOp mira_ops_o_207[] = { { 1, 1.0f, 0.0f, "M14.5 3.5a5.5 5.5 0 0 0-5 7.7L3.5 17.2a1.6 1.6 0 0 0 0 2.3l1 1a1.6 1.6 0 0 0 2.3 0l6-6a5.5 5.5 0 0 0 7.7-5l-3.5 3.5-3-3z", 0, 0 } };
static const MiraOp mira_ops_f_207[] = { { 0, 0.0f, 0.0f, "M14.5 3.5a5.5 5.5 0 0 0-5 7.7L3.5 17.2a1.6 1.6 0 0 0 0 2.3l1 1a1.6 1.6 0 0 0 2.3 0l6-6a5.5 5.5 0 0 0 7.7-5l-3.5 3.5-3-3z", 0, 0 }, { 1, 1.0f, -1.5f, "M14.5 3.5a5.5 5.5 0 0 0-5 7.7L3.5 17.2a1.6 1.6 0 0 0 0 2.3l1 1a1.6 1.6 0 0 0 2.3 0l6-6a5.5 5.5 0 0 0 7.7-5l-3.5 3.5-3-3z", 0, 0 } };
static const char *const mira_tags_208[] = { "extension", "module", "plugin", "int\303\251gration" };
static const MiraOp mira_ops_o_208[] = { { 1, 1.0f, 0.0f, "M10 5.5a2 2 0 1 1 4 0h2.5A1.5 1.5 0 0 1 18 7v2.5a2 2 0 1 1 0 4V16a1.5 1.5 0 0 1-1.5 1.5H14a2 2 0 1 1-4 0H7.5A1.5 1.5 0 0 1 6 16v-2.5a2 2 0 1 1 0-4V7a1.5 1.5 0 0 1 1.5-1.5z", 0, 0 } };
static const MiraOp mira_ops_f_208[] = { { 0, 0.0f, 0.0f, "M10 5.5a2 2 0 1 1 4 0h2.5A1.5 1.5 0 0 1 18 7v2.5a2 2 0 1 1 0 4V16a1.5 1.5 0 0 1-1.5 1.5H14a2 2 0 1 1-4 0H7.5A1.5 1.5 0 0 1 6 16v-2.5a2 2 0 1 1 0-4V7a1.5 1.5 0 0 1 1.5-1.5z", 0, 0 }, { 1, 1.0f, -1.5f, "M10 5.5a2 2 0 1 1 4 0h2.5A1.5 1.5 0 0 1 18 7v2.5a2 2 0 1 1 0 4V16a1.5 1.5 0 0 1-1.5 1.5H14a2 2 0 1 1-4 0H7.5A1.5 1.5 0 0 1 6 16v-2.5a2 2 0 1 1 0-4V7a1.5 1.5 0 0 1 1.5-1.5z", 0, 0 } };
static const char *const mira_tags_209[] = { "3D", "objet", "paquet", "volume", "package" };
static const MiraOp mira_ops_o_209[] = { { 1, 1.0f, 0.0f, "M12 3 20 7.5v9L12 21l-8-4.5v-9z", 0, 0 }, { 1, 1.0f, 0.0f, "M4 7.5l8 4.5 8-4.5M12 12v9", 0, 0 } };
static const MiraOp mira_cut_209_f0[] = { { 1, 1.0f, 0.0f, "M4 7.5l8 4.5 8-4.5M12 12v9", 0, 0 } };
static const MiraOp mira_ops_f_209[] = { { 0, 0.0f, 0.0f, "M12 3 20 7.5v9L12 21l-8-4.5v-9z", mira_cut_209_f0, 1 } };
static const char *const mira_tags_210[] = { "colis", "livraison", "paquet", "d\303\251pendance", "npm" };
static const MiraOp mira_ops_o_210[] = { { 1, 1.0f, 0.0f, "M12 3 20 7.5v9L12 21l-8-4.5v-9z", 0, 0 }, { 1, 1.0f, 0.0f, "M4 7.5l8 4.5 8-4.5M12 12v9M8 5.25l8 4.5", 0, 0 } };
static const MiraOp mira_cut_210_f0[] = { { 1, 1.0f, 0.0f, "M4 7.5l8 4.5 8-4.5M12 12v9M8 5.25l8 4.5", 0, 0 } };
static const MiraOp mira_ops_f_210[] = { { 0, 0.0f, 0.0f, "M12 3 20 7.5v9L12 21l-8-4.5v-9z", mira_cut_210_f0, 1 } };
static const char *const mira_tags_211[] = { "commande", "raccourci", "cmd", "touche" };
static const MiraOp mira_ops_o_211[] = { { 1, 1.0f, 0.0f, "M9 9V6.5a2.5 2.5 0 1 0-2.5 2.5H9zM15 9h2.5A2.5 2.5 0 1 0 15 6.5V9zM9 15v2.5A2.5 2.5 0 1 1 6.5 15H9zM15 15v2.5a2.5 2.5 0 1 0 2.5-2.5H15zM9 9h6v6H9z", 0, 0 } };
static const MiraOp mira_ops_f_211[] = { { 1, 1.0f, 0.0f, "M9 9V6.5a2.5 2.5 0 1 0-2.5 2.5H9zM15 9h2.5A2.5 2.5 0 1 0 15 6.5V9zM9 15v2.5A2.5 2.5 0 1 1 6.5 15H9zM15 15v2.5a2.5 2.5 0 1 0 2.5-2.5H15zM9 9h6v6H9z", 0, 0 } };
static const char *const mira_tags_212[] = { "option", "alt", "touche", "raccourci" };
static const MiraOp mira_ops_o_212[] = { { 1, 1.0f, 0.0f, "M3.5 6.5h5l7 11h5M14.5 6.5h6", 0, 0 } };
static const MiraOp mira_ops_f_212[] = { { 1, 1.0f, 0.0f, "M3.5 6.5h5l7 11h5M14.5 6.5h6", 0, 0 } };
static const char *const mira_tags_213[] = { "contr\303\264le", "ctrl", "touche", "raccourci" };
static const MiraOp mira_ops_o_213[] = { { 1, 1.0f, 0.0f, "M6 14.5 12 8.5l6 6", 0, 0 } };
static const MiraOp mira_ops_f_213[] = { { 1, 1.0f, 0.0f, "M6 14.5 12 8.5l6 6", 0, 0 } };
static const char *const mira_tags_214[] = { "majuscule", "shift", "touche" };
static const MiraOp mira_ops_o_214[] = { { 1, 1.0f, 0.0f, "M12 4 4 12.5h4.5V20h7v-7.5H20z", 0, 0 } };
static const MiraOp mira_ops_f_214[] = { { 0, 0.0f, 0.0f, "M12 4 4 12.5h4.5V20h7v-7.5H20z", 0, 0 }, { 1, 1.0f, -1.5f, "M12 4 4 12.5h4.5V20h7v-7.5H20z", 0, 0 } };
static const char *const mira_tags_215[] = { "retour arri\303\250re", "backspace", "effacer", "supprimer" };
static const MiraOp mira_ops_o_215[] = { { 1, 1.0f, 0.0f, "M8.5 5h11A1.5 1.5 0 0 1 21 6.5v11a1.5 1.5 0 0 1-1.5 1.5h-11l-6-7z", 0, 0 }, { 1, 1.0f, 0.0f, "M11.5 9.5l5 5M16.5 9.5l-5 5", 0, 0 } };
static const MiraOp mira_cut_215_f0[] = { { 1, 1.0f, 0.0f, "M11.5 9.5l5 5M16.5 9.5l-5 5", 0, 0 } };
static const MiraOp mira_ops_f_215[] = { { 0, 0.0f, 0.0f, "M8.5 5h11A1.5 1.5 0 0 1 21 6.5v11a1.5 1.5 0 0 1-1.5 1.5h-11l-6-7z", mira_cut_215_f0, 1 } };
static const char *const mira_tags_216[] = { "entr\303\251e", "retour", "valider", "touche" };
static const MiraOp mira_ops_o_216[] = { { 1, 1.0f, 0.0f, "M20 6v5.5a2.5 2.5 0 0 1-2.5 2.5H4M8 10l-4 4 4 4", 0, 0 } };
static const MiraOp mira_ops_f_216[] = { { 1, 1.0f, 0.0f, "M20 6v5.5a2.5 2.5 0 0 1-2.5 2.5H4M8 10l-4 4 4 4", 0, 0 } };
static const char *const mira_tags_217[] = { "fen\303\252tre", "application", "bureau", "interface" };
static const MiraOp mira_ops_o_217[] = { { 1, 1.0f, 0.0f, "M5.5 4h13a2.5 2.5 0 0 1 2.5 2.5v11a2.5 2.5 0 0 1 -2.5 2.5h-13a2.5 2.5 0 0 1 -2.5 -2.5v-11a2.5 2.5 0 0 1 2.5 -2.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M3 8.5h18M6.5 6.25h.5M9.5 6.25h.5", 0, 0 } };
static const MiraOp mira_cut_217_f0[] = { { 1, 1.0f, 0.0f, "M3 8.5h18M6.5 6.25h.5M9.5 6.25h.5", 0, 0 } };
static const MiraOp mira_ops_f_217[] = { { 0, 0.0f, 0.0f, "M5.5 4h13a2.5 2.5 0 0 1 2.5 2.5v11a2.5 2.5 0 0 1 -2.5 2.5h-13a2.5 2.5 0 0 1 -2.5 -2.5v-11a2.5 2.5 0 0 1 2.5 -2.5z", mira_cut_217_f0, 1 } };
static const char *const mira_tags_218[] = { "chat", "github", "mascotte", "open source", "d\303\251p\303\264t", "animal" };
static const MiraOp mira_ops_o_218[] = { { 1, 1.0f, 0.0f, "M5 4.5 8.5 8h7L19 4.5v8.5a7 7 0 0 1-14 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M9.5 12h.01M14.5 12h.01M11 15.5 12 14.5l1 1", 0, 0 }, { 1, 1.0f, 0.0f, "M2.5 14.5h3M18.5 14.5h3", 0, 0 } };
static const MiraOp mira_cut_218_f0[] = { { 1, 1.0f, 1.4f, "M2.5 14.5h3M18.5 14.5h3", 0, 0 }, { 1, 1.0f, 0.0f, "M9.5 12h.01M14.5 12h.01M11 15.5 12 14.5l1 1", 0, 0 } };
static const MiraOp mira_ops_f_218[] = { { 0, 0.0f, 0.0f, "M5 4.5 8.5 8h7L19 4.5v8.5a7 7 0 0 1-14 0z", mira_cut_218_f0, 2 }, { 1, 1.0f, 0.0f, "M2.5 14.5h3M18.5 14.5h3", 0, 0 } };
static const char *const mira_tags_219[] = { "fonction", "formule", "\306\222", "expression" };
static const MiraOp mira_ops_o_219[] = { { 1, 1.0f, 0.0f, "M15.5 4.5h-1a2 2 0 0 0-2 1.8L11.2 18a2 2 0 0 1-2 1.8H8.5M8.5 10.5h7", 0, 0 } };
static const MiraOp mira_ops_f_219[] = { { 1, 1.0f, 0.0f, "M15.5 4.5h-1a2 2 0 0 0-2 1.8L11.2 18a2 2 0 0 1-2 1.8H8.5M8.5 10.5h7", 0, 0 } };
static const char *const mira_tags_220[] = { "verrouill\303\251", "s\303\251curit\303\251", "cadenas", "priv\303\251", "prot\303\251g\303\251" };
static const MiraOp mira_ops_o_220[] = { { 1, 1.0f, 0.0f, "M6.5 10.5h11A1.5 1.5 0 0 1 19 12v7a1.5 1.5 0 0 1-1.5 1.5h-11A1.5 1.5 0 0 1 5 19v-7a1.5 1.5 0 0 1 1.5-1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.5 10.5V8a4.5 4.5 0 0 1 9 0v2.5", 0, 0 } };
static const MiraOp mira_ops_f_220[] = { { 0, 0.0f, 0.0f, "M6.5 10.5h11A1.5 1.5 0 0 1 19 12v7a1.5 1.5 0 0 1-1.5 1.5h-11A1.5 1.5 0 0 1 5 19v-7a1.5 1.5 0 0 1 1.5-1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.5 10.5V8a4.5 4.5 0 0 1 9 0v2.5", 0, 0 } };
static const char *const mira_tags_221[] = { "d\303\251verrouill\303\251", "ouvert", "acc\303\250s", "cadenas ouvert" };
static const MiraOp mira_ops_o_221[] = { { 1, 1.0f, 0.0f, "M6.5 10.5h11A1.5 1.5 0 0 1 19 12v7a1.5 1.5 0 0 1-1.5 1.5h-11A1.5 1.5 0 0 1 5 19v-7a1.5 1.5 0 0 1 1.5-1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.5 10.5V8a4.5 4.5 0 0 1 8.7-1.6", 0, 0 } };
static const MiraOp mira_ops_f_221[] = { { 0, 0.0f, 0.0f, "M6.5 10.5h11A1.5 1.5 0 0 1 19 12v7a1.5 1.5 0 0 1-1.5 1.5h-11A1.5 1.5 0 0 1 5 19v-7a1.5 1.5 0 0 1 1.5-1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.5 10.5V8a4.5 4.5 0 0 1 8.7-1.6", 0, 0 } };
static const char *const mira_tags_222[] = { "cl\303\251", "mot de passe", "acc\303\250s", "identifiant" };
static const MiraOp mira_ops_o_222[] = { { 1, 1.0f, 0.0f, "M10.5 8.5a5 5 0 1 0 10 0a5 5 0 1 0 -10 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 12 3.5 20.5M5.5 18.5l2 2M8.5 15.5l2 2", 0, 0 } };
static const MiraOp mira_ops_f_222[] = { { 0, 0.0f, 0.0f, "M10.5 8.5a5 5 0 1 0 10 0a5 5 0 1 0 -10 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 12 3.5 20.5M5.5 18.5l2 2M8.5 15.5l2 2", 0, 0 } };
static const char *const mira_tags_223[] = { "protection", "s\303\251curit\303\251", "bouclier", "confidentialit\303\251" };
static const MiraOp mira_ops_o_223[] = { { 1, 1.0f, 0.0f, "M12 3 4.5 6v6c0 4.5 3 7.5 7.5 9 4.5-1.5 7.5-4.5 7.5-9V6z", 0, 0 } };
static const MiraOp mira_ops_f_223[] = { { 0, 0.0f, 0.0f, "M12 3 4.5 6v6c0 4.5 3 7.5 7.5 9 4.5-1.5 7.5-4.5 7.5-9V6z", 0, 0 } };
static const char *const mira_tags_224[] = { "prot\303\251g\303\251", "v\303\251rifi\303\251", "s\303\251curis\303\251", "conforme" };
static const MiraOp mira_ops_o_224[] = { { 1, 1.0f, 0.0f, "M12 3 4.5 6v6c0 4.5 3 7.5 7.5 9 4.5-1.5 7.5-4.5 7.5-9V6z", 0, 0 }, { 1, 1.0f, 0.0f, "M8.5 12l2.5 2.5 4.5-5", 0, 0 } };
static const MiraOp mira_cut_224_f0[] = { { 1, 1.0f, 0.0f, "M8.5 12l2.5 2.5 4.5-5", 0, 0 } };
static const MiraOp mira_ops_f_224[] = { { 0, 0.0f, 0.0f, "M12 3 4.5 6v6c0 4.5 3 7.5 7.5 9 4.5-1.5 7.5-4.5 7.5-9V6z", mira_cut_224_f0, 1 } };
static const char *const mira_tags_225[] = { "risque", "alerte de s\303\251curit\303\251", "vuln\303\251rabilit\303\251" };
static const MiraOp mira_ops_o_225[] = { { 1, 1.0f, 0.0f, "M12 3 4.5 6v6c0 4.5 3 7.5 7.5 9 4.5-1.5 7.5-4.5 7.5-9V6z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 8v4.5M12 15.75v.01", 0, 0 } };
static const MiraOp mira_cut_225_f0[] = { { 1, 1.0f, 0.0f, "M12 8v4.5M12 15.75v.01", 0, 0 } };
static const MiraOp mira_ops_f_225[] = { { 0, 0.0f, 0.0f, "M12 3 4.5 6v6c0 4.5 3 7.5 7.5 9 4.5-1.5 7.5-4.5 7.5-9V6z", mira_cut_225_f0, 1 } };
static const char *const mira_tags_226[] = { "certifi\303\251", "v\303\251rifi\303\251", "badge", "authentique" };
static const MiraOp mira_ops_o_226[] = { { 1, 1.0f, 0.0f, "M12 2.5L15.18 4.33L18.72 5.28L19.67 8.82L21.5 12L19.67 15.18L18.72 18.72L15.18 19.67L12 21.5L8.82 19.67L5.28 18.72L4.33 15.18L2.5 12L4.33 8.82L5.28 5.28L8.82 4.33z", 0, 0 }, { 1, 1.0f, 0.0f, "M8.5 12l2.5 2.5 4.5-5", 0, 0 } };
static const MiraOp mira_cut_226_f0[] = { { 1, 1.0f, 0.0f, "M8.5 12l2.5 2.5 4.5-5", 0, 0 } };
static const MiraOp mira_ops_f_226[] = { { 0, 0.0f, 0.0f, "M12 2.5L15.18 4.33L18.72 5.28L19.67 8.82L21.5 12L19.67 15.18L18.72 18.72L15.18 19.67L12 21.5L8.82 19.67L5.28 18.72L4.33 15.18L2.5 12L4.33 8.82L5.28 5.28L8.82 4.33z", mira_cut_226_f0, 1 } };
static const char *const mira_tags_227[] = { "r\303\251voqu\303\251", "non v\303\251rifi\303\251", "refus\303\251", "badge" };
static const MiraOp mira_ops_o_227[] = { { 1, 1.0f, 0.0f, "M12 2.5L15.18 4.33L18.72 5.28L19.67 8.82L21.5 12L19.67 15.18L18.72 18.72L15.18 19.67L12 21.5L8.82 19.67L5.28 18.72L4.33 15.18L2.5 12L4.33 8.82L5.28 5.28L8.82 4.33z", 0, 0 }, { 1, 1.0f, 0.0f, "M9.5 9.5l5 5M14.5 9.5l-5 5", 0, 0 } };
static const MiraOp mira_cut_227_f0[] = { { 1, 1.0f, 0.0f, "M9.5 9.5l5 5M14.5 9.5l-5 5", 0, 0 } };
static const MiraOp mira_ops_f_227[] = { { 0, 0.0f, 0.0f, "M12 2.5L15.18 4.33L18.72 5.28L19.67 8.82L21.5 12L19.67 15.18L18.72 18.72L15.18 19.67L12 21.5L8.82 19.67L5.28 18.72L4.33 15.18L2.5 12L4.33 8.82L5.28 5.28L8.82 4.33z", mira_cut_227_f0, 1 } };
static const char *const mira_tags_228[] = { "empreinte", "biom\303\251trie", "authentification", "doigt" };
static const MiraOp mira_ops_o_228[] = { { 1, 1.0f, 0.0f, "M4.5 8.5A8.5 8.5 0 0 1 12 4a8.5 8.5 0 0 1 7.5 4.5M6.5 20a11 11 0 0 1-1-5v-2a6.5 6.5 0 0 1 13 0v.5M9.5 20.5a8 8 0 0 1-1-3.5v-4a3.5 3.5 0 0 1 7 0v4.5M12 13v7.5M15.5 16.5a6 6 0 0 0 .5 3", 0, 0 } };
static const MiraOp mira_ops_f_228[] = { { 1, 1.0f, 0.0f, "M4.5 8.5A8.5 8.5 0 0 1 12 4a8.5 8.5 0 0 1 7.5 4.5M6.5 20a11 11 0 0 1-1-5v-2a6.5 6.5 0 0 1 13 0v.5M9.5 20.5a8 8 0 0 1-1-3.5v-4a3.5 3.5 0 0 1 7 0v4.5M12 13v7.5M15.5 16.5a6 6 0 0 0 .5 3", 0, 0 } };
static const char *const mira_tags_229[] = { "reconnaissance faciale", "biom\303\251trie", "visage", "authentification" };
static const MiraOp mira_ops_o_229[] = { { 1, 1.0f, 0.0f, "M3.5 8V5.5A2 2 0 0 1 5.5 3.5H8M16 3.5h2.5a2 2 0 0 1 2 2V8M20.5 16v2.5a2 2 0 0 1-2 2H16M8 20.5H5.5a2 2 0 0 1-2-2V16M8.5 9v1.5M15.5 9v1.5M12 9v4h-1.2M8.5 15a5 5 0 0 0 7 0", 0, 0 } };
static const MiraOp mira_ops_f_229[] = { { 1, 1.0f, 0.0f, "M3.5 8V5.5A2 2 0 0 1 5.5 3.5H8M16 3.5h2.5a2 2 0 0 1 2 2V8M20.5 16v2.5a2 2 0 0 1-2 2H16M8 20.5H5.5a2 2 0 0 1-2-2V16M8.5 9v1.5M15.5 9v1.5M12 9v4h-1.2M8.5 15a5 5 0 0 0 7 0", 0, 0 } };
static const char *const mira_tags_230[] = { "afficher", "visible", "aper\303\247u", "mot de passe", "\305\223il" };
static const MiraOp mira_ops_o_230[] = { { 1, 1.0f, 0.0f, "M2.5 12s3.5-6.5 9.5-6.5 9.5 6.5 9.5 6.5-3.5 6.5-9.5 6.5S2.5 12 2.5 12z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 12a3 3 0 1 0 6 0a3 3 0 1 0 -6 0z", 0, 0 } };
static const MiraOp mira_cut_230_f0[] = { { 1, 1.0f, 0.0f, "M9 12a3 3 0 1 0 6 0a3 3 0 1 0 -6 0z", 0, 0 } };
static const MiraOp mira_ops_f_230[] = { { 0, 0.0f, 0.0f, "M2.5 12s3.5-6.5 9.5-6.5 9.5 6.5 9.5 6.5-3.5 6.5-9.5 6.5S2.5 12 2.5 12z", mira_cut_230_f0, 1 } };
static const char *const mira_tags_231[] = { "masquer", "invisible", "cach\303\251", "mot de passe" };
static const MiraOp mira_ops_o_231[] = { { 1, 1.0f, 0.0f, "M2.5 12s3.5-6.5 9.5-6.5 9.5 6.5 9.5 6.5-3.5 6.5-9.5 6.5S2.5 12 2.5 12z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 12a3 3 0 1 0 6 0a3 3 0 1 0 -6 0zM4 4l16 16", 0, 0 } };
static const MiraOp mira_cut_231_f0[] = { { 1, 1.0f, 1.4f, "M9 12a3 3 0 1 0 6 0a3 3 0 1 0 -6 0zM4 4l16 16", 0, 0 } };
static const MiraOp mira_ops_f_231[] = { { 0, 0.0f, 0.0f, "M2.5 12s3.5-6.5 9.5-6.5 9.5 6.5 9.5 6.5-3.5 6.5-9.5 6.5S2.5 12 2.5 12z", mira_cut_231_f0, 1 }, { 1, 1.0f, 0.0f, "M9 12a3 3 0 1 0 6 0a3 3 0 1 0 -6 0zM4 4l16 16", 0, 0 } };
static const char *const mira_tags_232[] = { "accessibilit\303\251", "handicap", "a11y", "inclusif" };
static const MiraOp mira_ops_o_232[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 6.75v.01M7 10.5l5 1 5-1M12 11.5v3.5l-2.5 3.5M12 15l2.5 3.5", 0, 0 } };
static const MiraOp mira_cut_232_f0[] = { { 1, 1.0f, 0.0f, "M12 6.75v.01M7 10.5l5 1 5-1M12 11.5v3.5l-2.5 3.5M12 15l2.5 3.5", 0, 0 } };
static const MiraOp mira_ops_f_232[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_232_f0, 1 } };
static const char *const mira_tags_233[] = { "audition", "\303\251couter", "son", "malentendant" };
static const MiraOp mira_ops_o_233[] = { { 1, 1.0f, 0.0f, "M6 10a6 6 0 0 1 12 0c0 3-2 4-2.5 6.5S14 21 12 21a2.5 2.5 0 0 1-2.5-2.5M9 10a3 3 0 0 1 6 0c0 1.5-1 2-1.5 3.5", 0, 0 } };
static const MiraOp mira_ops_f_233[] = { { 1, 1.0f, 0.0f, "M6 10a6 6 0 0 1 12 0c0 3-2 4-2.5 6.5S14 21 12 21a2.5 2.5 0 0 1-2.5-2.5M9 10a3 3 0 0 1 6 0c0 1.5-1 2-1.5 3.5", 0, 0 } };
static const char *const mira_tags_234[] = { "fauteuil roulant", "mobilit\303\251 r\303\251duite", "accessibilit\303\251", "PMR" };
static const MiraOp mira_ops_o_234[] = { { 1, 1.0f, 0.0f, "M4.5 16.5a4.5 4.5 0 1 0 9 0a4.5 4.5 0 1 0 -9 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 12V6.5h4l1.5 5.5h4l1.5 5M13 3.5v.01", 0, 0 } };
static const MiraOp mira_ops_f_234[] = { { 0, 0.0f, 0.0f, "M4.5 16.5a4.5 4.5 0 1 0 9 0a4.5 4.5 0 1 0 -9 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 12V6.5h4l1.5 5.5h4l1.5 5M13 3.5v.01", 0, 0 } };
static const char *const mira_tags_235[] = { "r\303\251glages", "param\303\250tres", "pr\303\251f\303\251rences", "engrenage", "configuration" };
static const MiraOp mira_ops_o_235[] = { { 1, 1.0f, 0.0f, "M12.3 4.31L13.13 2.47L15.32 2.99L15.22 5.01L17.65 6.77L19.54 6.06L20.72 7.98L19.22 9.33L19.69 12.3L21.53 13.13L21.01 15.32L18.99 15.22L17.23 17.65L17.94 19.54L16.02 20.72L14.67 19.22L11.7 19.69L10.87 21.53L8.68 21.01L8.78 18.99L6.35 17.23L4.46 17.94L3.28 16.02L4.78 14.67L4.31 11.7L2.47 10.87L2.99 8.68L5.01 8.78L6.77 6.35L6.06 4.46L7.98 3.28L9.33 4.78zM8.8 12a3.2 3.2 0 1 0 6.4 0a3.2 3.2 0 1 0 -6.4 0z", 0, 0 } };
static const MiraOp mira_ops_f_235[] = { { 0, 0.0f, 0.0f, "M12.3 4.31L13.13 2.47L15.32 2.99L15.22 5.01L17.65 6.77L19.54 6.06L20.72 7.98L19.22 9.33L19.69 12.3L21.53 13.13L21.01 15.32L18.99 15.22L17.23 17.65L17.94 19.54L16.02 20.72L14.67 19.22L11.7 19.69L10.87 21.53L8.68 21.01L8.78 18.99L6.35 17.23L4.46 17.94L3.28 16.02L4.78 14.67L4.31 11.7L2.47 10.87L2.99 8.68L5.01 8.78L6.77 6.35L6.06 4.46L7.98 3.28L9.33 4.78zM8.8 12a3.2 3.2 0 1 0 6.4 0a3.2 3.2 0 1 0 -6.4 0z", 0, 0 } };
static const char *const mira_tags_236[] = { "r\303\251glages", "filtres", "ajuster", "curseurs" };
static const MiraOp mira_ops_o_236[] = { { 1, 1.0f, 0.0f, "M7 7a2 2 0 1 0 4 0a2 2 0 1 0 -4 0zM13 12a2 2 0 1 0 4 0a2 2 0 1 0 -4 0zM6 17a2 2 0 1 0 4 0a2 2 0 1 0 -4 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M4 7h16M4 12h16M4 17h16", 0, 0 } };
static const MiraOp mira_cut_236_f0[] = { { 1, 1.0f, 1.4f, "M4 7h16M4 12h16M4 17h16", 0, 0 } };
static const MiraOp mira_ops_f_236[] = { { 0, 0.0f, 0.0f, "M7 7a2 2 0 1 0 4 0a2 2 0 1 0 -4 0zM13 12a2 2 0 1 0 4 0a2 2 0 1 0 -4 0zM6 17a2 2 0 1 0 4 0a2 2 0 1 0 -4 0z", mira_cut_236_f0, 1 }, { 1, 1.0f, 0.0f, "M4 7h16M4 12h16M4 17h16", 0, 0 } };
static const char *const mira_tags_237[] = { "interrupteurs", "options", "activer", "bascules" };
static const MiraOp mira_ops_o_237[] = { { 1, 1.0f, 0.0f, "M6.5 7a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM12.5 17a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M4.5 7h15M4.5 17h15", 0, 0 } };
static const MiraOp mira_cut_237_f0[] = { { 1, 1.0f, 1.4f, "M4.5 7h15M4.5 17h15", 0, 0 } };
static const MiraOp mira_ops_f_237[] = { { 0, 0.0f, 0.0f, "M6.5 7a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM12.5 17a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0z", mira_cut_237_f0, 1 }, { 1, 1.0f, 0.0f, "M4.5 7h15M4.5 17h15", 0, 0 } };
static const char *const mira_tags_238[] = { "filtrer", "trier", "affiner", "entonnoir" };
static const MiraOp mira_ops_o_238[] = { { 1, 1.0f, 0.0f, "M4 7h16M7 12h10M10 17h4", 0, 0 } };
static const MiraOp mira_ops_f_238[] = { { 1, 1.0f, 0.0f, "M4 7h16M7 12h10M10 17h4", 0, 0 } };
static const char *const mira_tags_239[] = { "\303\251pingler", "fixer", "punaise", "garder en haut" };
static const MiraOp mira_ops_o_239[] = { { 1, 1.0f, 0.0f, "M8 15.75h8l-1-5V6.25l1.5-2.5h-9L9 6.25v4.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 15.75v4.5", 0, 0 } };
static const MiraOp mira_ops_f_239[] = { { 0, 0.0f, 0.0f, "M8 15.75h8l-1-5V6.25l1.5-2.5h-9L9 6.25v4.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 15.75v4.5", 0, 0 } };
static const char *const mira_tags_240[] = { "mode sombre", "nuit", "ne pas d\303\251ranger", "lune" };
static const MiraOp mira_ops_o_240[] = { { 1, 1.0f, 0.0f, "M20 14.5A8 8 0 0 1 9.5 4a8 8 0 1 0 10.5 10.5z", 0, 0 } };
static const MiraOp mira_ops_f_240[] = { { 0, 0.0f, 0.0f, "M20 14.5A8 8 0 0 1 9.5 4a8 8 0 1 0 10.5 10.5z", 0, 0 }, { 1, 1.0f, -1.5f, "M20 14.5A8 8 0 0 1 9.5 4a8 8 0 1 0 10.5 10.5z", 0, 0 } };
static const char *const mira_tags_241[] = { "apparence", "th\303\250me", "pinceau", "personnaliser", "couleur" };
static const MiraOp mira_ops_o_241[] = { { 1, 1.0f, 0.0f, "M9.5 12.5a3 3 0 0 1 3 3c0 2.5-3 5-9 5 0-6 2.5-8 6-8z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 12.5 20.5 4", 0, 0 } };
static const MiraOp mira_ops_f_241[] = { { 0, 0.0f, 0.0f, "M9.5 12.5a3 3 0 0 1 3 3c0 2.5-3 5-9 5 0-6 2.5-8 6-8z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 12.5 20.5 4", 0, 0 } };
static const char *const mira_tags_242[] = { "information", "aide", "d\303\251tails", "\303\240 propos" };
static const MiraOp mira_ops_o_242[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 11v5.5M12 7.75v.01", 0, 0 } };
static const MiraOp mira_cut_242_f0[] = { { 1, 1.0f, 0.0f, "M12 11v5.5M12 7.75v.01", 0, 0 } };
static const MiraOp mira_ops_f_242[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_242_f0, 1 } };
static const char *const mira_tags_243[] = { "aide", "question", "support", "inconnu" };
static const MiraOp mira_ops_o_243[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M9.6 9.6a2.5 2.5 0 1 1 3.8 2.1c-.9.6-1.4 1.2-1.4 2.1M12 17v.01", 0, 0 } };
static const MiraOp mira_cut_243_f0[] = { { 1, 1.0f, 0.0f, "M9.6 9.6a2.5 2.5 0 1 1 3.8 2.1c-.9.6-1.4 1.2-1.4 2.1M12 17v.01", 0, 0 } };
static const MiraOp mira_ops_f_243[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_243_f0, 1 } };
static const char *const mira_tags_244[] = { "erreur", "attention", "important", "alerte" };
static const MiraOp mira_ops_o_244[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 7.5v5M12 16.25v.01", 0, 0 } };
static const MiraOp mira_cut_244_f0[] = { { 1, 1.0f, 0.0f, "M12 7.5v5M12 16.25v.01", 0, 0 } };
static const MiraOp mira_ops_f_244[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_244_f0, 1 } };
static const char *const mira_tags_245[] = { "attention", "avertissement", "erreur", "danger", "warning" };
static const MiraOp mira_ops_o_245[] = { { 1, 1.0f, 0.0f, "M10.7 4.6a1.5 1.5 0 0 1 2.6 0l7.6 13.2a1.5 1.5 0 0 1-1.3 2.2H5.4a1.5 1.5 0 0 1-1.3-2.2z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 9.5v4M12 16.75v.01", 0, 0 } };
static const MiraOp mira_cut_245_f0[] = { { 1, 1.0f, 0.0f, "M12 9.5v4M12 16.75v.01", 0, 0 } };
static const MiraOp mira_ops_f_245[] = { { 0, 0.0f, 0.0f, "M10.7 4.6a1.5 1.5 0 0 1 2.6 0l7.6 13.2a1.5 1.5 0 0 1-1.3 2.2H5.4a1.5 1.5 0 0 1-1.3-2.2z", mira_cut_245_f0, 1 } };
static const char *const mira_tags_246[] = { "plus d'options", "menu", "davantage", "en cours" };
static const MiraOp mira_ops_o_246[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M8 12h.01M12 12h.01M16 12h.01", 0, 0 } };
static const MiraOp mira_cut_246_f0[] = { { 1, 1.0f, 0.0f, "M8 12h.01M12 12h.01M16 12h.01", 0, 0 } };
static const MiraOp mira_ops_f_246[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_246_f0, 1 } };
static const char *const mira_tags_247[] = { "interdit", "indisponible", "bloqu\303\251", "d\303\251sactiv\303\251" };
static const MiraOp mira_ops_o_247[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M5.64 5.64 18.36 18.36", 0, 0 } };
static const MiraOp mira_cut_247_f0[] = { { 1, 1.0f, 1.4f, "M5.64 5.64 18.36 18.36", 0, 0 } };
static const MiraOp mira_ops_f_247[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_247_f0, 1 }, { 1, 1.0f, 0.0f, "M5.64 5.64 18.36 18.36", 0, 0 } };
static const char *const mira_tags_248[] = { "id\303\251e", "astuce", "conseil", "inspiration" };
static const MiraOp mira_ops_o_248[] = { { 1, 1.0f, 0.0f, "M12 3a6 6 0 0 1 3.5 10.9c-.8.6-1.5 1.5-1.5 2.6H10c0-1.1-.7-2-1.5-2.6A6 6 0 0 1 12 3z", 0, 0 }, { 1, 1.0f, 0.0f, "M10 19.5h4M10.5 21.5h3", 0, 0 } };
static const MiraOp mira_ops_f_248[] = { { 0, 0.0f, 0.0f, "M12 3a6 6 0 0 1 3.5 10.9c-.8.6-1.5 1.5-1.5 2.6H10c0-1.1-.7-2-1.5-2.6A6 6 0 0 1 12 3z", 0, 0 }, { 1, 1.0f, 0.0f, "M10 19.5h4M10.5 21.5h3", 0, 0 } };
static const char *const mira_tags_249[] = { "jauge", "vitesse", "performance", "compteur", "mesure" };
static const MiraOp mira_ops_o_249[] = { { 0, 0.0f, 0.0f, "M10.5 17a1.5 1.5 0 1 0 3 0a1.5 1.5 0 1 0 -3 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M4.5 17a8 8 0 1 1 15 0M12 17l3-5", 0, 0 } };
static const MiraOp mira_ops_f_249[] = { { 0, 0.0f, 0.0f, "M10.5 17a1.5 1.5 0 1 0 3 0a1.5 1.5 0 1 0 -3 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M4.5 17a8 8 0 1 1 15 0M12 17l3-5", 0, 0 } };
static const char *const mira_tags_250[] = { "chargement", "patienter", "en cours", "presque fini" };
static const MiraOp mira_ops_o_250[] = { { 1, 1.0f, 0.0f, "M8 3.5h8V7a4 4 0 0 1-1.6 3.2L12 12l-2.4-1.8A4 4 0 0 1 8 7z", 0, 0 }, { 0, 0.0f, 0.0f, "M8 20.5h8V17a4 4 0 0 0-1.6-3.2L12 12l-2.4 1.8A4 4 0 0 0 8 17z", 0, 0 }, { 1, 1.0f, 0.0f, "M6.5 3.5h11M6.5 20.5h11", 0, 0 } };
static const MiraOp mira_ops_f_250[] = { { 0, 0.0f, 0.0f, "M8 3.5h8V7a4 4 0 0 1-1.6 3.2L12 12l-2.4-1.8A4 4 0 0 1 8 7z", 0, 0 }, { 0, 0.0f, 0.0f, "M8 20.5h8V17a4 4 0 0 0-1.6-3.2L12 12l-2.4 1.8A4 4 0 0 0 8 17z", 0, 0 }, { 1, 1.0f, 0.0f, "M6.5 3.5h11M6.5 20.5h11", 0, 0 } };
static const char *const mira_tags_251[] = { "lecture", "lire", "d\303\251marrer", "vid\303\251o" };
static const MiraOp mira_ops_o_251[] = { { 1, 1.0f, 0.0f, "M6.5 4.5v15l12-7.5z", 0, 0 } };
static const MiraOp mira_ops_f_251[] = { { 0, 0.0f, 0.0f, "M6.5 4.5v15l12-7.5z", 0, 0 }, { 1, 1.0f, -1.5f, "M6.5 4.5v15l12-7.5z", 0, 0 } };
static const char *const mira_tags_252[] = { "pause", "suspendre", "arr\303\252ter" };
static const MiraOp mira_ops_o_252[] = { { 1, 1.0f, 0.0f, "M7 5h3.5v14H7zM13.5 5H17v14h-3.5z", 0, 0 } };
static const MiraOp mira_ops_f_252[] = { { 0, 0.0f, 0.0f, "M7 5h3.5v14H7zM13.5 5H17v14h-3.5z", 0, 0 }, { 1, 1.0f, -1.5f, "M7 5h3.5v14H7zM13.5 5H17v14h-3.5z", 0, 0 } };
static const char *const mira_tags_253[] = { "stop", "arr\303\252ter", "fin" };
static const MiraOp mira_ops_o_253[] = { { 1, 1.0f, 0.0f, "M7 5h10a2 2 0 0 1 2 2v10a2 2 0 0 1 -2 2h-10a2 2 0 0 1 -2 -2v-10a2 2 0 0 1 2 -2z", 0, 0 } };
static const MiraOp mira_ops_f_253[] = { { 0, 0.0f, 0.0f, "M7 5h10a2 2 0 0 1 2 2v10a2 2 0 0 1 -2 2h-10a2 2 0 0 1 -2 -2v-10a2 2 0 0 1 2 -2z", 0, 0 }, { 1, 1.0f, -1.5f, "M7 5h10a2 2 0 0 1 2 2v10a2 2 0 0 1 -2 2h-10a2 2 0 0 1 -2 -2v-10a2 2 0 0 1 2 -2z", 0, 0 } };
static const char *const mira_tags_254[] = { "reculer", "pr\303\251c\303\251dent", "rembobiner", "piste pr\303\251c\303\251dente" };
static const MiraOp mira_ops_o_254[] = { { 1, 1.0f, 0.0f, "M11.5 6 4 12l7.5 6zM20 6l-7.5 6 7.5 6z", 0, 0 } };
static const MiraOp mira_ops_f_254[] = { { 0, 0.0f, 0.0f, "M11.5 6 4 12l7.5 6zM20 6l-7.5 6 7.5 6z", 0, 0 }, { 1, 1.0f, -1.5f, "M11.5 6 4 12l7.5 6zM20 6l-7.5 6 7.5 6z", 0, 0 } };
static const char *const mira_tags_255[] = { "avancer", "suivant", "avance rapide", "piste suivante" };
static const MiraOp mira_ops_o_255[] = { { 1, 1.0f, 0.0f, "M4 6l7.5 6L4 18zM12.5 6l7.5 6-7.5 6z", 0, 0 } };
static const MiraOp mira_ops_f_255[] = { { 0, 0.0f, 0.0f, "M4 6l7.5 6L4 18zM12.5 6l7.5 6-7.5 6z", 0, 0 }, { 1, 1.0f, -1.5f, "M4 6l7.5 6L4 18zM12.5 6l7.5 6-7.5 6z", 0, 0 } };
static const char *const mira_tags_256[] = { "d\303\251but", "piste pr\303\251c\303\251dente", "revenir au d\303\251but" };
static const MiraOp mira_ops_o_256[] = { { 1, 1.0f, 0.0f, "M6 6v12M18 6l-9 6 9 6z", 0, 0 } };
static const MiraOp mira_ops_f_256[] = { { 1, 1.0f, 0.0f, "M6 6v12M18 6l-9 6 9 6z", 0, 0 } };
static const char *const mira_tags_257[] = { "fin", "piste suivante", "aller \303\240 la fin" };
static const MiraOp mira_ops_o_257[] = { { 1, 1.0f, 0.0f, "M18 6v12M6 6l9 6-9 6z", 0, 0 } };
static const MiraOp mira_ops_f_257[] = { { 1, 1.0f, 0.0f, "M18 6v12M6 6l9 6-9 6z", 0, 0 } };
static const char *const mira_tags_258[] = { "vid\303\251o", "lecteur", "film", "regarder", "youtube" };
static const MiraOp mira_ops_o_258[] = { { 1, 1.0f, 0.0f, "M5.5 5h13a2.5 2.5 0 0 1 2.5 2.5v9a2.5 2.5 0 0 1 -2.5 2.5h-13a2.5 2.5 0 0 1 -2.5 -2.5v-9a2.5 2.5 0 0 1 2.5 -2.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M10 9v6l5-3z", 0, 0 } };
static const MiraOp mira_cut_258_f0[] = { { 1, 1.0f, 0.0f, "M10 9v6l5-3z", 0, 0 } };
static const MiraOp mira_ops_f_258[] = { { 0, 0.0f, 0.0f, "M5.5 5h13a2.5 2.5 0 0 1 2.5 2.5v9a2.5 2.5 0 0 1 -2.5 2.5h-13a2.5 2.5 0 0 1 -2.5 -2.5v-9a2.5 2.5 0 0 1 2.5 -2.5z", mira_cut_258_f0, 1 } };
static const char *const mira_tags_259[] = { "enregistrer", "rec", "capture", "en direct" };
static const MiraOp mira_ops_o_259[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 0, 0.0f, 0.0f, "M8 12a4 4 0 1 0 8 0a4 4 0 1 0 -8 0z", 0, 0 } };
static const MiraOp mira_ops_f_259[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 0, 0.0f, 0.0f, "M8 12a4 4 0 1 0 8 0a4 4 0 1 0 -8 0z", 0, 0 } };
static const char *const mira_tags_260[] = { "al\303\251atoire", "m\303\251langer", "lecture al\303\251atoire" };
static const MiraOp mira_ops_o_260[] = { { 1, 1.0f, 0.0f, "M4 7h2.5a5 5 0 0 1 4 2l3 6a5 5 0 0 0 4 2H20M17.5 14.5 20 17l-2.5 2.5M4 17h2.5a5 5 0 0 0 4-2l.5-1M13.5 10l.5-1a5 5 0 0 1 4-2H20M17.5 4.5 20 7l-2.5 2.5", 0, 0 } };
static const MiraOp mira_ops_f_260[] = { { 1, 1.0f, 0.0f, "M4 7h2.5a5 5 0 0 1 4 2l3 6a5 5 0 0 0 4 2H20M17.5 14.5 20 17l-2.5 2.5M4 17h2.5a5 5 0 0 0 4-2l.5-1M13.5 10l.5-1a5 5 0 0 1 4-2H20M17.5 4.5 20 7l-2.5 2.5", 0, 0 } };
static const char *const mira_tags_261[] = { "r\303\251p\303\251ter", "boucle", "en boucle", "loop" };
static const MiraOp mira_ops_o_261[] = { { 1, 1.0f, 0.0f, "M5 11V9.5A2.5 2.5 0 0 1 7.5 7H19M16.5 4.5 19 7l-2.5 2.5M19 13v1.5a2.5 2.5 0 0 1-2.5 2.5H5M7.5 19.5 5 17l2.5-2.5", 0, 0 } };
static const MiraOp mira_ops_f_261[] = { { 1, 1.0f, 0.0f, "M5 11V9.5A2.5 2.5 0 0 1 7.5 7H19M16.5 4.5 19 7l-2.5 2.5M19 13v1.5a2.5 2.5 0 0 1-2.5 2.5H5M7.5 19.5 5 17l2.5-2.5", 0, 0 } };
static const char *const mira_tags_262[] = { "son", "volume", "haut-parleur", "audio" };
static const MiraOp mira_ops_o_262[] = { { 1, 1.0f, 0.0f, "M4 9.5h3l5-4v13l-5-4H4z", 0, 0 }, { 1, 1.0f, 0.0f, "M15.5 9a4.5 4.5 0 0 1 0 6M18.5 6.5a8 8 0 0 1 0 11", 0, 0 } };
static const MiraOp mira_ops_f_262[] = { { 0, 0.0f, 0.0f, "M4 9.5h3l5-4v13l-5-4H4z", 0, 0 }, { 1, 1.0f, 0.0f, "M15.5 9a4.5 4.5 0 0 1 0 6M18.5 6.5a8 8 0 0 1 0 11", 0, 0 } };
static const char *const mira_tags_263[] = { "muet", "son coup\303\251", "silence", "mute" };
static const MiraOp mira_ops_o_263[] = { { 1, 1.0f, 0.0f, "M4 9.5h3l5-4v13l-5-4H4z", 0, 0 }, { 1, 1.0f, 0.0f, "M15.5 9.5l5 5M20.5 9.5l-5 5", 0, 0 } };
static const MiraOp mira_ops_f_263[] = { { 0, 0.0f, 0.0f, "M4 9.5h3l5-4v13l-5-4H4z", 0, 0 }, { 1, 1.0f, 0.0f, "M15.5 9.5l5 5M20.5 9.5l-5 5", 0, 0 } };
static const char *const mira_tags_264[] = { "micro", "dict\303\251e", "enregistrer", "voix" };
static const MiraOp mira_ops_o_264[] = { { 1, 1.0f, 0.0f, "M9 5a3 3 0 0 1 6 0v6a3 3 0 0 1-6 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M6 11.5a6 6 0 0 0 12 0M12 17.5V21M9 21h6", 0, 0 } };
static const MiraOp mira_ops_f_264[] = { { 0, 0.0f, 0.0f, "M9 5a3 3 0 0 1 6 0v6a3 3 0 0 1-6 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M6 11.5a6 6 0 0 0 12 0M12 17.5V21M9 21h6", 0, 0 } };
static const char *const mira_tags_265[] = { "micro coup\303\251", "muet", "silence" };
static const MiraOp mira_ops_o_265[] = { { 1, 1.0f, 0.0f, "M9 5a3 3 0 0 1 6 0v6a3 3 0 0 1-6 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M6 11.5a6 6 0 0 0 12 0M12 17.5V21M9 21h6M4 4l16 16", 0, 0 } };
static const MiraOp mira_cut_265_f0[] = { { 1, 1.0f, 1.4f, "M6 11.5a6 6 0 0 0 12 0M12 17.5V21M9 21h6M4 4l16 16", 0, 0 } };
static const MiraOp mira_ops_f_265[] = { { 0, 0.0f, 0.0f, "M9 5a3 3 0 0 1 6 0v6a3 3 0 0 1-6 0z", mira_cut_265_f0, 1 }, { 1, 1.0f, 0.0f, "M6 11.5a6 6 0 0 0 12 0M12 17.5V21M9 21h6M4 4l16 16", 0, 0 } };
static const char *const mira_tags_266[] = { "appareil photo", "capturer", "prendre une photo" };
static const MiraOp mira_ops_o_266[] = { { 1, 1.0f, 0.0f, "M3.5 8.5A1.5 1.5 0 0 1 5 7h2.6l1.4-2h6l1.4 2H19a1.5 1.5 0 0 1 1.5 1.5v9A1.5 1.5 0 0 1 19 19H5a1.5 1.5 0 0 1-1.5-1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M8.5 12.5a3.5 3.5 0 1 0 7 0a3.5 3.5 0 1 0 -7 0z", 0, 0 } };
static const MiraOp mira_cut_266_f0[] = { { 1, 1.0f, 0.0f, "M8.5 12.5a3.5 3.5 0 1 0 7 0a3.5 3.5 0 1 0 -7 0z", 0, 0 } };
static const MiraOp mira_ops_f_266[] = { { 0, 0.0f, 0.0f, "M3.5 8.5A1.5 1.5 0 0 1 5 7h2.6l1.4-2h6l1.4 2H19a1.5 1.5 0 0 1 1.5 1.5v9A1.5 1.5 0 0 1 19 19H5a1.5 1.5 0 0 1-1.5-1.5z", mira_cut_266_f0, 1 } };
static const char *const mira_tags_267[] = { "image", "photo", "galerie", "illustration" };
static const MiraOp mira_ops_o_267[] = { { 1, 1.0f, 0.0f, "M3.5 6.5A2 2 0 0 1 5.5 4.5h13a2 2 0 0 1 2 2v11a2 2 0 0 1-2 2h-13a2 2 0 0 1-2-2z", 0, 0 }, { 1, 1.0f, 0.0f, "M3.5 16.5l4.5-4.5 4 4 3-3 5.5 5.5M16 9v.01", 0, 0 } };
static const MiraOp mira_cut_267_f0[] = { { 1, 1.0f, 0.0f, "M3.5 16.5l4.5-4.5 4 4 3-3 5.5 5.5M16 9v.01", 0, 0 } };
static const MiraOp mira_ops_f_267[] = { { 0, 0.0f, 0.0f, "M3.5 6.5A2 2 0 0 1 5.5 4.5h13a2 2 0 0 1 2 2v11a2 2 0 0 1-2 2h-13a2 2 0 0 1-2-2z", mira_cut_267_f0, 1 } };
static const char *const mira_tags_268[] = { "musique", "note", "audio", "chanson" };
static const MiraOp mira_ops_o_268[] = { { 0, 0.0f, 0.0f, "M4 18.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM14 15.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 18.5V5l10-2v12.5", 0, 0 } };
static const MiraOp mira_ops_f_268[] = { { 0, 0.0f, 0.0f, "M4 18.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM14 15.5a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 18.5V5l10-2v12.5", 0, 0 } };
static const char *const mira_tags_269[] = { "forme d'onde", "audio", "son", "podcast", "\303\251galiseur" };
static const MiraOp mira_ops_o_269[] = { { 1, 1.0f, 0.0f, "M4 10v4M8 6v12M12 3v18M16 8v8M20 10v4", 0, 0 } };
static const MiraOp mira_ops_f_269[] = { { 1, 1.0f, 0.0f, "M4 10v4M8 6v12M12 3v18M16 8v8M20 10v4", 0, 0 } };
static const char *const mira_tags_270[] = { "film", "cin\303\251ma", "vid\303\251o", "pellicule" };
static const MiraOp mira_ops_o_270[] = { { 1, 1.0f, 0.0f, "M5 4h14a2 2 0 0 1 2 2v12a2 2 0 0 1 -2 2h-14a2 2 0 0 1 -2 -2v-12a2 2 0 0 1 2 -2z", 0, 0 }, { 1, 1.0f, 0.0f, "M7 4v16M17 4v16M3 8h4M3 12h4M3 16h4M17 8h4M17 12h4M17 16h4", 0, 0 } };
static const MiraOp mira_cut_270_f0[] = { { 1, 1.0f, 0.0f, "M7 4v16M17 4v16M3 8h4M3 12h4M3 16h4M17 8h4M17 12h4M17 16h4", 0, 0 } };
static const MiraOp mira_ops_f_270[] = { { 0, 0.0f, 0.0f, "M5 4h14a2 2 0 0 1 2 2v12a2 2 0 0 1 -2 2h-14a2 2 0 0 1 -2 -2v-12a2 2 0 0 1 2 -2z", mira_cut_270_f0, 1 } };
static const char *const mira_tags_271[] = { "soleil", "mode clair", "luminosit\303\251", "jour" };
static const MiraOp mira_ops_o_271[] = { { 1, 1.0f, 0.0f, "M8 12a4 4 0 1 0 8 0a4 4 0 1 0 -8 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 2.5v2.5M12 19v2.5M2.5 12H5M19 12h2.5M5.3 5.3l1.8 1.8M16.9 16.9l1.8 1.8M5.3 18.7l1.8-1.8M16.9 7.1l1.8-1.8", 0, 0 } };
static const MiraOp mira_ops_f_271[] = { { 0, 0.0f, 0.0f, "M8 12a4 4 0 1 0 8 0a4 4 0 1 0 -8 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 2.5v2.5M12 19v2.5M2.5 12H5M19 12h2.5M5.3 5.3l1.8 1.8M16.9 16.9l1.8 1.8M5.3 18.7l1.8-1.8M16.9 7.1l1.8-1.8", 0, 0 } };
static const char *const mira_tags_272[] = { "nuage", "m\303\251t\303\251o", "icloud", "synchronisation" };
static const MiraOp mira_ops_o_272[] = { { 1, 1.0f, 0.0f, "M7 18.5h10.5a4 4 0 0 0 .7-7.94A6 6 0 0 0 6.6 9.9 4.4 4.4 0 0 0 7 18.5z", 0, 0 } };
static const MiraOp mira_ops_f_272[] = { { 0, 0.0f, 0.0f, "M7 18.5h10.5a4 4 0 0 0 .7-7.94A6 6 0 0 0 6.6 9.9 4.4 4.4 0 0 0 7 18.5z", 0, 0 } };
static const char *const mira_tags_273[] = { "t\303\251l\303\251verser", "sauvegarde cloud", "upload", "envoyer vers le cloud" };
static const MiraOp mira_ops_o_273[] = { { 1, 1.0f, 0.0f, "M7 18.5h10.5a4 4 0 0 0 .7-7.94A6 6 0 0 0 6.6 9.9 4.4 4.4 0 0 0 7 18.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 16v-6M9.5 12.5 12 10l2.5 2.5", 0, 0 } };
static const MiraOp mira_cut_273_f0[] = { { 1, 1.0f, 0.0f, "M12 16v-6M9.5 12.5 12 10l2.5 2.5", 0, 0 } };
static const MiraOp mira_ops_f_273[] = { { 0, 0.0f, 0.0f, "M7 18.5h10.5a4 4 0 0 0 .7-7.94A6 6 0 0 0 6.6 9.9 4.4 4.4 0 0 0 7 18.5z", mira_cut_273_f0, 1 } };
static const char *const mira_tags_274[] = { "t\303\251l\303\251charger du cloud", "restaurer", "download", "synchroniser" };
static const MiraOp mira_ops_o_274[] = { { 1, 1.0f, 0.0f, "M7 18.5h10.5a4 4 0 0 0 .7-7.94A6 6 0 0 0 6.6 9.9 4.4 4.4 0 0 0 7 18.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 10v6M9.5 13.5 12 16l2.5-2.5", 0, 0 } };
static const MiraOp mira_cut_274_f0[] = { { 1, 1.0f, 0.0f, "M12 10v6M9.5 13.5 12 16l2.5-2.5", 0, 0 } };
static const MiraOp mira_ops_f_274[] = { { 0, 0.0f, 0.0f, "M7 18.5h10.5a4 4 0 0 0 .7-7.94A6 6 0 0 0 6.6 9.9 4.4 4.4 0 0 0 7 18.5z", mira_cut_274_f0, 1 } };
static const char *const mira_tags_275[] = { "pluie", "averse", "m\303\251t\303\251o" };
static const MiraOp mira_ops_o_275[] = { { 1, 1.0f, 0.0f, "M7 16h10.5a4 4 0 0 0 .7-7.94A6 6 0 0 0 6.6 7.4 4.4 4.4 0 0 0 7 16z", 0, 0 }, { 1, 1.0f, 0.0f, "M8.5 18.5v2.5M12 18.5v2.5M15.5 18.5v2.5", 0, 0 } };
static const MiraOp mira_ops_f_275[] = { { 0, 0.0f, 0.0f, "M7 16h10.5a4 4 0 0 0 .7-7.94A6 6 0 0 0 6.6 7.4 4.4 4.4 0 0 0 7 16z", 0, 0 }, { 1, 1.0f, 0.0f, "M8.5 18.5v2.5M12 18.5v2.5M15.5 18.5v2.5", 0, 0 } };
static const char *const mira_tags_276[] = { "orage", "\303\251clair", "temp\303\252te", "m\303\251t\303\251o" };
static const MiraOp mira_ops_o_276[] = { { 1, 1.0f, 0.0f, "M7 16h10.5a4 4 0 0 0 .7-7.94A6 6 0 0 0 6.6 7.4 4.4 4.4 0 0 0 7 16z", 0, 0 }, { 1, 1.0f, 0.0f, "M13 16l-2 3h3l-2 3", 0, 0 } };
static const MiraOp mira_ops_f_276[] = { { 0, 0.0f, 0.0f, "M7 16h10.5a4 4 0 0 0 .7-7.94A6 6 0 0 0 6.6 7.4 4.4 4.4 0 0 0 7 16z", 0, 0 }, { 1, 1.0f, 0.0f, "M13 16l-2 3h3l-2 3", 0, 0 } };
static const char *const mira_tags_277[] = { "neige", "froid", "flocon", "hiver", "climatisation" };
static const MiraOp mira_ops_o_277[] = { { 1, 1.0f, 0.0f, "M12 3v18M4.2 7.5l15.6 9M4.2 16.5l15.6-9M12 3l-2.5 1.5M12 3l2.5 1.5M12 21l-2.5-1.5M12 21l2.5-1.5", 0, 0 } };
static const MiraOp mira_ops_f_277[] = { { 1, 1.0f, 0.0f, "M12 3v18M4.2 7.5l15.6 9M4.2 16.5l15.6-9M12 3l-2.5 1.5M12 3l2.5 1.5M12 21l-2.5-1.5M12 21l2.5-1.5", 0, 0 } };
static const char *const mira_tags_278[] = { "vent", "air", "brise", "ventilation" };
static const MiraOp mira_ops_o_278[] = { { 1, 1.0f, 0.0f, "M3 8h11a3 3 0 1 0-3-3M3 12h15a3 3 0 1 1-3 3M3 16h7a2.5 2.5 0 1 1-2.5 2.5", 0, 0 } };
static const MiraOp mira_ops_f_278[] = { { 1, 1.0f, 0.0f, "M3 8h11a3 3 0 1 0-3-3M3 12h15a3 3 0 1 1-3 3M3 16h7a2.5 2.5 0 1 1-2.5 2.5", 0, 0 } };
static const char *const mira_tags_279[] = { "temp\303\251rature", "chaleur", "fi\303\250vre", "degr\303\251s" };
static const MiraOp mira_ops_o_279[] = { { 1, 1.0f, 0.0f, "M9.5 14.5V5a2.5 2.5 0 0 1 5 0v9.5a4 4 0 1 1-5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 8.5v8.5", 0, 0 } };
static const MiraOp mira_cut_279_f0[] = { { 1, 1.0f, 0.0f, "M12 8.5v8.5", 0, 0 } };
static const MiraOp mira_ops_f_279[] = { { 0, 0.0f, 0.0f, "M9.5 14.5V5a2.5 2.5 0 0 1 5 0v9.5a4 4 0 1 1-5 0z", mira_cut_279_f0, 1 } };
static const char *const mira_tags_280[] = { "parapluie", "pluie", "protection", "assurance" };
static const MiraOp mira_ops_o_280[] = { { 1, 1.0f, 0.0f, "M12 3a9 9 0 0 1 9 9H3a9 9 0 0 1 9-9z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 12v6.5a2 2 0 0 0 4 0", 0, 0 } };
static const MiraOp mira_ops_f_280[] = { { 0, 0.0f, 0.0f, "M12 3a9 9 0 0 1 9 9H3a9 9 0 0 1 9-9z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 12v6.5a2 2 0 0 0 4 0", 0, 0 } };
static const char *const mira_tags_281[] = { "goutte", "eau", "pluie", "humidit\303\251", "encre" };
static const MiraOp mira_ops_o_281[] = { { 1, 1.0f, 0.0f, "M12 3.5s6 6.3 6 10.5a6 6 0 0 1-12 0c0-4.2 6-10.5 6-10.5z", 0, 0 } };
static const MiraOp mira_ops_f_281[] = { { 0, 0.0f, 0.0f, "M12 3.5s6 6.3 6 10.5a6 6 0 0 1-12 0c0-4.2 6-10.5 6-10.5z", 0, 0 }, { 1, 1.0f, -1.5f, "M12 3.5s6 6.3 6 10.5a6 6 0 0 1-12 0c0-4.2 6-10.5 6-10.5z", 0, 0 } };
static const char *const mira_tags_282[] = { "feu", "tendance", "populaire", "chaud", "flamme" };
static const MiraOp mira_ops_o_282[] = { { 1, 1.0f, 0.0f, "M12 20a6 6 0 0 0 6-6c0-3.5-2.5-5.5-3.5-8.5-1 1.5-1.5 2.5-1.5 4-1-1-1.5-3-1.5-5.5C8.5 6 6 9 6 14a6 6 0 0 0 6 6z", 0, 0 } };
static const MiraOp mira_ops_f_282[] = { { 0, 0.0f, 0.0f, "M12 20a6 6 0 0 0 6-6c0-3.5-2.5-5.5-3.5-8.5-1 1.5-1.5 2.5-1.5 4-1-1-1.5-3-1.5-5.5C8.5 6 6 9 6 14a6 6 0 0 0 6 6z", 0, 0 }, { 1, 1.0f, -1.5f, "M12 20a6 6 0 0 0 6-6c0-3.5-2.5-5.5-3.5-8.5-1 1.5-1.5 2.5-1.5 4-1-1-1.5-3-1.5-5.5C8.5 6 6 9 6 14a6 6 0 0 0 6 6z", 0, 0 } };
static const char *const mira_tags_283[] = { "cercle", "rond", "point", "statut" };
static const MiraOp mira_ops_o_283[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 } };
static const MiraOp mira_ops_f_283[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, -1.5f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 } };
static const char *const mira_tags_284[] = { "carr\303\251", "case", "arr\303\252t" };
static const MiraOp mira_ops_o_284[] = { { 1, 1.0f, 0.0f, "M6.5 3.5h11a3 3 0 0 1 3 3v11a3 3 0 0 1 -3 3h-11a3 3 0 0 1 -3 -3v-11a3 3 0 0 1 3 -3z", 0, 0 } };
static const MiraOp mira_ops_f_284[] = { { 0, 0.0f, 0.0f, "M6.5 3.5h11a3 3 0 0 1 3 3v11a3 3 0 0 1 -3 3h-11a3 3 0 0 1 -3 -3v-11a3 3 0 0 1 3 -3z", 0, 0 }, { 1, 1.0f, -1.5f, "M6.5 3.5h11a3 3 0 0 1 3 3v11a3 3 0 0 1 -3 3h-11a3 3 0 0 1 -3 -3v-11a3 3 0 0 1 3 -3z", 0, 0 } };
static const char *const mira_tags_285[] = { "triangle", "delta", "avertissement" };
static const MiraOp mira_ops_o_285[] = { { 1, 1.0f, 0.0f, "M12 4.5 20.5 19H3.5z", 0, 0 } };
static const MiraOp mira_ops_f_285[] = { { 0, 0.0f, 0.0f, "M12 4.5 20.5 19H3.5z", 0, 0 }, { 1, 1.0f, -1.5f, "M12 4.5 20.5 19H3.5z", 0, 0 } };
static const char *const mira_tags_286[] = { "losange", "diamant", "joyau" };
static const MiraOp mira_ops_o_286[] = { { 1, 1.0f, 0.0f, "M12 3l9 9-9 9-9-9z", 0, 0 } };
static const MiraOp mira_ops_f_286[] = { { 0, 0.0f, 0.0f, "M12 3l9 9-9 9-9-9z", 0, 0 }, { 1, 1.0f, -1.5f, "M12 3l9 9-9 9-9-9z", 0, 0 } };
static const char *const mira_tags_287[] = { "hexagone", "polygone", "badge" };
static const MiraOp mira_ops_o_287[] = { { 1, 1.0f, 0.0f, "M12 3l7.8 4.5v9L12 21l-7.8-4.5v-9z", 0, 0 } };
static const MiraOp mira_ops_f_287[] = { { 0, 0.0f, 0.0f, "M12 3l7.8 4.5v9L12 21l-7.8-4.5v-9z", 0, 0 }, { 1, 1.0f, -1.5f, "M12 3l7.8 4.5v9L12 21l-7.8-4.5v-9z", 0, 0 } };
static const char *const mira_tags_288[] = { "capsule", "pilule", "bouton", "g\303\251lule" };
static const MiraOp mira_ops_o_288[] = { { 1, 1.0f, 0.0f, "M8 7h8a5 5 0 0 1 5 5v0a5 5 0 0 1 -5 5h-8a5 5 0 0 1 -5 -5v0a5 5 0 0 1 5 -5z", 0, 0 } };
static const MiraOp mira_ops_f_288[] = { { 0, 0.0f, 0.0f, "M8 7h8a5 5 0 0 1 5 5v0a5 5 0 0 1 -5 5h-8a5 5 0 0 1 -5 -5v0a5 5 0 0 1 5 -5z", 0, 0 }, { 1, 1.0f, -1.5f, "M8 7h8a5 5 0 0 1 5 5v0a5 5 0 0 1 -5 5h-8a5 5 0 0 1 -5 -5v0a5 5 0 0 1 5 -5z", 0, 0 } };
static const char *const mira_tags_289[] = { "rectangle", "cadre", "paysage" };
static const MiraOp mira_ops_o_289[] = { { 1, 1.0f, 0.0f, "M5.5 5.5h13a2.5 2.5 0 0 1 2.5 2.5v8a2.5 2.5 0 0 1 -2.5 2.5h-13a2.5 2.5 0 0 1 -2.5 -2.5v-8a2.5 2.5 0 0 1 2.5 -2.5z", 0, 0 } };
static const MiraOp mira_ops_f_289[] = { { 0, 0.0f, 0.0f, "M5.5 5.5h13a2.5 2.5 0 0 1 2.5 2.5v8a2.5 2.5 0 0 1 -2.5 2.5h-13a2.5 2.5 0 0 1 -2.5 -2.5v-8a2.5 2.5 0 0 1 2.5 -2.5z", 0, 0 }, { 1, 1.0f, -1.5f, "M5.5 5.5h13a2.5 2.5 0 0 1 2.5 2.5v8a2.5 2.5 0 0 1 -2.5 2.5h-13a2.5 2.5 0 0 1 -2.5 -2.5v-8a2.5 2.5 0 0 1 2.5 -2.5z", 0, 0 } };
static const char *const mira_tags_290[] = { "sceau", "badge", "certifi\303\251", "macaron" };
static const MiraOp mira_ops_o_290[] = { { 1, 1.0f, 0.0f, "M12 2.5L15.18 4.33L18.72 5.28L19.67 8.82L21.5 12L19.67 15.18L18.72 18.72L15.18 19.67L12 21.5L8.82 19.67L5.28 18.72L4.33 15.18L2.5 12L4.33 8.82L5.28 5.28L8.82 4.33z", 0, 0 } };
static const MiraOp mira_ops_f_290[] = { { 0, 0.0f, 0.0f, "M12 2.5L15.18 4.33L18.72 5.28L19.67 8.82L21.5 12L19.67 15.18L18.72 18.72L15.18 19.67L12 21.5L8.82 19.67L5.28 18.72L4.33 15.18L2.5 12L4.33 8.82L5.28 5.28L8.82 4.33z", 0, 0 }, { 1, 1.0f, -1.5f, "M12 2.5L15.18 4.33L18.72 5.28L19.67 8.82L21.5 12L19.67 15.18L18.72 18.72L15.18 19.67L12 21.5L8.82 19.67L5.28 18.72L4.33 15.18L2.5 12L4.33 8.82L5.28 5.28L8.82 4.33z", 0, 0 } };
static const char *const mira_tags_291[] = { "contraste", "th\303\250me", "moiti\303\251", "apparence", "clair sombre" };
static const MiraOp mira_ops_o_291[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 0, 0.0f, 0.0f, "M12 3a9 9 0 0 0 0 18z", 0, 0 } };
static const MiraOp mira_ops_f_291[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 0, 0.0f, 0.0f, "M12 3a9 9 0 0 0 0 18z", 0, 0 } };
static const char *const mira_tags_292[] = { "applications", "lanceur", "grille de points", "menu" };
static const MiraOp mira_ops_o_292[] = { { 1, 1.0f, 0.0f, "M3.75 5.5a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0zM10.25 5.5a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0zM16.75 5.5a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0zM3.75 12a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0zM10.25 12a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0zM16.75 12a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0zM3.75 18.5a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0zM10.25 18.5a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0zM16.75 18.5a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0z", 0, 0 } };
static const MiraOp mira_ops_f_292[] = { { 0, 0.0f, 0.0f, "M3.75 5.5a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0zM10.25 5.5a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0zM16.75 5.5a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0zM3.75 12a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0zM10.25 12a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0zM16.75 12a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0zM3.75 18.5a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0zM10.25 18.5a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0zM16.75 18.5a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0z", 0, 0 } };
static const char *const mira_tags_293[] = { "tableau de bord", "disposition", "dashboard", "mise en page" };
static const MiraOp mira_ops_o_293[] = { { 1, 1.0f, 0.0f, "M4.5 4h5a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-5a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5zM14.5 4h5a1.5 1.5 0 0 1 1.5 1.5v13a1.5 1.5 0 0 1 -1.5 1.5h-5a1.5 1.5 0 0 1 -1.5 -1.5v-13a1.5 1.5 0 0 1 1.5 -1.5zM4.5 13h5a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-5a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5z", 0, 0 } };
static const MiraOp mira_ops_f_293[] = { { 0, 0.0f, 0.0f, "M4.5 4h5a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-5a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5zM14.5 4h5a1.5 1.5 0 0 1 1.5 1.5v13a1.5 1.5 0 0 1 -1.5 1.5h-5a1.5 1.5 0 0 1 -1.5 -1.5v-13a1.5 1.5 0 0 1 1.5 -1.5zM4.5 13h5a1.5 1.5 0 0 1 1.5 1.5v4a1.5 1.5 0 0 1 -1.5 1.5h-5a1.5 1.5 0 0 1 -1.5 -1.5v-4a1.5 1.5 0 0 1 1.5 -1.5z", 0, 0 } };
static const char *const mira_tags_294[] = { "colonnes", "s\303\251parer", "vue divis\303\251e", "c\303\264te \303\240 c\303\264te" };
static const MiraOp mira_ops_o_294[] = { { 1, 1.0f, 0.0f, "M5.5 5h13a2.5 2.5 0 0 1 2.5 2.5v9a2.5 2.5 0 0 1 -2.5 2.5h-13a2.5 2.5 0 0 1 -2.5 -2.5v-9a2.5 2.5 0 0 1 2.5 -2.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 5v14", 0, 0 } };
static const MiraOp mira_cut_294_f0[] = { { 1, 1.0f, 0.0f, "M12 5v14", 0, 0 } };
static const MiraOp mira_ops_f_294[] = { { 0, 0.0f, 0.0f, "M5.5 5h13a2.5 2.5 0 0 1 2.5 2.5v9a2.5 2.5 0 0 1 -2.5 2.5h-13a2.5 2.5 0 0 1 -2.5 -2.5v-9a2.5 2.5 0 0 1 2.5 -2.5z", mira_cut_294_f0, 1 } };
static const char *const mira_tags_295[] = { "calques", "couches", "empiler", "niveaux" };
static const MiraOp mira_ops_o_295[] = { { 1, 1.0f, 0.0f, "M4 8.5 12 4l8 4.5-8 4.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M4 12.5 12 17l8-4.5M4 16.5 12 21l8-4.5", 0, 0 } };
static const MiraOp mira_ops_f_295[] = { { 0, 0.0f, 0.0f, "M4 8.5 12 4l8 4.5-8 4.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M4 12.5 12 17l8-4.5M4 16.5 12 21l8-4.5", 0, 0 } };
static const char *const mira_tags_296[] = { "superposer", "dupliquer", "copie", "calque" };
static const MiraOp mira_ops_o_296[] = { { 1, 1.0f, 0.0f, "M10.5 8.5h8a2 2 0 0 1 2 2v8a2 2 0 0 1 -2 2h-8a2 2 0 0 1 -2 -2v-8a2 2 0 0 1 2 -2z", 0, 0 }, { 1, 1.0f, 0.0f, "M15.5 8.5V5.5a2 2 0 0 0-2-2h-8a2 2 0 0 0-2 2v8a2 2 0 0 0 2 2h3", 0, 0 } };
static const MiraOp mira_cut_296_f0[] = { { 0, 0.0f, 0.0f, "M10.5 8.5h8a2 2 0 0 1 2 2v8a2 2 0 0 1 -2 2h-8a2 2 0 0 1 -2 -2v-8a2 2 0 0 1 2 -2z", 0, 0 }, { 1, 1.0f, 1.0f, "M10.5 8.5h8a2 2 0 0 1 2 2v8a2 2 0 0 1 -2 2h-8a2 2 0 0 1 -2 -2v-8a2 2 0 0 1 2 -2z", 0, 0 } };
static const MiraOp mira_ops_f_296[] = { { 0, 0.0f, 0.0f, "M15.5 8.5V5.5a2 2 0 0 0-2-2h-8a2 2 0 0 0-2 2v8a2 2 0 0 0 2 2h3v-5a2 2 0 0 1 2-2z", mira_cut_296_f0, 2 }, { 0, 0.0f, 0.0f, "M10.5 8.5h8a2 2 0 0 1 2 2v8a2 2 0 0 1 -2 2h-8a2 2 0 0 1 -2 -2v-8a2 2 0 0 1 2 -2z", 0, 0 } };
static const char *const mira_tags_297[] = { "manette", "jeu", "gamepad", "console" };
static const MiraOp mira_ops_o_297[] = { { 1, 1.0f, 0.0f, "M7 7h10a5 5 0 0 1 5 5.5l-.7 3.6a2.3 2.3 0 0 1-4 1.1L15.6 15H8.4l-1.7 2.2a2.3 2.3 0 0 1-4-1.1L2 12.5A5 5 0 0 1 7 7z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.5 11h3M9 9.5v3M15 10.75v.01M17.25 12.5v.01", 0, 0 } };
static const MiraOp mira_cut_297_f0[] = { { 1, 1.0f, 0.0f, "M7.5 11h3M9 9.5v3M15 10.75v.01M17.25 12.5v.01", 0, 0 } };
static const MiraOp mira_ops_f_297[] = { { 0, 0.0f, 0.0f, "M7 7h10a5 5 0 0 1 5 5.5l-.7 3.6a2.3 2.3 0 0 1-4 1.1L15.6 15H8.4l-1.7 2.2a2.3 2.3 0 0 1-4-1.1L2 12.5A5 5 0 0 1 7 7z", mira_cut_297_f0, 1 } };
static const char *const mira_tags_298[] = { "manette", "xbox", "poign\303\251es", "sticks d\303\251cal\303\251s", "gamepad" };
static const MiraOp mira_ops_o_298[] = { { 1, 1.0f, 0.0f, "M8.5 5.5h7a5 5 0 0 1 4.9 4l1.1 5.8a3 3 0 0 1-5.3 2.2L14.8 15H9.2l-1.4 2.5a3 3 0 0 1-5.3-2.2l1.1-5.8A5 5 0 0 1 8.5 5.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M5.8 9.5a1.7 1.7 0 1 0 3.4 0a1.7 1.7 0 1 0 -3.4 0zM9.3 13.3h2.4M10.5 12.1v2.4M16.5 7.7v.01M18.3 9.5v.01M14.7 9.5v.01M16.5 11.3v.01M12.3 13.3a1.5 1.5 0 1 0 3 0a1.5 1.5 0 1 0 -3 0z", 0, 0 } };
static const MiraOp mira_cut_298_f0[] = { { 1, 1.0f, 0.0f, "M5.8 9.5a1.7 1.7 0 1 0 3.4 0a1.7 1.7 0 1 0 -3.4 0zM9.3 13.3h2.4M10.5 12.1v2.4M16.5 7.7v.01M18.3 9.5v.01M14.7 9.5v.01M16.5 11.3v.01M12.3 13.3a1.5 1.5 0 1 0 3 0a1.5 1.5 0 1 0 -3 0z", 0, 0 } };
static const MiraOp mira_ops_f_298[] = { { 0, 0.0f, 0.0f, "M8.5 5.5h7a5 5 0 0 1 4.9 4l1.1 5.8a3 3 0 0 1-5.3 2.2L14.8 15H9.2l-1.4 2.5a3 3 0 0 1-5.3-2.2l1.1-5.8A5 5 0 0 1 8.5 5.5z", mira_cut_298_f0, 1 } };
static const char *const mira_tags_299[] = { "manette", "playstation", "ps5", "dualsense", "pav\303\251 tactile", "gamepad" };
static const MiraOp mira_ops_o_299[] = { { 1, 1.0f, 0.0f, "M8 5.25h8l2.2 2.4a3.5 3.5 0 0 1 2.4 2.7l1.2 6.2a2.6 2.6 0 0 1-4.9 1.3L15.5 15.25h-7l-1.4 2.6a2.6 2.6 0 0 1-4.9-1.3l1.2-6.2a3.5 3.5 0 0 1 2.4-2.7z", 0, 0 }, { 1, 1.0f, 0.0f, "M10.3 6.75h3.4a0.8 0.8 0 0 1 0.8 0.8v1.4a0.8 0.8 0 0 1 -0.8 0.8h-3.4a0.8 0.8 0 0 1 -0.8 -0.8v-1.4a0.8 0.8 0 0 1 0.8 -0.8zM5.3 10.75h2.4M6.5 9.55v2.4M17.5 9.05v.01M19.2 10.75v.01M15.8 10.75v.01M17.5 12.45v.01M8.2 13.25a1.3 1.3 0 1 0 2.6 0a1.3 1.3 0 1 0 -2.6 0zM13.2 13.25a1.3 1.3 0 1 0 2.6 0a1.3 1.3 0 1 0 -2.6 0z", 0, 0 } };
static const MiraOp mira_cut_299_f0[] = { { 1, 1.0f, 0.0f, "M10.3 6.75h3.4a0.8 0.8 0 0 1 0.8 0.8v1.4a0.8 0.8 0 0 1 -0.8 0.8h-3.4a0.8 0.8 0 0 1 -0.8 -0.8v-1.4a0.8 0.8 0 0 1 0.8 -0.8zM5.3 10.75h2.4M6.5 9.55v2.4M17.5 9.05v.01M19.2 10.75v.01M15.8 10.75v.01M17.5 12.45v.01M8.2 13.25a1.3 1.3 0 1 0 2.6 0a1.3 1.3 0 1 0 -2.6 0zM13.2 13.25a1.3 1.3 0 1 0 2.6 0a1.3 1.3 0 1 0 -2.6 0z", 0, 0 } };
static const MiraOp mira_ops_f_299[] = { { 0, 0.0f, 0.0f, "M8 5.25h8l2.2 2.4a3.5 3.5 0 0 1 2.4 2.7l1.2 6.2a2.6 2.6 0 0 1-4.9 1.3L15.5 15.25h-7l-1.4 2.6a2.6 2.6 0 0 1-4.9-1.3l1.2-6.2a3.5 3.5 0 0 1 2.4-2.7z", mira_cut_299_f0, 1 } };
static const char *const mira_tags_300[] = { "croix directionnelle", "d-pad", "directions", "navigation spatiale" };
static const MiraOp mira_ops_o_300[] = { { 1, 1.0f, 0.0f, "M9.5 3.5h5v6h6v5h-6v6h-5v-6h-6v-5h6z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 6l1.5 1.75h-3zM12 18l1.5-1.75h-3zM6 12l1.75-1.5v3zM18 12l-1.75-1.5v3z", 0, 0 } };
static const MiraOp mira_cut_300_f0[] = { { 1, 1.0f, 0.0f, "M12 6l1.5 1.75h-3zM12 18l1.5-1.75h-3zM6 12l1.75-1.5v3zM18 12l-1.75-1.5v3z", 0, 0 } };
static const MiraOp mira_ops_f_300[] = { { 0, 0.0f, 0.0f, "M9.5 3.5h5v6h6v5h-6v6h-5v-6h-6v-5h6z", mira_cut_300_f0, 1 } };
static const char *const mira_tags_301[] = { "d-pad haut", "direction haut", "appuy\303\251" };
static const MiraOp mira_ops_o_301[] = { { 1, 1.0f, 0.0f, "M9.5 3.5h5v6h6v5h-6v6h-5v-6h-6v-5h6z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 6l1.5 1.75h-3zM12 18l1.5-1.75h-3zM6 12l1.75-1.5v3zM18 12l-1.75-1.5v3z", 0, 0 }, { 0, 0.0f, 0.0f, "M9.5 3.5h5v6h-5z", 0, 0 } };
static const MiraOp mira_cut_301_f0[] = { { 1, 1.0f, 0.0f, "M12 6l1.5 1.75h-3zM12 18l1.5-1.75h-3zM6 12l1.75-1.5v3zM18 12l-1.75-1.5v3z", 0, 0 } };
static const MiraOp mira_ops_f_301[] = { { 0, 0.0f, 0.0f, "M9.5 3.5h5v6h6v5h-6v6h-5v-6h-6v-5h6z", mira_cut_301_f0, 1 }, { 0, 0.0f, 0.0f, "M9.5 3.5h5v6h-5z", 0, 0 } };
static const char *const mira_tags_302[] = { "d-pad bas", "direction bas", "appuy\303\251" };
static const MiraOp mira_ops_o_302[] = { { 1, 1.0f, 0.0f, "M9.5 3.5h5v6h6v5h-6v6h-5v-6h-6v-5h6z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 6l1.5 1.75h-3zM12 18l1.5-1.75h-3zM6 12l1.75-1.5v3zM18 12l-1.75-1.5v3z", 0, 0 }, { 0, 0.0f, 0.0f, "M9.5 14.5h5v6h-5z", 0, 0 } };
static const MiraOp mira_cut_302_f0[] = { { 1, 1.0f, 0.0f, "M12 6l1.5 1.75h-3zM12 18l1.5-1.75h-3zM6 12l1.75-1.5v3zM18 12l-1.75-1.5v3z", 0, 0 } };
static const MiraOp mira_ops_f_302[] = { { 0, 0.0f, 0.0f, "M9.5 3.5h5v6h6v5h-6v6h-5v-6h-6v-5h6z", mira_cut_302_f0, 1 }, { 0, 0.0f, 0.0f, "M9.5 14.5h5v6h-5z", 0, 0 } };
static const char *const mira_tags_303[] = { "d-pad gauche", "direction gauche", "appuy\303\251" };
static const MiraOp mira_ops_o_303[] = { { 1, 1.0f, 0.0f, "M9.5 3.5h5v6h6v5h-6v6h-5v-6h-6v-5h6z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 6l1.5 1.75h-3zM12 18l1.5-1.75h-3zM6 12l1.75-1.5v3zM18 12l-1.75-1.5v3z", 0, 0 }, { 0, 0.0f, 0.0f, "M3.5 9.5h6v5h-6z", 0, 0 } };
static const MiraOp mira_cut_303_f0[] = { { 1, 1.0f, 0.0f, "M12 6l1.5 1.75h-3zM12 18l1.5-1.75h-3zM6 12l1.75-1.5v3zM18 12l-1.75-1.5v3z", 0, 0 } };
static const MiraOp mira_ops_f_303[] = { { 0, 0.0f, 0.0f, "M9.5 3.5h5v6h6v5h-6v6h-5v-6h-6v-5h6z", mira_cut_303_f0, 1 }, { 0, 0.0f, 0.0f, "M3.5 9.5h6v5h-6z", 0, 0 } };
static const char *const mira_tags_304[] = { "d-pad droite", "direction droite", "appuy\303\251" };
static const MiraOp mira_ops_o_304[] = { { 1, 1.0f, 0.0f, "M9.5 3.5h5v6h6v5h-6v6h-5v-6h-6v-5h6z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 6l1.5 1.75h-3zM12 18l1.5-1.75h-3zM6 12l1.75-1.5v3zM18 12l-1.75-1.5v3z", 0, 0 }, { 0, 0.0f, 0.0f, "M14.5 9.5h6v5h-6z", 0, 0 } };
static const MiraOp mira_cut_304_f0[] = { { 1, 1.0f, 0.0f, "M12 6l1.5 1.75h-3zM12 18l1.5-1.75h-3zM6 12l1.75-1.5v3zM18 12l-1.75-1.5v3z", 0, 0 } };
static const MiraOp mira_ops_f_304[] = { { 0, 0.0f, 0.0f, "M9.5 3.5h5v6h6v5h-6v6h-5v-6h-6v-5h6z", mira_cut_304_f0, 1 }, { 0, 0.0f, 0.0f, "M14.5 9.5h6v5h-6z", 0, 0 } };
static const char *const mira_tags_305[] = { "bouton a", "confirmer", "valider", "manette" };
static const MiraOp mira_ops_o_305[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M9.25 15.5l2.75-7 2.75 7M10.3 13h3.4", 0, 0 } };
static const MiraOp mira_cut_305_f0[] = { { 1, 1.0f, 0.0f, "M9.25 15.5l2.75-7 2.75 7M10.3 13h3.4", 0, 0 } };
static const MiraOp mira_ops_f_305[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_305_f0, 1 } };
static const char *const mira_tags_306[] = { "bouton b", "retour", "annuler", "manette" };
static const MiraOp mira_ops_o_306[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M9.5 8.5h3a1.75 1.75 0 0 1 0 3.5h-3zm0 3.5h3.5a1.75 1.75 0 0 1 0 3.5H9.5z", 0, 0 } };
static const MiraOp mira_cut_306_f0[] = { { 1, 1.0f, 0.0f, "M9.5 8.5h3a1.75 1.75 0 0 1 0 3.5h-3zm0 3.5h3.5a1.75 1.75 0 0 1 0 3.5H9.5z", 0, 0 } };
static const MiraOp mira_ops_f_306[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_306_f0, 1 } };
static const char *const mira_tags_307[] = { "bouton x", "action", "manette", "xbox" };
static const MiraOp mira_ops_o_307[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M9.25 8.5l5.5 7M14.75 8.5l-5.5 7", 0, 0 } };
static const MiraOp mira_cut_307_f0[] = { { 1, 1.0f, 0.0f, "M9.25 8.5l5.5 7M14.75 8.5l-5.5 7", 0, 0 } };
static const MiraOp mira_ops_f_307[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_307_f0, 1 } };
static const char *const mira_tags_308[] = { "bouton y", "action secondaire", "manette" };
static const MiraOp mira_ops_o_308[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M9.5 8.5l2.5 4 2.5-4M12 12.5v3", 0, 0 } };
static const MiraOp mira_cut_308_f0[] = { { 1, 1.0f, 0.0f, "M9.5 8.5l2.5 4 2.5-4M12 12.5v3", 0, 0 } };
static const MiraOp mira_ops_f_308[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_308_f0, 1 } };
static const char *const mira_tags_309[] = { "bouton triangle", "playstation", "manette" };
static const MiraOp mira_ops_o_309[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 8l4 7H8z", 0, 0 } };
static const MiraOp mira_cut_309_f0[] = { { 1, 1.0f, 0.0f, "M12 8l4 7H8z", 0, 0 } };
static const MiraOp mira_ops_f_309[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_309_f0, 1 } };
static const char *const mira_tags_310[] = { "bouton carr\303\251", "playstation", "manette" };
static const MiraOp mira_ops_o_310[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M9.5 8.5h5a1 1 0 0 1 1 1v5a1 1 0 0 1 -1 1h-5a1 1 0 0 1 -1 -1v-5a1 1 0 0 1 1 -1z", 0, 0 } };
static const MiraOp mira_cut_310_f0[] = { { 1, 1.0f, 0.0f, "M9.5 8.5h5a1 1 0 0 1 1 1v5a1 1 0 0 1 -1 1h-5a1 1 0 0 1 -1 -1v-5a1 1 0 0 1 1 -1z", 0, 0 } };
static const MiraOp mira_ops_f_310[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_310_f0, 1 } };
static const char *const mira_tags_311[] = { "bouton rond", "playstation", "manette" };
static const MiraOp mira_ops_o_311[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M8.25 12a3.75 3.75 0 1 0 7.5 0a3.75 3.75 0 1 0 -7.5 0z", 0, 0 } };
static const MiraOp mira_cut_311_f0[] = { { 1, 1.0f, 0.0f, "M8.25 12a3.75 3.75 0 1 0 7.5 0a3.75 3.75 0 1 0 -7.5 0z", 0, 0 } };
static const MiraOp mira_ops_f_311[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_311_f0, 1 } };
static const char *const mira_tags_312[] = { "stick gauche", "joystick", "analogique", "manette" };
static const MiraOp mira_ops_o_312[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M10 9V15H14", 0, 0 } };
static const MiraOp mira_cut_312_f0[] = { { 1, 1.0f, 0.0f, "M10 9V15H14", 0, 0 } };
static const MiraOp mira_ops_f_312[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_312_f0, 1 } };
static const char *const mira_tags_313[] = { "stick droit", "joystick", "analogique", "manette" };
static const MiraOp mira_ops_o_313[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M10 15V9H12.4A1.5 1.5 0 0 1 12.4 12H10M12.2 12L14 15", 0, 0 } };
static const MiraOp mira_cut_313_f0[] = { { 1, 1.0f, 0.0f, "M10 15V9H12.4A1.5 1.5 0 0 1 12.4 12H10M12.2 12L14 15", 0, 0 } };
static const MiraOp mira_ops_f_313[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_313_f0, 1 } };
static const char *const mira_tags_314[] = { "L1", "g\303\242chette", "bouton d'\303\251paule", "manette" };
static const MiraOp mira_ops_o_314[] = { { 1, 1.0f, 0.0f, "M4 5.5h16v8.5a5 5 0 0 1-5 5H9a5 5 0 0 1-5-5z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.3 9.25V15.25H11.3M13.5 10.55L14.9 9.25V15.25", 0, 0 } };
static const MiraOp mira_cut_314_f0[] = { { 1, 1.0f, 0.0f, "M7.3 9.25V15.25H11.3M13.5 10.55L14.9 9.25V15.25", 0, 0 } };
static const MiraOp mira_ops_f_314[] = { { 0, 0.0f, 0.0f, "M4 5.5h16v8.5a5 5 0 0 1-5 5H9a5 5 0 0 1-5-5z", mira_cut_314_f0, 1 } };
static const char *const mira_tags_315[] = { "R1", "g\303\242chette", "bouton d'\303\251paule", "manette" };
static const MiraOp mira_ops_o_315[] = { { 1, 1.0f, 0.0f, "M4 5.5h16v8.5a5 5 0 0 1-5 5H9a5 5 0 0 1-5-5z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.3 15.25V9.25H9.7A1.5 1.5 0 0 1 9.7 12.25H7.3M9.5 12.25L11.3 15.25M13.5 10.55L14.9 9.25V15.25", 0, 0 } };
static const MiraOp mira_cut_315_f0[] = { { 1, 1.0f, 0.0f, "M7.3 15.25V9.25H9.7A1.5 1.5 0 0 1 9.7 12.25H7.3M9.5 12.25L11.3 15.25M13.5 10.55L14.9 9.25V15.25", 0, 0 } };
static const MiraOp mira_ops_f_315[] = { { 0, 0.0f, 0.0f, "M4 5.5h16v8.5a5 5 0 0 1-5 5H9a5 5 0 0 1-5-5z", mira_cut_315_f0, 1 } };
static const char *const mira_tags_316[] = { "L2", "g\303\242chette", "bouton d'\303\251paule", "manette" };
static const MiraOp mira_ops_o_316[] = { { 1, 1.0f, 0.0f, "M4 18.5h16V10a5 5 0 0 0-5-5H9a5 5 0 0 0-5 5z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.3 8.75V14.75H11.3M13 10.25A1.7 1.7 0 1 1 16.2 11.25L13 14.75H16.7", 0, 0 } };
static const MiraOp mira_cut_316_f0[] = { { 1, 1.0f, 0.0f, "M7.3 8.75V14.75H11.3M13 10.25A1.7 1.7 0 1 1 16.2 11.25L13 14.75H16.7", 0, 0 } };
static const MiraOp mira_ops_f_316[] = { { 0, 0.0f, 0.0f, "M4 18.5h16V10a5 5 0 0 0-5-5H9a5 5 0 0 0-5 5z", mira_cut_316_f0, 1 } };
static const char *const mira_tags_317[] = { "R2", "g\303\242chette", "bouton d'\303\251paule", "manette" };
static const MiraOp mira_ops_o_317[] = { { 1, 1.0f, 0.0f, "M4 18.5h16V10a5 5 0 0 0-5-5H9a5 5 0 0 0-5 5z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.3 14.75V8.75H9.7A1.5 1.5 0 0 1 9.7 11.75H7.3M9.5 11.75L11.3 14.75M13 10.25A1.7 1.7 0 1 1 16.2 11.25L13 14.75H16.7", 0, 0 } };
static const MiraOp mira_cut_317_f0[] = { { 1, 1.0f, 0.0f, "M7.3 14.75V8.75H9.7A1.5 1.5 0 0 1 9.7 11.75H7.3M9.5 11.75L11.3 14.75M13 10.25A1.7 1.7 0 1 1 16.2 11.25L13 14.75H16.7", 0, 0 } };
static const MiraOp mira_ops_f_317[] = { { 0, 0.0f, 0.0f, "M4 18.5h16V10a5 5 0 0 0-5-5H9a5 5 0 0 0-5 5z", mira_cut_317_f0, 1 } };
static const char *const mira_tags_318[] = { "LB", "bumper", "xbox", "manette" };
static const MiraOp mira_ops_o_318[] = { { 1, 1.0f, 0.0f, "M4 5.5h16v8.5a5 5 0 0 1-5 5H9a5 5 0 0 1-5-5z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.3 9.25V15.25H11.3M12.7 12.25H15.1A1.5 1.5 0 0 0 15.1 9.25H12.7V15.25H15.1A1.5 1.5 0 0 0 15.1 12.25", 0, 0 } };
static const MiraOp mira_cut_318_f0[] = { { 1, 1.0f, 0.0f, "M7.3 9.25V15.25H11.3M12.7 12.25H15.1A1.5 1.5 0 0 0 15.1 9.25H12.7V15.25H15.1A1.5 1.5 0 0 0 15.1 12.25", 0, 0 } };
static const MiraOp mira_ops_f_318[] = { { 0, 0.0f, 0.0f, "M4 5.5h16v8.5a5 5 0 0 1-5 5H9a5 5 0 0 1-5-5z", mira_cut_318_f0, 1 } };
static const char *const mira_tags_319[] = { "RB", "bumper", "xbox", "manette" };
static const MiraOp mira_ops_o_319[] = { { 1, 1.0f, 0.0f, "M4 5.5h16v8.5a5 5 0 0 1-5 5H9a5 5 0 0 1-5-5z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.3 15.25V9.25H9.7A1.5 1.5 0 0 1 9.7 12.25H7.3M9.5 12.25L11.3 15.25M12.7 12.25H15.1A1.5 1.5 0 0 0 15.1 9.25H12.7V15.25H15.1A1.5 1.5 0 0 0 15.1 12.25", 0, 0 } };
static const MiraOp mira_cut_319_f0[] = { { 1, 1.0f, 0.0f, "M7.3 15.25V9.25H9.7A1.5 1.5 0 0 1 9.7 12.25H7.3M9.5 12.25L11.3 15.25M12.7 12.25H15.1A1.5 1.5 0 0 0 15.1 9.25H12.7V15.25H15.1A1.5 1.5 0 0 0 15.1 12.25", 0, 0 } };
static const MiraOp mira_ops_f_319[] = { { 0, 0.0f, 0.0f, "M4 5.5h16v8.5a5 5 0 0 1-5 5H9a5 5 0 0 1-5-5z", mira_cut_319_f0, 1 } };
static const char *const mira_tags_320[] = { "LT", "g\303\242chette", "xbox", "manette" };
static const MiraOp mira_ops_o_320[] = { { 1, 1.0f, 0.0f, "M4 18.5h16V10a5 5 0 0 0-5-5H9a5 5 0 0 0-5 5z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.3 8.75V14.75H11.3M12.7 8.75H16.7M14.7 8.75V14.75", 0, 0 } };
static const MiraOp mira_cut_320_f0[] = { { 1, 1.0f, 0.0f, "M7.3 8.75V14.75H11.3M12.7 8.75H16.7M14.7 8.75V14.75", 0, 0 } };
static const MiraOp mira_ops_f_320[] = { { 0, 0.0f, 0.0f, "M4 18.5h16V10a5 5 0 0 0-5-5H9a5 5 0 0 0-5 5z", mira_cut_320_f0, 1 } };
static const char *const mira_tags_321[] = { "RT", "g\303\242chette", "xbox", "manette" };
static const MiraOp mira_ops_o_321[] = { { 1, 1.0f, 0.0f, "M4 18.5h16V10a5 5 0 0 0-5-5H9a5 5 0 0 0-5 5z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.3 14.75V8.75H9.7A1.5 1.5 0 0 1 9.7 11.75H7.3M9.5 11.75L11.3 14.75M12.7 8.75H16.7M14.7 8.75V14.75", 0, 0 } };
static const MiraOp mira_cut_321_f0[] = { { 1, 1.0f, 0.0f, "M7.3 14.75V8.75H9.7A1.5 1.5 0 0 1 9.7 11.75H7.3M9.5 11.75L11.3 14.75M12.7 8.75H16.7M14.7 8.75V14.75", 0, 0 } };
static const MiraOp mira_ops_f_321[] = { { 0, 0.0f, 0.0f, "M4 18.5h16V10a5 5 0 0 0-5-5H9a5 5 0 0 0-5 5z", mira_cut_321_f0, 1 } };
static const char *const mira_tags_322[] = { "ZL", "g\303\242chette", "switch", "manette" };
static const MiraOp mira_ops_o_322[] = { { 1, 1.0f, 0.0f, "M4 18.5h16V10a5 5 0 0 0-5-5H9a5 5 0 0 0-5 5z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.3 8.75H11.3L7.3 14.75H11.3M12.7 8.75V14.75H16.7", 0, 0 } };
static const MiraOp mira_cut_322_f0[] = { { 1, 1.0f, 0.0f, "M7.3 8.75H11.3L7.3 14.75H11.3M12.7 8.75V14.75H16.7", 0, 0 } };
static const MiraOp mira_ops_f_322[] = { { 0, 0.0f, 0.0f, "M4 18.5h16V10a5 5 0 0 0-5-5H9a5 5 0 0 0-5 5z", mira_cut_322_f0, 1 } };
static const char *const mira_tags_323[] = { "ZR", "g\303\242chette", "switch", "manette" };
static const MiraOp mira_ops_o_323[] = { { 1, 1.0f, 0.0f, "M4 18.5h16V10a5 5 0 0 0-5-5H9a5 5 0 0 0-5 5z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.3 8.75H11.3L7.3 14.75H11.3M12.7 14.75V8.75H15.1A1.5 1.5 0 0 1 15.1 11.75H12.7M14.9 11.75L16.7 14.75", 0, 0 } };
static const MiraOp mira_cut_323_f0[] = { { 1, 1.0f, 0.0f, "M7.3 8.75H11.3L7.3 14.75H11.3M12.7 14.75V8.75H15.1A1.5 1.5 0 0 1 15.1 11.75H12.7M14.9 11.75L16.7 14.75", 0, 0 } };
static const MiraOp mira_ops_f_323[] = { { 0, 0.0f, 0.0f, "M4 18.5h16V10a5 5 0 0 0-5-5H9a5 5 0 0 0-5 5z", mira_cut_323_f0, 1 } };
static const char *const mira_tags_324[] = { "bouton menu", "options", "start", "manette" };
static const MiraOp mira_ops_o_324[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M8 9h8M8 12h8M8 15h8", 0, 0 } };
static const MiraOp mira_cut_324_f0[] = { { 1, 1.0f, 0.0f, "M8 9h8M8 12h8M8 15h8", 0, 0 } };
static const MiraOp mira_ops_f_324[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_324_f0, 1 } };
static const char *const mira_tags_325[] = { "bouton home", "accueil", "guide", "manette" };
static const MiraOp mira_ops_o_325[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M8 11.25 12 7.75l4 3.5v4a1 1 0 0 1-1 1H9a1 1 0 0 1-1-1z", 0, 0 } };
static const MiraOp mira_cut_325_f0[] = { { 1, 1.0f, 0.0f, "M8 11.25 12 7.75l4 3.5v4a1 1 0 0 1-1 1H9a1 1 0 0 1-1-1z", 0, 0 } };
static const MiraOp mira_ops_f_325[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_325_f0, 1 } };
static const char *const mira_tags_326[] = { "troph\303\251e", "victoire", "r\303\251compense", "classement", "succ\303\250s", "achievement" };
static const MiraOp mira_ops_o_326[] = { { 1, 1.0f, 0.0f, "M7.5 3.5h9V9a4.5 4.5 0 0 1-9 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.5 5.5h-3V7a3 3 0 0 0 3 3M16.5 5.5h3V7a3 3 0 0 1-3 3M12 13.5v3M8.5 20.5h7M9.5 16.5h5v4h-5z", 0, 0 } };
static const MiraOp mira_ops_f_326[] = { { 0, 0.0f, 0.0f, "M7.5 3.5h9V9a4.5 4.5 0 0 1-9 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.5 5.5h-3V7a3 3 0 0 0 3 3M16.5 5.5h3V7a3 3 0 0 1-3 3M12 13.5v3M8.5 20.5h7M9.5 16.5h5v4h-5z", 0, 0 } };
static const char *const mira_tags_327[] = { "d\303\251", "hasard", "al\303\251atoire", "jeu de soci\303\251t\303\251", "chance" };
static const MiraOp mira_ops_o_327[] = { { 1, 1.0f, 0.0f, "M7 3.5h10a3.5 3.5 0 0 1 3.5 3.5v10a3.5 3.5 0 0 1 -3.5 3.5h-10a3.5 3.5 0 0 1 -3.5 -3.5v-10a3.5 3.5 0 0 1 3.5 -3.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M8 8h.01M16 8h.01M12 12h.01M8 16h.01M16 16h.01", 0, 0 } };
static const MiraOp mira_cut_327_f0[] = { { 1, 1.0f, 0.0f, "M8 8h.01M16 8h.01M12 12h.01M8 16h.01M16 16h.01", 0, 0 } };
static const MiraOp mira_ops_f_327[] = { { 0, 0.0f, 0.0f, "M7 3.5h10a3.5 3.5 0 0 1 3.5 3.5v10a3.5 3.5 0 0 1 -3.5 3.5h-10a3.5 3.5 0 0 1 -3.5 -3.5v-10a3.5 3.5 0 0 1 3.5 -3.5z", mira_cut_327_f0, 1 } };
static const char *const mira_tags_328[] = { "manette", "switch", "nintendo", "joy-con", "console portable", "\303\251cran" };
static const MiraOp mira_ops_o_328[] = { { 1, 1.0f, 0.0f, "M5.5 6.5h13a3 3 0 0 1 3 3v5a3 3 0 0 1 -3 3h-13a3 3 0 0 1 -3 -3v-5a3 3 0 0 1 3 -3z", 0, 0 }, { 1, 1.0f, 0.0f, "M8.5 8h7a1 1 0 0 1 1 1v6a1 1 0 0 1 -1 1h-7a1 1 0 0 1 -1 -1v-6a1 1 0 0 1 1 -1zM3.8 10.25a1.2 1.2 0 1 0 2.4 0a1.2 1.2 0 1 0 -2.4 0zM5 14v.01M19 9v.01M20.25 10.25v.01M17.75 10.25v.01M19 11.5v.01M19 14.5v.01", 0, 0 } };
static const MiraOp mira_cut_328_f0[] = { { 1, 1.0f, 0.0f, "M8.5 8h7a1 1 0 0 1 1 1v6a1 1 0 0 1 -1 1h-7a1 1 0 0 1 -1 -1v-6a1 1 0 0 1 1 -1zM3.8 10.25a1.2 1.2 0 1 0 2.4 0a1.2 1.2 0 1 0 -2.4 0zM5 14v.01M19 9v.01M20.25 10.25v.01M17.75 10.25v.01M19 11.5v.01M19 14.5v.01", 0, 0 } };
static const MiraOp mira_ops_f_328[] = { { 0, 0.0f, 0.0f, "M5.5 6.5h13a3 3 0 0 1 3 3v5a3 3 0 0 1 -3 3h-13a3 3 0 0 1 -3 -3v-5a3 3 0 0 1 3 -3z", mira_cut_328_f0, 1 } };
static const char *const mira_tags_329[] = { "couronne", "premium", "vip", "roi", "abonnement" };
static const MiraOp mira_ops_o_329[] = { { 1, 1.0f, 0.0f, "M3.5 17.5 3 7l4.5 3.5L12 4.5l4.5 6L21 7l-.5 10.5a1 1 0 0 1-1 1h-15a1 1 0 0 1-1-1z", 0, 0 }, { 1, 1.0f, 0.0f, "M4 14.5h16", 0, 0 } };
static const MiraOp mira_cut_329_f0[] = { { 1, 1.0f, 0.0f, "M4 14.5h16", 0, 0 } };
static const MiraOp mira_ops_f_329[] = { { 0, 0.0f, 0.0f, "M3.5 17.5 3 7l4.5 3.5L12 4.5l4.5 6L21 7l-.5 10.5a1 1 0 0 1-1 1h-15a1 1 0 0 1-1-1z", mira_cut_329_f0, 1 } };
static const char *const mira_tags_330[] = { "fus\303\251e", "lancer", "d\303\251marrage", "d\303\251ploiement", "startup", "publier" };
static const MiraOp mira_ops_o_330[] = { { 1, 1.0f, 0.0f, "M12 3c3 2 4.5 6 4.5 10v3.5l-4.5 3-4.5-3V13C7.5 9 9 5 12 3z", 0, 0 }, { 1, 1.0f, 0.0f, "M10.25 10a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.5 13.5 4.5 17l3-.5M16.5 13.5l3 3.5-3-.5M12 19.5v2", 0, 0 } };
static const MiraOp mira_cut_330_f0[] = { { 1, 1.0f, 0.0f, "M10.25 10a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0z", 0, 0 } };
static const MiraOp mira_ops_f_330[] = { { 0, 0.0f, 0.0f, "M12 3c3 2 4.5 6 4.5 10v3.5l-4.5 3-4.5-3V13C7.5 9 9 5 12 3z", mira_cut_330_f0, 1 }, { 1, 1.0f, 0.0f, "M7.5 13.5 4.5 17l3-.5M16.5 13.5l3 3.5-3-.5M12 19.5v2", 0, 0 } };
static const char *const mira_tags_331[] = { "cible", "objectif", "viser", "pr\303\251cision", "focus" };
static const MiraOp mira_ops_o_331[] = { { 1, 1.0f, 0.0f, "M3.5 12a8.5 8.5 0 1 0 17 0a8.5 8.5 0 1 0 -17 0zM8 12a4 4 0 1 0 8 0a4 4 0 1 0 -8 0zM12 2v3M12 19v3M2 12h3M19 12h3", 0, 0 } };
static const MiraOp mira_ops_f_331[] = { { 1, 1.0f, 0.0f, "M3.5 12a8.5 8.5 0 1 0 17 0a8.5 8.5 0 1 0 -17 0zM8 12a4 4 0 1 0 8 0a4 4 0 1 0 -8 0zM12 2v3M12 19v3M2 12h3M19 12h3", 0, 0 } };
static const char *const mira_tags_332[] = { "baguette", "magie", "IA", "retouche automatique", "am\303\251liorer", "auto" };
static const MiraOp mira_ops_o_332[] = { { 1, 1.0f, 0.0f, "M3.5 20.5 14 10M15.5 3.5l.9 2.1 2.1.9-2.1.9-.9 2.1-.9-2.1-2.1-.9 2.1-.9zM19 12l.6 1.4L21 14l-1.4.6L19 16l-.6-1.4L17 14l1.4-.6zM6 4l.5 1.2 1.2.5-1.2.5L6 7.4l-.5-1.2-1.2-.5 1.2-.5z", 0, 0 } };
static const MiraOp mira_ops_f_332[] = { { 1, 1.0f, 0.0f, "M3.5 20.5 14 10M15.5 3.5l.9 2.1 2.1.9-2.1.9-.9 2.1-.9-2.1-2.1-.9 2.1-.9zM19 12l.6 1.4L21 14l-1.4.6L19 16l-.6-1.4L17 14l1.4-.6zM6 4l.5 1.2 1.2.5-1.2.5L6 7.4l-.5-1.2-1.2-.5 1.2-.5z", 0, 0 } };
static const char *const mira_tags_333[] = { "curseur", "pointeur", "souris", "cliquer", "s\303\251lectionner" };
static const MiraOp mira_ops_o_333[] = { { 1, 1.0f, 0.0f, "M5.5 4.5 19 11l-6 1.5-3 5.5z", 0, 0 } };
static const MiraOp mira_ops_f_333[] = { { 0, 0.0f, 0.0f, "M5.5 4.5 19 11l-6 1.5-3 5.5z", 0, 0 }, { 1, 1.0f, -1.5f, "M5.5 4.5 19 11l-6 1.5-3 5.5z", 0, 0 } };
static const char *const mira_tags_334[] = { "feuille", "\303\251cologie", "nature", "durable", "bio", "vert" };
static const MiraOp mira_ops_o_334[] = { { 1, 1.0f, 0.0f, "M20 4c-8 0-14 4-15.5 12 3 1.5 6 1.5 8.5 0 4-2.5 6.5-7 7-12z", 0, 0 }, { 1, 1.0f, 0.0f, "M5.5 19.5c3-5 6-8.5 10-11.5", 0, 0 } };
static const MiraOp mira_cut_334_f0[] = { { 1, 1.0f, 0.0f, "M5.5 19.5c3-5 6-8.5 10-11.5", 0, 0 } };
static const MiraOp mira_ops_f_334[] = { { 0, 0.0f, 0.0f, "M20 4c-8 0-14 4-15.5 12 3 1.5 6 1.5 8.5 0 4-2.5 6.5-7 7-12z", mira_cut_334_f0, 1 } };
static const char *const mira_tags_335[] = { "dipl\303\264me", "formation", "apprentissage", "\303\251cole", "tutoriel", "cours" };
static const MiraOp mira_ops_o_335[] = { { 1, 1.0f, 0.0f, "M2.5 9.5 12 5l9.5 4.5L12 14z", 0, 0 }, { 1, 1.0f, 0.0f, "M6 11.5v5c1.5 1.5 3.5 2.5 6 2.5s4.5-1 6-2.5v-5M21.5 9.5v6", 0, 0 } };
static const MiraOp mira_ops_f_335[] = { { 0, 0.0f, 0.0f, "M2.5 9.5 12 5l9.5 4.5L12 14z", 0, 0 }, { 1, 1.0f, 0.0f, "M6 11.5v5c1.5 1.5 3.5 2.5 6 2.5s4.5-1 6-2.5v-5M21.5 9.5v6", 0, 0 } };
static const char *const mira_tags_336[] = { "livre", "documentation", "lecture", "guide", "manuel", "docs" };
static const MiraOp mira_ops_o_336[] = { { 1, 1.0f, 0.0f, "M3.5 5.5A1.5 1.5 0 0 1 5 4h4.5A2.5 2.5 0 0 1 12 6.5v14A2.5 2.5 0 0 0 9.5 18H5a1.5 1.5 0 0 1-1.5-1.5zM20.5 5.5A1.5 1.5 0 0 0 19 4h-4.5A2.5 2.5 0 0 0 12 6.5v14A2.5 2.5 0 0 1 14.5 18H19a1.5 1.5 0 0 0 1.5-1.5z", 0, 0 } };
static const MiraOp mira_ops_f_336[] = { { 0, 0.0f, 0.0f, "M3.5 5.5A1.5 1.5 0 0 1 5 4h4.5A2.5 2.5 0 0 1 12 6.5v14A2.5 2.5 0 0 0 9.5 18H5a1.5 1.5 0 0 1-1.5-1.5zM20.5 5.5A1.5 1.5 0 0 0 19 4h-4.5A2.5 2.5 0 0 0 12 6.5v14A2.5 2.5 0 0 1 14.5 18H19a1.5 1.5 0 0 0 1.5-1.5z", 0, 0 } };
static const char *const mira_tags_337[] = { "billet", "ticket", "\303\251v\303\251nement", "entr\303\251e", "coupon", "r\303\251servation" };
static const MiraOp mira_ops_o_337[] = { { 1, 1.0f, 0.0f, "M3.5 8A1.5 1.5 0 0 1 5 6.5h14A1.5 1.5 0 0 1 20.5 8v2a2 2 0 0 0 0 4v2a1.5 1.5 0 0 1-1.5 1.5H5A1.5 1.5 0 0 1 3.5 16v-2a2 2 0 0 0 0-4z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 6.5v11", 0, 0 } };
static const MiraOp mira_cut_337_f0[] = { { 1, 1.0f, 0.0f, "M9 6.5v11", 0, 0 } };
static const MiraOp mira_ops_f_337[] = { { 0, 0.0f, 0.0f, "M3.5 8A1.5 1.5 0 0 1 5 6.5h14A1.5 1.5 0 0 1 20.5 8v2a2 2 0 0 0 0 4v2a1.5 1.5 0 0 1-1.5 1.5H5A1.5 1.5 0 0 1 3.5 16v-2a2 2 0 0 0 0-4z", mira_cut_337_f0, 1 } };
static const char *const mira_tags_338[] = { "restaurant", "repas", "manger", "cuisine", "couverts" };
static const MiraOp mira_ops_o_338[] = { { 1, 1.0f, 0.0f, "M6 3.5v6a2 2 0 0 0 4 0v-6M8 9.5v11M17.5 3.5c-2 1.5-3.5 4.5-3.5 8v2h3.5zM17.5 13.5v7", 0, 0 } };
static const MiraOp mira_ops_f_338[] = { { 1, 1.0f, 0.0f, "M6 3.5v6a2 2 0 0 0 4 0v-6M8 9.5v11M17.5 3.5c-2 1.5-3.5 4.5-3.5 8v2h3.5zM17.5 13.5v7", 0, 0 } };
static const char *const mira_tags_339[] = { "caf\303\251", "tasse", "pause", "boisson", "th\303\251" };
static const MiraOp mira_ops_o_339[] = { { 1, 1.0f, 0.0f, "M3.5 5h11v8a4 4 0 0 1-4 4H7.5a4 4 0 0 1-4-4z", 0, 0 }, { 1, 1.0f, 0.0f, "M14.5 7.5H17a2.5 2.5 0 0 1 0 5h-2.5M5 19h10", 0, 0 } };
static const MiraOp mira_ops_f_339[] = { { 0, 0.0f, 0.0f, "M3.5 5h11v8a4 4 0 0 1-4 4H7.5a4 4 0 0 1-4-4z", 0, 0 }, { 1, 1.0f, 0.0f, "M14.5 7.5H17a2.5 2.5 0 0 1 0 5h-2.5M5 19h10", 0, 0 } };
static const char *const mira_tags_340[] = { "sant\303\251", "m\303\251dical", "premiers secours", "trousse", "pharmacie", "urgence" };
static const MiraOp mira_ops_o_340[] = { { 1, 1.0f, 0.0f, "M5 7.5h14a2 2 0 0 1 2 2v8.5a2 2 0 0 1 -2 2h-14a2 2 0 0 1 -2 -2v-8.5a2 2 0 0 1 2 -2z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 11v5M9.5 13.5h5", 0, 0 }, { 1, 1.0f, 0.0f, "M8.5 7.5V6a1.5 1.5 0 0 1 1.5-1.5h4A1.5 1.5 0 0 1 15.5 6v1.5", 0, 0 } };
static const MiraOp mira_cut_340_f0[] = { { 1, 1.0f, 0.0f, "M12 11v5M9.5 13.5h5", 0, 0 } };
static const MiraOp mira_ops_f_340[] = { { 0, 0.0f, 0.0f, "M5 7.5h14a2 2 0 0 1 2 2v8.5a2 2 0 0 1 -2 2h-14a2 2 0 0 1 -2 -2v-8.5a2 2 0 0 1 2 -2z", mira_cut_340_f0, 1 }, { 1, 1.0f, 0.0f, "M8.5 7.5V6a1.5 1.5 0 0 1 1.5-1.5h4A1.5 1.5 0 0 1 15.5 6v1.5", 0, 0 } };
static const char *const mira_tags_341[] = { "animal", "patte", "chien", "chat", "v\303\251t\303\251rinaire" };
static const MiraOp mira_ops_o_341[] = { { 1, 1.0f, 0.0f, "M12 11.5c-3 0-5.5 2.5-5.5 5s2 4 5.5 4 5.5-1.5 5.5-4-2.5-5-5.5-5zM3.5 10a2 2 0 1 0 4 0a2 2 0 1 0 -4 0zM16.5 10a2 2 0 1 0 4 0a2 2 0 1 0 -4 0zM7 5.5a2 2 0 1 0 4 0a2 2 0 1 0 -4 0zM13 5.5a2 2 0 1 0 4 0a2 2 0 1 0 -4 0z", 0, 0 } };
static const MiraOp mira_ops_f_341[] = { { 0, 0.0f, 0.0f, "M12 11.5c-3 0-5.5 2.5-5.5 5s2 4 5.5 4 5.5-1.5 5.5-4-2.5-5-5.5-5zM3.5 10a2 2 0 1 0 4 0a2 2 0 1 0 -4 0zM16.5 10a2 2 0 1 0 4 0a2 2 0 1 0 -4 0zM7 5.5a2 2 0 1 0 4 0a2 2 0 1 0 -4 0zM13 5.5a2 2 0 1 0 4 0a2 2 0 1 0 -4 0z", 0, 0 } };
static const char *const mira_tags_342[] = { "nuit", "sommeil", "mode nuit", "\303\251toiles", "coucher" };
static const MiraOp mira_ops_o_342[] = { { 1, 1.0f, 0.0f, "M17 15.5A7 7 0 0 1 8.5 7a7 7 0 1 0 8.5 8.5zM18 4l.7 1.6 1.6.7-1.6.7L18 8.6l-.7-1.6-1.6-.7 1.6-.7zM20.5 10.5l.4 1 1 .4-1 .4-.4 1-.4-1-1-.4 1-.4z", 0, 0 } };
static const MiraOp mira_ops_f_342[] = { { 0, 0.0f, 0.0f, "M17 15.5A7 7 0 0 1 8.5 7a7 7 0 1 0 8.5 8.5zM18 4l.7 1.6 1.6.7-1.6.7L18 8.6l-.7-1.6-1.6-.7 1.6-.7zM20.5 10.5l.4 1 1 .4-1 .4-.4 1-.4-1-1-.4 1-.4z", 0, 0 }, { 1, 1.0f, -1.5f, "M17 15.5A7 7 0 0 1 8.5 7a7 7 0 1 0 8.5 8.5zM18 4l.7 1.6 1.6.7-1.6.7L18 8.6l-.7-1.6-1.6-.7 1.6-.7zM20.5 10.5l.4 1 1 .4-1 .4-.4 1-.4-1-1-.4 1-.4z", 0, 0 } };
static const char *const mira_tags_343[] = { "\303\251gal", "identique", "\303\251quivalent", "math\303\251matiques" };
static const MiraOp mira_ops_o_343[] = { { 1, 1.0f, 0.0f, "M5 9.5h14M5 14.5h14", 0, 0 } };
static const MiraOp mira_ops_f_343[] = { { 1, 1.0f, 0.0f, "M5 9.5h14M5 14.5h14", 0, 0 } };
static const char *const mira_tags_344[] = { "discord", "bot", "communaut\303\251", "chat vocal", "serveur", "assistant" };
static const MiraOp mira_ops_o_344[] = { { 1, 1.0f, 0.0f, "M7 3.5h10A4.5 4.5 0 0 1 21.5 8v5a4.5 4.5 0 0 1-4.5 4.5h-5.5L7 20.5V17.5A4.5 4.5 0 0 1 2.5 13V8A4.5 4.5 0 0 1 7 3.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M8 10.5a1 1 0 1 0 2 0a1 1 0 1 0 -2 0zM14 10.5a1 1 0 1 0 2 0a1 1 0 1 0 -2 0z", 0, 0 } };
static const MiraOp mira_cut_344_f0[] = { { 1, 1.0f, 0.0f, "M8 10.5a1 1 0 1 0 2 0a1 1 0 1 0 -2 0zM14 10.5a1 1 0 1 0 2 0a1 1 0 1 0 -2 0z", 0, 0 } };
static const MiraOp mira_ops_f_344[] = { { 0, 0.0f, 0.0f, "M7 3.5h10A4.5 4.5 0 0 1 21.5 8v5a4.5 4.5 0 0 1-4.5 4.5h-5.5L7 20.5V17.5A4.5 4.5 0 0 1 2.5 13V8A4.5 4.5 0 0 1 7 3.5z", mira_cut_344_f0, 1 } };
static const char *const mira_tags_345[] = { "github", "chat", "d\303\251p\303\264t", "open source", "code source" };
static const MiraOp mira_ops_o_345[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.5 7.5V15a4.5 4.5 0 0 0 9 0V7.5L14 10h-4zM10.5 13h.01M13.5 13h.01", 0, 0 } };
static const MiraOp mira_cut_345_f0[] = { { 1, 1.0f, 0.0f, "M7.5 7.5V15a4.5 4.5 0 0 0 9 0V7.5L14 10h-4zM10.5 13h.01M13.5 13h.01", 0, 0 } };
static const MiraOp mira_ops_f_345[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_345_f0, 1 } };
static const char *const mira_tags_346[] = { "git", "versionnage", "branche", "commit", "contr\303\264le de version" };
static const MiraOp mira_ops_o_346[] = { { 1, 1.0f, 0.0f, "M12 2.5 21.5 12 12 21.5 2.5 12z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.75 7a1.25 1.25 0 1 0 2.5 0a1.25 1.25 0 1 0 -2.5 0zM7.75 17a1.25 1.25 0 1 0 2.5 0a1.25 1.25 0 1 0 -2.5 0zM14.25 11a1.25 1.25 0 1 0 2.5 0a1.25 1.25 0 1 0 -2.5 0zM9 8.25v7.5M15.5 12.25a4 4 0 0 1-4 4h-1.25", 0, 0 } };
static const MiraOp mira_cut_346_f0[] = { { 1, 1.0f, 0.0f, "M7.75 7a1.25 1.25 0 1 0 2.5 0a1.25 1.25 0 1 0 -2.5 0zM7.75 17a1.25 1.25 0 1 0 2.5 0a1.25 1.25 0 1 0 -2.5 0zM14.25 11a1.25 1.25 0 1 0 2.5 0a1.25 1.25 0 1 0 -2.5 0zM9 8.25v7.5M15.5 12.25a4 4 0 0 1-4 4h-1.25", 0, 0 } };
static const MiraOp mira_ops_f_346[] = { { 0, 0.0f, 0.0f, "M12 2.5 21.5 12 12 21.5 2.5 12z", mira_cut_346_f0, 1 } };
static const char *const mira_tags_347[] = { "gitlab", "firefox", "renard", "navigateur", "animal" };
static const MiraOp mira_ops_o_347[] = { { 1, 1.0f, 0.0f, "M4 5 8.5 8.5h7L20 5l-1 8.5a7 7 0 0 1-14 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M9.5 12h.01M14.5 12h.01M11 15.5l1 1.5 1-1.5", 0, 0 } };
static const MiraOp mira_cut_347_f0[] = { { 1, 1.0f, 0.0f, "M9.5 12h.01M14.5 12h.01M11 15.5l1 1.5 1-1.5", 0, 0 } };
static const MiraOp mira_ops_f_347[] = { { 0, 0.0f, 0.0f, "M4 5 8.5 8.5h7L20 5l-1 8.5a7 7 0 0 1-14 0z", mira_cut_347_f0, 1 } };
static const char *const mira_tags_348[] = { "twitter", "oiseau", "tweet", "gazouillis", "animal" };
static const MiraOp mira_ops_o_348[] = { { 1, 1.0f, 0.0f, "M4.5 19c0-5 3-8.5 7-8.5h1V8.5a3 3 0 0 1 6 0v1.2l2.5 1.3-2.5.5V14a5 5 0 0 1-5 5z", 0, 0 }, { 1, 1.0f, 0.0f, "M16.5 8.5v.01M8 16.5c2.5 0 4.5-1.5 5.5-4", 0, 0 } };
static const MiraOp mira_cut_348_f0[] = { { 1, 1.0f, 0.0f, "M16.5 8.5v.01M8 16.5c2.5 0 4.5-1.5 5.5-4", 0, 0 } };
static const MiraOp mira_ops_f_348[] = { { 0, 0.0f, 0.0f, "M4.5 19c0-5 3-8.5 7-8.5h1V8.5a3 3 0 0 1 6 0v1.2l2.5 1.3-2.5.5V14a5 5 0 0 1-5 5z", mira_cut_348_f0, 1 } };
static const char *const mira_tags_349[] = { "bluesky", "papillon", "r\303\251seau social", "animal" };
static const MiraOp mira_ops_o_349[] = { { 1, 1.0f, 0.0f, "M12 9c-1.5-3-4-4.5-6.5-4.5C3 4.5 3 8 4.5 10.5 6 13 9 13.5 12 12zM12 9c1.5-3 4-4.5 6.5-4.5C21 4.5 21 8 19.5 10.5 18 13 15 13.5 12 12zM12 12c-2-1-5.5-.5-6.5 1.5-1 2 .5 5 2.5 5.5 2 .5 3.5-2 4-5zM12 12c2-1 5.5-.5 6.5 1.5 1 2-.5 5-2.5 5.5-2 .5-3.5-2-4-5z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 6v13M10 5.5 9 3.5M14 5.5l1-2", 0, 0 } };
static const MiraOp mira_cut_349_f0[] = { { 1, 1.0f, 1.4f, "M12 6v13M10 5.5 9 3.5M14 5.5l1-2", 0, 0 } };
static const MiraOp mira_ops_f_349[] = { { 0, 0.0f, 0.0f, "M12 9c-1.5-3-4-4.5-6.5-4.5C3 4.5 3 8 4.5 10.5 6 13 9 13.5 12 12zM12 9c1.5-3 4-4.5 6.5-4.5C21 4.5 21 8 19.5 10.5 18 13 15 13.5 12 12zM12 12c-2-1-5.5-.5-6.5 1.5-1 2 .5 5 2.5 5.5 2 .5 3.5-2 4-5zM12 12c2-1 5.5-.5 6.5 1.5 1 2-.5 5-2.5 5.5-2 .5-3.5-2-4-5z", mira_cut_349_f0, 1 }, { 1, 1.0f, 0.0f, "M12 6v13M10 5.5 9 3.5M14 5.5l1-2", 0, 0 } };
static const char *const mira_tags_350[] = { "linux", "manchot", "pingouin", "animal", "syst\303\250me" };
static const MiraOp mira_ops_o_350[] = { { 1, 1.0f, 0.0f, "M12 3c-3.5 0-5.5 3-5.5 7v3c-1.5 1-2.5 3-2.5 5 0 1.5.5 2.5 1.5 3h13c1-.5 1.5-1.5 1.5-3 0-2-1-4-2.5-5v-3c0-4-2-7-5.5-7z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 10.5c-2 0-3.5 2-3.5 5v5.5h7V15.5c0-3-1.5-5-3.5-5zM10 7.5h.01M14 7.5h.01", 0, 0 }, { 1, 1.0f, 0.0f, "M11 9.5h2l-1 1.5z", 0, 0 } };
static const MiraOp mira_cut_350_f0[] = { { 1, 1.0f, 0.0f, "M12 10.5c-2 0-3.5 2-3.5 5v5.5h7V15.5c0-3-1.5-5-3.5-5zM10 7.5h.01M14 7.5h.01", 0, 0 } };
static const MiraOp mira_ops_f_350[] = { { 0, 0.0f, 0.0f, "M12 3c-3.5 0-5.5 3-5.5 7v3c-1.5 1-2.5 3-2.5 5 0 1.5.5 2.5 1.5 3h13c1-.5 1.5-1.5 1.5-3 0-2-1-4-2.5-5v-3c0-4-2-7-5.5-7z", mira_cut_350_f0, 1 }, { 1, 1.0f, 0.0f, "M11 9.5h2l-1 1.5z", 0, 0 } };
static const char *const mira_tags_351[] = { "android", "bot", "IA", "automate", "assistant" };
static const MiraOp mira_ops_o_351[] = { { 1, 1.0f, 0.0f, "M7.5 8.5h9a3 3 0 0 1 3 3v6a3 3 0 0 1 -3 3h-9a3 3 0 0 1 -3 -3v-6a3 3 0 0 1 3 -3zM2.5 13h2v4h-2zM19.5 13h2v4h-2z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 14h.01M15 14h.01M9.5 17.5h5", 0, 0 }, { 1, 1.0f, 0.0f, "M12 8.5V6.25M10.75 5a1.25 1.25 0 1 0 2.5 0a1.25 1.25 0 1 0 -2.5 0z", 0, 0 } };
static const MiraOp mira_cut_351_f0[] = { { 1, 1.0f, 0.0f, "M9 14h.01M15 14h.01M9.5 17.5h5", 0, 0 } };
static const MiraOp mira_ops_f_351[] = { { 0, 0.0f, 0.0f, "M7.5 8.5h9a3 3 0 0 1 3 3v6a3 3 0 0 1 -3 3h-9a3 3 0 0 1 -3 -3v-6a3 3 0 0 1 3 -3zM2.5 13h2v4h-2zM19.5 13h2v4h-2z", mira_cut_351_f0, 1 }, { 1, 1.0f, 0.0f, "M12 8.5V6.25M10.75 5a1.25 1.25 0 1 0 2.5 0a1.25 1.25 0 1 0 -2.5 0z", 0, 0 } };
static const char *const mira_tags_352[] = { "apple", "pomme", "fruit", "sant\303\251", "nutrition" };
static const MiraOp mira_ops_o_352[] = { { 1, 1.0f, 0.0f, "M12 7.5c2.5-1.5 6 0 6.5 4 .5 3.5-1.5 8-4 9.5-1 .5-1.5.5-2.5 0-1 .5-1.5.5-2.5 0-2.5-1.5-4.5-6-4-9.5.5-4 4-5.5 6.5-4z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 7.5c0-2 1-3.5 3-4-.5 2-1.5 3.5-3 4", 0, 0 } };
static const MiraOp mira_ops_f_352[] = { { 0, 0.0f, 0.0f, "M12 7.5c2.5-1.5 6 0 6.5 4 .5 3.5-1.5 8-4 9.5-1 .5-1.5.5-2.5 0-1 .5-1.5.5-2.5 0-2.5-1.5-4.5-6-4-9.5.5-4 4-5.5 6.5-4z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 7.5c0-2 1-3.5 3-4-.5 2-1.5 3.5-3 4", 0, 0 } };
static const char *const mira_tags_353[] = { "linkedin", "mallette", "travail", "emploi", "professionnel", "portfolio" };
static const MiraOp mira_ops_o_353[] = { { 1, 1.0f, 0.0f, "M5 7.5h14a2 2 0 0 1 2 2v8a2 2 0 0 1 -2 2h-14a2 2 0 0 1 -2 -2v-8a2 2 0 0 1 2 -2z", 0, 0 }, { 1, 1.0f, 0.0f, "M3 12.5h18M10.5 12v2.5h3V12", 0, 0 }, { 1, 1.0f, 0.0f, "M8.5 7.5V6a1.5 1.5 0 0 1 1.5-1.5h4A1.5 1.5 0 0 1 15.5 6v1.5", 0, 0 } };
static const MiraOp mira_cut_353_f0[] = { { 1, 1.0f, 0.0f, "M3 12.5h18M10.5 12v2.5h3V12", 0, 0 } };
static const MiraOp mira_ops_f_353[] = { { 0, 0.0f, 0.0f, "M5 7.5h14a2 2 0 0 1 2 2v8a2 2 0 0 1 -2 2h-14a2 2 0 0 1 -2 -2v-8a2 2 0 0 1 2 -2z", mira_cut_353_f0, 1 }, { 1, 1.0f, 0.0f, "M8.5 7.5V6a1.5 1.5 0 0 1 1.5-1.5h4A1.5 1.5 0 0 1 15.5 6v1.5", 0, 0 } };
static const char *const mira_tags_354[] = { "docker", "conteneurs", "pile", "empiler", "infrastructure" };
static const MiraOp mira_ops_o_354[] = { { 1, 1.0f, 0.0f, "M3.75 14.75h4a0.75 0.75 0 0 1 0.75 0.75v3a0.75 0.75 0 0 1 -0.75 0.75h-4a0.75 0.75 0 0 1 -0.75 -0.75v-3a0.75 0.75 0 0 1 0.75 -0.75zM10 14.75h4a0.75 0.75 0 0 1 0.75 0.75v3a0.75 0.75 0 0 1 -0.75 0.75h-4a0.75 0.75 0 0 1 -0.75 -0.75v-3a0.75 0.75 0 0 1 0.75 -0.75zM16.25 14.75h4a0.75 0.75 0 0 1 0.75 0.75v3a0.75 0.75 0 0 1 -0.75 0.75h-4a0.75 0.75 0 0 1 -0.75 -0.75v-3a0.75 0.75 0 0 1 0.75 -0.75zM6.85 9.75h4a0.75 0.75 0 0 1 0.75 0.75v3a0.75 0.75 0 0 1 -0.75 0.75h-4a0.75 0.75 0 0 1 -0.75 -0.75v-3a0.75 0.75 0 0 1 0.75 -0.75zM13.15 9.75h4a0.75 0.75 0 0 1 0.75 0.75v3a0.75 0.75 0 0 1 -0.75 0.75h-4a0.75 0.75 0 0 1 -0.75 -0.75v-3a0.75 0.75 0 0 1 0.75 -0.75zM10 4.75h4a0.75 0.75 0 0 1 0.75 0.75v3a0.75 0.75 0 0 1 -0.75 0.75h-4a0.75 0.75 0 0 1 -0.75 -0.75v-3a0.75 0.75 0 0 1 0.75 -0.75z", 0, 0 } };
static const MiraOp mira_ops_f_354[] = { { 0, 0.0f, 0.0f, "M3.75 14.75h4a0.75 0.75 0 0 1 0.75 0.75v3a0.75 0.75 0 0 1 -0.75 0.75h-4a0.75 0.75 0 0 1 -0.75 -0.75v-3a0.75 0.75 0 0 1 0.75 -0.75zM10 14.75h4a0.75 0.75 0 0 1 0.75 0.75v3a0.75 0.75 0 0 1 -0.75 0.75h-4a0.75 0.75 0 0 1 -0.75 -0.75v-3a0.75 0.75 0 0 1 0.75 -0.75zM16.25 14.75h4a0.75 0.75 0 0 1 0.75 0.75v3a0.75 0.75 0 0 1 -0.75 0.75h-4a0.75 0.75 0 0 1 -0.75 -0.75v-3a0.75 0.75 0 0 1 0.75 -0.75zM6.85 9.75h4a0.75 0.75 0 0 1 0.75 0.75v3a0.75 0.75 0 0 1 -0.75 0.75h-4a0.75 0.75 0 0 1 -0.75 -0.75v-3a0.75 0.75 0 0 1 0.75 -0.75zM13.15 9.75h4a0.75 0.75 0 0 1 0.75 0.75v3a0.75 0.75 0 0 1 -0.75 0.75h-4a0.75 0.75 0 0 1 -0.75 -0.75v-3a0.75 0.75 0 0 1 0.75 -0.75zM10 4.75h4a0.75 0.75 0 0 1 0.75 0.75v3a0.75 0.75 0 0 1 -0.75 0.75h-4a0.75 0.75 0 0 1 -0.75 -0.75v-3a0.75 0.75 0 0 1 0.75 -0.75z", 0, 0 } };
static const char *const mira_tags_355[] = { "whatsapp", "appel", "messagerie", "t\303\251l\303\251phone", "contact" };
static const MiraOp mira_ops_o_355[] = { { 1, 1.0f, 0.0f, "M12 3.5c4.7 0 8.5 3.4 8.5 7.5s-3.8 7.5-8.5 7.5c-1.3 0-2.5-.2-3.6-.7L4 20l1.4-3.6C4.2 15 3.5 13.1 3.5 11c0-4.1 3.8-7.5 8.5-7.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 7.5h1.5l.8 2-1 .8a4.5 4.5 0 0 0 3.4 3.4l.8-1 2 .8V15a1 1 0 0 1-1 1A7.5 7.5 0 0 1 8 8.5a1 1 0 0 1 1-1z", 0, 0 } };
static const MiraOp mira_cut_355_f0[] = { { 1, 1.0f, 0.0f, "M9 7.5h1.5l.8 2-1 .8a4.5 4.5 0 0 0 3.4 3.4l.8-1 2 .8V15a1 1 0 0 1-1 1A7.5 7.5 0 0 1 8 8.5a1 1 0 0 1 1-1z", 0, 0 } };
static const MiraOp mira_ops_f_355[] = { { 0, 0.0f, 0.0f, "M12 3.5c4.7 0 8.5 3.4 8.5 7.5s-3.8 7.5-8.5 7.5c-1.3 0-2.5-.2-3.6-.7L4 20l1.4-3.6C4.2 15 3.5 13.1 3.5 11c0-4.1 3.8-7.5 8.5-7.5z", mira_cut_355_f0, 1 } };
static const char *const mira_tags_356[] = { "rss", "flux", "abonnement", "podcast", "fil" };
static const MiraOp mira_ops_o_356[] = { { 0, 0.0f, 0.0f, "M6 16.25a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M6.5 6.5A11 11 0 0 1 17.5 17.5M6.5 11a6.5 6.5 0 0 1 6.5 6.5", 0, 0 } };
static const MiraOp mira_ops_f_356[] = { { 0, 0.0f, 0.0f, "M6 16.25a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M6.5 6.5A11 11 0 0 1 17.5 17.5M6.5 11a6.5 6.5 0 0 1 6.5 6.5", 0, 0 } };
static const char *const mira_tags_357[] = { "figma", "plume", "stylo", "design vectoriel", "trac\303\251", "dessin" };
static const MiraOp mira_ops_o_357[] = { { 1, 1.0f, 0.0f, "M12 3 6 9v6l6 6 6-6V9z", 0, 0 }, { 1, 1.0f, 0.0f, "M10.4 12a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0zM12 13.6V21", 0, 0 } };
static const MiraOp mira_cut_357_f0[] = { { 1, 1.0f, 0.0f, "M10.4 12a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0zM12 13.6V21", 0, 0 } };
static const MiraOp mira_ops_f_357[] = { { 0, 0.0f, 0.0f, "M12 3 6 9v6l6 6 6-6V9z", mira_cut_357_f0, 1 } };
static const char *const mira_tags_358[] = { "spotify", "musique", "lecture", "playlist", "audio" };
static const MiraOp mira_ops_o_358[] = { { 1, 1.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M10.5 15V8l5-1v6.5M8 15.25a1.25 1.25 0 1 0 2.5 0a1.25 1.25 0 1 0 -2.5 0zM13 13.75a1.25 1.25 0 1 0 2.5 0a1.25 1.25 0 1 0 -2.5 0z", 0, 0 } };
static const MiraOp mira_cut_358_f0[] = { { 1, 1.0f, 0.0f, "M10.5 15V8l5-1v6.5M8 15.25a1.25 1.25 0 1 0 2.5 0a1.25 1.25 0 1 0 -2.5 0zM13 13.75a1.25 1.25 0 1 0 2.5 0a1.25 1.25 0 1 0 -2.5 0z", 0, 0 } };
static const MiraOp mira_ops_f_358[] = { { 0, 0.0f, 0.0f, "M3 12a9 9 0 1 0 18 0a9 9 0 1 0 -18 0z", mira_cut_358_f0, 1 } };
static const char *const mira_tags_359[] = { "corps", "silhouette", "debout", "personnage", "morphologie" };
static const MiraOp mira_ops_o_359[] = { { 1, 1.0f, 0.0f, "M9.75 4.75a2.25 2.25 0 1 0 4.5 0a2.25 2.25 0 1 0 -4.5 0zM12 9v6M12 15l-3.25 6M12 15l3.25 6M6.5 13.5 12 10.5l5.5 3", 0, 0 } };
static const MiraOp mira_ops_f_359[] = { { 1, 1.0f, 0.0f, "M9.75 4.75a2.25 2.25 0 1 0 4.5 0a2.25 2.25 0 1 0 -4.5 0zM12 9v6M12 15l-3.25 6M12 15l3.25 6M6.5 13.5 12 10.5l5.5 3", 0, 0 } };
static const char *const mira_tags_360[] = { "cheveux", "coiffure", "m\303\250che", "coupe", "personnage" };
static const MiraOp mira_ops_o_360[] = { { 1, 1.0f, 0.0f, "M12 3.5c-4.4 0-7 3.2-7 7.5v8.5h2.5V12c2.5 0 5-1 6.5-3 1 1.5 2 2.5 3.5 3v7.5H19V11c0-4.3-2.6-7.5-7-7.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.5 12v1.5a4.5 4.5 0 0 0 9 0V12", 0, 0 } };
static const MiraOp mira_ops_f_360[] = { { 0, 0.0f, 0.0f, "M12 3.5c-4.4 0-7 3.2-7 7.5v8.5h2.5V12c2.5 0 5-1 6.5-3 1 1.5 2 2.5 3.5 3v7.5H19V11c0-4.3-2.6-7.5-7-7.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.5 12v1.5a4.5 4.5 0 0 0 9 0V12", 0, 0 } };
static const char *const mira_tags_361[] = { "casque", "chapeau", "couvre-chef", "t\303\252te", "tenue" };
static const MiraOp mira_ops_o_361[] = { { 1, 1.0f, 0.0f, "M4.5 16.5v-2a7.5 7.5 0 0 1 15 0v2z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 7v4.5", 0, 0 }, { 1, 1.0f, 0.0f, "M2.5 16.5h19", 0, 0 } };
static const MiraOp mira_cut_361_f0[] = { { 1, 1.0f, 0.0f, "M12 7v4.5", 0, 0 } };
static const MiraOp mira_ops_f_361[] = { { 0, 0.0f, 0.0f, "M4.5 16.5v-2a7.5 7.5 0 0 1 15 0v2z", mira_cut_361_f0, 1 }, { 1, 1.0f, 0.0f, "M2.5 16.5h19", 0, 0 } };
static const char *const mira_tags_362[] = { "t-shirt", "haut", "maillot", "v\303\252tement", "tenue" };
static const MiraOp mira_ops_o_362[] = { { 1, 1.0f, 0.0f, "M9 4 4 6.5l-1.5 4 3 1.5 1-2V20h11V10l1 2 3-1.5-1.5-4L15 4c-.5 1.5-1.5 2.5-3 2.5S9.5 5.5 9 4z", 0, 0 } };
static const MiraOp mira_ops_f_362[] = { { 0, 0.0f, 0.0f, "M9 4 4 6.5l-1.5 4 3 1.5 1-2V20h11V10l1 2 3-1.5-1.5-4L15 4c-.5 1.5-1.5 2.5-3 2.5S9.5 5.5 9 4z", 0, 0 } };
static const char *const mira_tags_363[] = { "veste", "pull", "manteau", "torse", "par-dessus", "tenue" };
static const MiraOp mira_ops_o_363[] = { { 1, 1.0f, 0.0f, "M9 3.5 4.5 5.5 3 9.5V20h18V9.5l-1.5-4L15 3.5l-3 4z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 7.5V20M6.5 12v8M17.5 12v8", 0, 0 } };
static const MiraOp mira_cut_363_f0[] = { { 1, 1.0f, 0.0f, "M12 7.5V20M6.5 12v8M17.5 12v8", 0, 0 } };
static const MiraOp mira_ops_f_363[] = { { 0, 0.0f, 0.0f, "M9 3.5 4.5 5.5 3 9.5V20h18V9.5l-1.5-4L15 3.5l-3 4z", mira_cut_363_f0, 1 } };
static const char *const mira_tags_364[] = { "gants", "manchettes", "mains", "bras", "tenue" };
static const MiraOp mira_ops_o_364[] = { { 1, 1.0f, 0.0f, "M8.5 20.5V13L6 10.5a1.5 1.5 0 0 1 2.1-2.1L9 9.3V6a1.5 1.5 0 0 1 3 0V4.5a1.5 1.5 0 0 1 3 0V6a1.5 1.5 0 0 1 3 0v8a6 6 0 0 1-1.5 4v2.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M8.5 17.5h8M12 6v4M15 6v4", 0, 0 } };
static const MiraOp mira_cut_364_f0[] = { { 1, 1.0f, 0.0f, "M8.5 17.5h8M12 6v4M15 6v4", 0, 0 } };
static const MiraOp mira_ops_f_364[] = { { 0, 0.0f, 0.0f, "M8.5 20.5V13L6 10.5a1.5 1.5 0 0 1 2.1-2.1L9 9.3V6a1.5 1.5 0 0 1 3 0V4.5a1.5 1.5 0 0 1 3 0V6a1.5 1.5 0 0 1 3 0v8a6 6 0 0 1-1.5 4v2.5z", mira_cut_364_f0, 1 } };
static const char *const mira_tags_365[] = { "pantalon", "pantacourt", "jambes", "bas", "tenue" };
static const MiraOp mira_ops_o_365[] = { { 1, 1.0f, 0.0f, "M6 3.5h12l1 17h-4.5L12 10l-2.5 10.5H5z", 0, 0 }, { 1, 1.0f, 0.0f, "M6.2 7h11.6", 0, 0 } };
static const MiraOp mira_cut_365_f0[] = { { 1, 1.0f, 0.0f, "M6.2 7h11.6", 0, 0 } };
static const MiraOp mira_ops_f_365[] = { { 0, 0.0f, 0.0f, "M6 3.5h12l1 17h-4.5L12 10l-2.5 10.5H5z", mira_cut_365_f0, 1 } };
static const char *const mira_tags_366[] = { "chaussures", "basket", "pieds", "tenue" };
static const MiraOp mira_ops_o_366[] = { { 1, 1.0f, 0.0f, "M3.5 8h4L9 10.5h2.5l7.5 3a3 3 0 0 1 2 2.8V17H3.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M3.5 14.5h16.5M11.5 10.5l-1 2M14.5 11.7l-1 2", 0, 0 } };
static const MiraOp mira_cut_366_f0[] = { { 1, 1.0f, 0.0f, "M3.5 14.5h16.5M11.5 10.5l-1 2M14.5 11.7l-1 2", 0, 0 } };
static const MiraOp mira_ops_f_366[] = { { 0, 0.0f, 0.0f, "M3.5 8h4L9 10.5h2.5l7.5 3a3 3 0 0 1 2 2.8V17H3.5z", mira_cut_366_f0, 1 } };
static const char *const mira_tags_367[] = { "sous-v\303\252tements", "slip", "culotte", "cale\303\247on", "tenue" };
static const MiraOp mira_ops_o_367[] = { { 1, 1.0f, 0.0f, "M3.5 6h17v2.5c-4 1-6.5 4.5-7 9.5h-3c-.5-5-3-8.5-7-9.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M3.5 8.5h17", 0, 0 } };
static const MiraOp mira_cut_367_f0[] = { { 1, 1.0f, 0.0f, "M3.5 8.5h17", 0, 0 } };
static const MiraOp mira_ops_f_367[] = { { 0, 0.0f, 0.0f, "M3.5 6h17v2.5c-4 1-6.5 4.5-7 9.5h-3c-.5-5-3-8.5-7-9.5z", mira_cut_367_f0, 1 } };
static const char *const mira_tags_368[] = { "lunettes", "vue", "accessoire", "yeux" };
static const MiraOp mira_ops_o_368[] = { { 1, 1.0f, 0.0f, "M3.5 12.5a3.5 3.5 0 1 0 7 0a3.5 3.5 0 1 0 -7 0zM13.5 12.5a3.5 3.5 0 1 0 7 0a3.5 3.5 0 1 0 -7 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M10.5 12.5a1.5 1.5 0 0 1 3 0M3.5 12.5 2.5 9M20.5 12.5l1-3.5", 0, 0 } };
static const MiraOp mira_ops_f_368[] = { { 0, 0.0f, 0.0f, "M3.5 12.5a3.5 3.5 0 1 0 7 0a3.5 3.5 0 1 0 -7 0zM13.5 12.5a3.5 3.5 0 1 0 7 0a3.5 3.5 0 1 0 -7 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M10.5 12.5a1.5 1.5 0 0 1 3 0M3.5 12.5 2.5 9M20.5 12.5l1-3.5", 0, 0 } };
static const char *const mira_tags_369[] = { "boucle d'oreille", "oreille", "cr\303\251ole", "bijou", "accessoire" };
static const MiraOp mira_ops_o_369[] = { { 1, 1.0f, 0.0f, "M7 6.5a2.5 2.5 0 0 1 5 0V9M6.5 14.5a5.5 5.5 0 1 0 11 0a5.5 5.5 0 1 0 -11 0z", 0, 0 } };
static const MiraOp mira_ops_f_369[] = { { 1, 1.0f, 0.0f, "M7 6.5a2.5 2.5 0 0 1 5 0V9M6.5 14.5a5.5 5.5 0 1 0 11 0a5.5 5.5 0 1 0 -11 0z", 0, 0 } };
static const char *const mira_tags_370[] = { "collier", "cou", "foulard", "pendentif", "bijou", "accessoire" };
static const MiraOp mira_ops_o_370[] = { { 1, 1.0f, 0.0f, "M12 15l2.25 2.75L12 21l-2.25-3.25z", 0, 0 }, { 1, 1.0f, 0.0f, "M5 3.5c0 7 3 11.5 7 11.5s7-4.5 7-11.5", 0, 0 } };
static const MiraOp mira_ops_f_370[] = { { 0, 0.0f, 0.0f, "M12 15l2.25 2.75L12 21l-2.25-3.25z", 0, 0 }, { 1, 1.0f, 0.0f, "M5 3.5c0 7 3 11.5 7 11.5s7-4.5 7-11.5", 0, 0 } };
static const char *const mira_tags_371[] = { "bracelet", "poignet", "montre", "bijou", "accessoire" };
static const MiraOp mira_ops_o_371[] = { { 1, 1.0f, 0.0f, "M10.4 4.25a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0zM15.88 6.52a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0zM18.15 12a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0zM15.88 17.48a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0zM10.4 19.75a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0zM4.92 17.48a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0zM2.65 12a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0zM4.92 6.52a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0z", 0, 0 } };
static const MiraOp mira_ops_f_371[] = { { 0, 0.0f, 0.0f, "M10.4 4.25a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0zM15.88 6.52a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0zM18.15 12a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0zM15.88 17.48a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0zM10.4 19.75a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0zM4.92 17.48a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0zM2.65 12a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0zM4.92 6.52a1.6 1.6 0 1 0 3.2 0a1.6 1.6 0 1 0 -3.2 0z", 0, 0 } };
static const char *const mira_tags_372[] = { "chevill\303\250re", "cheville", "bracelet de cheville", "bijou", "accessoire" };
static const MiraOp mira_ops_o_372[] = { { 0, 0.0f, 0.0f, "M11 10h7v2.5h-7z", 0, 0 }, { 1, 1.0f, 0.0f, "M11 3v10.5L6.5 16.5a2.2 2.2 0 0 0 1.2 4H16.5a1.5 1.5 0 0 0 1.5-1.5V3", 0, 0 } };
static const MiraOp mira_ops_f_372[] = { { 0, 0.0f, 0.0f, "M11 10h7v2.5h-7z", 0, 0 }, { 1, 1.0f, 0.0f, "M11 3v10.5L6.5 16.5a2.2 2.2 0 0 0 1.2 4H16.5a1.5 1.5 0 0 0 1.5-1.5V3", 0, 0 } };
static const char *const mira_tags_373[] = { "bague", "doigts", "alliance", "bijou", "accessoire" };
static const MiraOp mira_ops_o_373[] = { { 1, 1.0f, 0.0f, "M10 3.5h4l2 2.5-4 3.5-4-3.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M6.5 15a5.5 5.5 0 1 0 11 0a5.5 5.5 0 1 0 -11 0z", 0, 0 } };
static const MiraOp mira_ops_f_373[] = { { 0, 0.0f, 0.0f, "M10 3.5h4l2 2.5-4 3.5-4-3.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M6.5 15a5.5 5.5 0 1 0 11 0a5.5 5.5 0 1 0 -11 0z", 0, 0 } };
static const char *const mira_tags_374[] = { "gilet", "gilet pare-balles", "protection", "torse", "accessoire" };
static const MiraOp mira_ops_o_374[] = { { 1, 1.0f, 0.0f, "M7 3.5h2.5c.5 2.5 1.2 4 2.5 4s2-1.5 2.5-4H17c0 3 1 5.5 2.5 6.5v10.5h-15V10C6 9 7 6.5 7 3.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M12 7.5v13M4.5 14.5h15", 0, 0 } };
static const MiraOp mira_cut_374_f0[] = { { 1, 1.0f, 0.0f, "M12 7.5v13M4.5 14.5h15", 0, 0 } };
static const MiraOp mira_ops_f_374[] = { { 0, 0.0f, 0.0f, "M7 3.5h2.5c.5 2.5 1.2 4 2.5 4s2-1.5 2.5-4H17c0 3 1 5.5 2.5 6.5v10.5h-15V10C6 9 7 6.5 7 3.5z", mira_cut_374_f0, 1 } };
static const char *const mira_tags_375[] = { "parachute", "saut", "chute", "accessoire" };
static const MiraOp mira_ops_o_375[] = { { 1, 1.0f, 0.0f, "M3 11a9 9 0 0 1 18 0c-1.5-1-3-1-4.5 0-1.5-1-3-1-4.5 0-1.5-1-3-1-4.5 0-1.5-1-3-1-4.5 0zM11 18h2a1 1 0 0 1 1 1v1a1 1 0 0 1 -1 1h-2a1 1 0 0 1 -1 -1v-1a1 1 0 0 1 1 -1z", 0, 0 }, { 1, 1.0f, 0.0f, "M3 11l7 7M21 11l-7 7M12 11v7", 0, 0 } };
static const MiraOp mira_ops_f_375[] = { { 0, 0.0f, 0.0f, "M3 11a9 9 0 0 1 18 0c-1.5-1-3-1-4.5 0-1.5-1-3-1-4.5 0-1.5-1-3-1-4.5 0-1.5-1-3-1-4.5 0zM11 18h2a1 1 0 0 1 1 1v1a1 1 0 0 1 -1 1h-2a1 1 0 0 1 -1 -1v-1a1 1 0 0 1 1 -1z", 0, 0 }, { 1, 1.0f, 0.0f, "M3 11l7 7M21 11l-7 7M12 11v7", 0, 0 } };
static const char *const mira_tags_376[] = { "chapeau", "feutre", "borsalino", "couvre-chef", "tenue" };
static const MiraOp mira_ops_o_376[] = { { 1, 1.0f, 0.0f, "M7.5 15l1-6.5A1.5 1.5 0 0 1 10 7.2h4a1.5 1.5 0 0 1 1.5 1.3l1 6.5zM3.75 15h16.5a1.25 1.25 0 0 1 1.25 1.25v0a1.25 1.25 0 0 1 -1.25 1.25h-16.5a1.25 1.25 0 0 1 -1.25 -1.25v0a1.25 1.25 0 0 1 1.25 -1.25z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.9 12.5h8.2", 0, 0 } };
static const MiraOp mira_cut_376_f0[] = { { 1, 1.0f, 0.0f, "M7.9 12.5h8.2", 0, 0 } };
static const MiraOp mira_ops_f_376[] = { { 0, 0.0f, 0.0f, "M7.5 15l1-6.5A1.5 1.5 0 0 1 10 7.2h4a1.5 1.5 0 0 1 1.5 1.3l1 6.5zM3.75 15h16.5a1.25 1.25 0 0 1 1.25 1.25v0a1.25 1.25 0 0 1 -1.25 1.25h-16.5a1.25 1.25 0 0 1 -1.25 -1.25v0a1.25 1.25 0 0 1 1.25 -1.25z", mira_cut_376_f0, 1 } };
static const char *const mira_tags_377[] = { "casquette", "visi\303\250re", "couvre-chef", "tenue" };
static const MiraOp mira_ops_o_377[] = { { 1, 1.0f, 0.0f, "M3.5 16.5V14a7 7 0 0 1 14 0v.5H20a1.5 1.5 0 0 1 1.5 1.5v.5z", 0, 0 } };
static const MiraOp mira_ops_f_377[] = { { 0, 0.0f, 0.0f, "M3.5 16.5V14a7 7 0 0 1 14 0v.5H20a1.5 1.5 0 0 1 1.5 1.5v.5z", 0, 0 } };
static const char *const mira_tags_378[] = { "bonnet", "pompon", "hiver", "couvre-chef", "tenue" };
static const MiraOp mira_ops_o_378[] = { { 1, 1.0f, 0.0f, "M5 16v-3a7 7 0 0 1 14 0v3zM5.5 16h13a1.5 1.5 0 0 1 1.5 1.5v1.5a1.5 1.5 0 0 1 -1.5 1.5h-13a1.5 1.5 0 0 1 -1.5 -1.5v-1.5a1.5 1.5 0 0 1 1.5 -1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M8 17v2.5M12 17v2.5M16 17v2.5", 0, 0 }, { 0, 0.0f, 0.0f, "M10.25 4.25a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0z", 0, 0 } };
static const MiraOp mira_cut_378_f0[] = { { 1, 1.0f, 0.0f, "M8 17v2.5M12 17v2.5M16 17v2.5", 0, 0 } };
static const MiraOp mira_ops_f_378[] = { { 0, 0.0f, 0.0f, "M5 16v-3a7 7 0 0 1 14 0v3zM5.5 16h13a1.5 1.5 0 0 1 1.5 1.5v1.5a1.5 1.5 0 0 1 -1.5 1.5h-13a1.5 1.5 0 0 1 -1.5 -1.5v-1.5a1.5 1.5 0 0 1 1.5 -1.5z", mira_cut_378_f0, 1 }, { 0, 0.0f, 0.0f, "M10.25 4.25a1.75 1.75 0 1 0 3.5 0a1.75 1.75 0 1 0 -3.5 0z", 0, 0 } };
static const char *const mira_tags_379[] = { "casque moto", "casque int\303\251gral", "visi\303\250re", "motard", "tenue" };
static const MiraOp mira_ops_o_379[] = { { 1, 1.0f, 0.0f, "M6 19.5C3.8 17.5 2.8 14.5 3.2 11.5 3.8 7 7.5 4 12 4c4.5 0 7.8 2.8 9 7l.5 4.5-3.5 4z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 10c3.8-1 7.8-1.2 11.7-.6l.6 3.6H11a2 2 0 0 1-2-2zM13.5 17h4.5", 0, 0 } };
static const MiraOp mira_cut_379_f0[] = { { 1, 1.0f, 0.0f, "M9 10c3.8-1 7.8-1.2 11.7-.6l.6 3.6H11a2 2 0 0 1-2-2zM13.5 17h4.5", 0, 0 } };
static const MiraOp mira_ops_f_379[] = { { 0, 0.0f, 0.0f, "M6 19.5C3.8 17.5 2.8 14.5 3.2 11.5 3.8 7 7.5 4 12 4c4.5 0 7.8 2.8 9 7l.5 4.5-3.5 4z", mira_cut_379_f0, 1 } };
static const char *const mira_tags_380[] = { "casque motocross", "cross", "enduro", "mentonni\303\250re", "tenue" };
static const MiraOp mira_ops_o_380[] = { { 1, 1.0f, 0.0f, "M6 19.5C3.8 17.5 3 14.5 3.3 11.5 3.8 7 7.5 4.5 11.5 4.5c2.5 0 4.8.9 6.5 2.5V9.5h-5.5A1.5 1.5 0 0 0 11 11v2a1.5 1.5 0 0 0 1.5 1.5H17l4.5 1.5-3.5 3.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M11.5 4.5l10 2-1.5 3H18", 0, 0 } };
static const MiraOp mira_ops_f_380[] = { { 0, 0.0f, 0.0f, "M6 19.5C3.8 17.5 3 14.5 3.3 11.5 3.8 7 7.5 4.5 11.5 4.5c2.5 0 4.8.9 6.5 2.5V9.5h-5.5A1.5 1.5 0 0 0 11 11v2a1.5 1.5 0 0 0 1.5 1.5H17l4.5 1.5-3.5 3.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M11.5 4.5l10 2-1.5 3H18", 0, 0 } };
static const char *const mira_tags_381[] = { "gilet pare-balles", "kevlar", "porte-plaques", "protection", "accessoire" };
static const MiraOp mira_ops_o_381[] = { { 1, 1.0f, 0.0f, "M7 3.5h3V7h4V3.5h3v4l2.5 2v11h-15v-11L7 7.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M4.5 12.5h15M8 15.5h8M8 18h8", 0, 0 } };
static const MiraOp mira_cut_381_f0[] = { { 1, 1.0f, 0.0f, "M4.5 12.5h15M8 15.5h8M8 18h8", 0, 0 } };
static const MiraOp mira_ops_f_381[] = { { 0, 0.0f, 0.0f, "M7 3.5h3V7h4V3.5h3v4l2.5 2v11h-15v-11L7 7.5z", mira_cut_381_f0, 1 } };
static const char *const mira_tags_382[] = { "botte", "bottine", "rangers", "chaussures", "tenue" };
static const MiraOp mira_ops_o_382[] = { { 1, 1.0f, 0.0f, "M5 3.5h7.5V13l5.5 1.8a2.5 2.5 0 0 1 1.5 2.3V20H5z", 0, 0 }, { 1, 1.0f, 0.0f, "M5 17h14.5M5 6.5h7.5", 0, 0 } };
static const MiraOp mira_cut_382_f0[] = { { 1, 1.0f, 0.0f, "M5 17h14.5M5 6.5h7.5", 0, 0 } };
static const MiraOp mira_ops_f_382[] = { { 0, 0.0f, 0.0f, "M5 3.5h7.5V13l5.5 1.8a2.5 2.5 0 0 1 1.5 2.3V20H5z", mira_cut_382_f0, 1 } };
static const char *const mira_tags_383[] = { "talon", "escarpin", "talons hauts", "chaussures", "tenue" };
static const MiraOp mira_ops_o_383[] = { { 1, 1.0f, 0.0f, "M3.5 15.5c0-1.2 1-2 2.5-2.3l4.5-1L17.5 6a1.5 1.5 0 0 1 2.2.2l.3.5V10l-1.5 1.5v7h-1.5l-1-6.5C13 13 11 17 6 17.5a2.5 2.5 0 0 1-2.5-2z", 0, 0 } };
static const MiraOp mira_ops_f_383[] = { { 0, 0.0f, 0.0f, "M3.5 15.5c0-1.2 1-2 2.5-2.3l4.5-1L17.5 6a1.5 1.5 0 0 1 2.2.2l.3.5V10l-1.5 1.5v7h-1.5l-1-6.5C13 13 11 17 6 17.5a2.5 2.5 0 0 1-2.5-2z", 0, 0 } };
static const char *const mira_tags_384[] = { "short", "bermuda", "bas", "jambes", "tenue" };
static const MiraOp mira_ops_o_384[] = { { 1, 1.0f, 0.0f, "M5.5 6.5h13l1 11h-6L12 12.5l-1.5 5h-6z", 0, 0 }, { 1, 1.0f, 0.0f, "M5.7 9h12.6", 0, 0 } };
static const MiraOp mira_cut_384_f0[] = { { 1, 1.0f, 0.0f, "M5.7 9h12.6", 0, 0 } };
static const MiraOp mira_ops_f_384[] = { { 0, 0.0f, 0.0f, "M5.5 6.5h13l1 11h-6L12 12.5l-1.5 5h-6z", mira_cut_384_f0, 1 } };
static const char *const mira_tags_385[] = { "jupe", "pliss\303\251e", "bas", "tenue" };
static const MiraOp mira_ops_o_385[] = { { 1, 1.0f, 0.0f, "M7.5 5h9l3.5 14h-16z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.4 8h9.2M10 8l-1 11M14 8l1 11", 0, 0 } };
static const MiraOp mira_cut_385_f0[] = { { 1, 1.0f, 0.0f, "M7.4 8h9.2M10 8l-1 11M14 8l1 11", 0, 0 } };
static const MiraOp mira_ops_f_385[] = { { 0, 0.0f, 0.0f, "M7.5 5h9l3.5 14h-16z", mira_cut_385_f0, 1 } };
static const char *const mira_tags_386[] = { "sweat \303\240 capuche", "hoodie", "capuche", "pull", "tenue" };
static const MiraOp mira_ops_o_386[] = { { 1, 1.0f, 0.0f, "M8.5 6C8.5 4 10 3 12 3s3.5 1 3.5 3l4 1.5L21 11v9H3v-9l1.5-3.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M6.5 12v8M17.5 12v8M9.5 6.5c.5 1.5 1.5 2 2.5 2s2-.5 2.5-2M10.5 9v3M13.5 9v3", 0, 0 } };
static const MiraOp mira_cut_386_f0[] = { { 1, 1.0f, 0.0f, "M6.5 12v8M17.5 12v8M9.5 6.5c.5 1.5 1.5 2 2.5 2s2-.5 2.5-2M10.5 9v3M13.5 9v3", 0, 0 } };
static const MiraOp mira_ops_f_386[] = { { 0, 0.0f, 0.0f, "M8.5 6C8.5 4 10 3 12 3s3.5 1 3.5 3l4 1.5L21 11v9H3v-9l1.5-3.5z", mira_cut_386_f0, 1 } };
static const char *const mira_tags_387[] = { "chemise", "col", "boutons", "haut", "tenue" };
static const MiraOp mira_ops_o_387[] = { { 1, 1.0f, 0.0f, "M9 3.5 4.5 5.5 3 9.5V20h18V9.5l-1.5-4L15 3.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 3.5 10.5 7.5 12 5.5l1.5 2L15 3.5M12 9v.01M12 12.5v.01M12 16v.01M6.5 12v8M17.5 12v8", 0, 0 } };
static const MiraOp mira_cut_387_f0[] = { { 1, 1.0f, 0.0f, "M9 3.5 10.5 7.5 12 5.5l1.5 2L15 3.5M12 9v.01M12 12.5v.01M12 16v.01M6.5 12v8M17.5 12v8", 0, 0 } };
static const MiraOp mira_ops_f_387[] = { { 0, 0.0f, 0.0f, "M9 3.5 4.5 5.5 3 9.5V20h18V9.5l-1.5-4L15 3.5z", mira_cut_387_f0, 1 } };
static const char *const mira_tags_388[] = { "lunettes de soleil", "solaires", "lunettes", "accessoire" };
static const MiraOp mira_ops_o_388[] = { { 0, 0.0f, 0.0f, "M3.5 9h7v2.5a3.5 3.5 0 0 1-7 0zM13.5 9h7v2.5a3.5 3.5 0 0 1-7 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M2.5 9h19M10.5 10h3", 0, 0 } };
static const MiraOp mira_ops_f_388[] = { { 0, 0.0f, 0.0f, "M3.5 9h7v2.5a3.5 3.5 0 0 1-7 0zM13.5 9h7v2.5a3.5 3.5 0 0 1-7 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M2.5 9h19M10.5 10h3", 0, 0 } };
static const char *const mira_tags_389[] = { "masque", "masque de motocross", "lunettes de ski", "protection", "accessoire" };
static const MiraOp mira_ops_o_389[] = { { 1, 1.0f, 0.0f, "M7.5 8h9a4 4 0 0 1 0 8h-1.5l-1.5-1.5h-3L9 16H7.5a4 4 0 0 1 0-8z", 0, 0 }, { 1, 1.0f, 0.0f, "M3.5 12H2M20.5 12H22", 0, 0 } };
static const MiraOp mira_ops_f_389[] = { { 0, 0.0f, 0.0f, "M7.5 8h9a4 4 0 0 1 0 8h-1.5l-1.5-1.5h-3L9 16H7.5a4 4 0 0 1 0-8z", 0, 0 }, { 1, 1.0f, 0.0f, "M3.5 12H2M20.5 12H22", 0, 0 } };
static const char *const mira_tags_390[] = { "masque", "cagoule", "visage", "braquage", "tenue" };
static const MiraOp mira_ops_o_390[] = { { 1, 1.0f, 0.0f, "M12 3a7.5 7.5 0 0 0-7.5 7.5V15c0 3.6 3.4 6 7.5 6s7.5-2.4 7.5-6v-4.5A7.5 7.5 0 0 0 12 3z", 0, 0 }, { 1, 1.0f, 0.0f, "M8.75 9h6.5a1.75 1.75 0 0 1 1.75 1.75v0a1.75 1.75 0 0 1 -1.75 1.75h-6.5a1.75 1.75 0 0 1 -1.75 -1.75v0a1.75 1.75 0 0 1 1.75 -1.75zM10.5 16.5h3", 0, 0 } };
static const MiraOp mira_cut_390_f0[] = { { 1, 1.0f, 0.0f, "M8.75 9h6.5a1.75 1.75 0 0 1 1.75 1.75v0a1.75 1.75 0 0 1 -1.75 1.75h-6.5a1.75 1.75 0 0 1 -1.75 -1.75v0a1.75 1.75 0 0 1 1.75 -1.75zM10.5 16.5h3", 0, 0 } };
static const MiraOp mira_ops_f_390[] = { { 0, 0.0f, 0.0f, "M12 3a7.5 7.5 0 0 0-7.5 7.5V15c0 3.6 3.4 6 7.5 6s7.5-2.4 7.5-6v-4.5A7.5 7.5 0 0 0 12 3z", mira_cut_390_f0, 1 } };
static const char *const mira_tags_391[] = { "sac \303\240 dos", "sac", "bagage", "randonn\303\251e", "accessoire" };
static const MiraOp mira_ops_o_391[] = { { 1, 1.0f, 0.0f, "M8 6.5h8a3 3 0 0 1 3 3v8.5a3 3 0 0 1 -3 3h-8a3 3 0 0 1 -3 -3v-8.5a3 3 0 0 1 3 -3z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 14h6a1 1 0 0 1 1 1v2.5a1 1 0 0 1 -1 1h-6a1 1 0 0 1 -1 -1v-2.5a1 1 0 0 1 1 -1zM5 11h14", 0, 0 }, { 1, 1.0f, 0.0f, "M9.5 6.5V5a1.5 1.5 0 0 1 1.5-1.5h2A1.5 1.5 0 0 1 14.5 5v1.5", 0, 0 } };
static const MiraOp mira_cut_391_f0[] = { { 1, 1.0f, 0.0f, "M9 14h6a1 1 0 0 1 1 1v2.5a1 1 0 0 1 -1 1h-6a1 1 0 0 1 -1 -1v-2.5a1 1 0 0 1 1 -1zM5 11h14", 0, 0 } };
static const MiraOp mira_ops_f_391[] = { { 0, 0.0f, 0.0f, "M8 6.5h8a3 3 0 0 1 3 3v8.5a3 3 0 0 1 -3 3h-8a3 3 0 0 1 -3 -3v-8.5a3 3 0 0 1 3 -3z", mira_cut_391_f0, 1 }, { 1, 1.0f, 0.0f, "M9.5 6.5V5a1.5 1.5 0 0 1 1.5-1.5h2A1.5 1.5 0 0 1 14.5 5v1.5", 0, 0 } };
static const char *const mira_tags_392[] = { "barbe", "moustache", "pilosit\303\251", "visage", "personnage" };
static const MiraOp mira_ops_o_392[] = { { 1, 1.0f, 0.0f, "M5 10.5v3a7 7 0 0 0 14 0v-3c-.8 1.8-2 3-3.5 3.5-1.3-.7-2.5-1-3.5-1s-2.2.3-3.5 1C7 13.5 5.8 12.3 5 10.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M10.5 16.5h3", 0, 0 }, { 1, 1.0f, 0.0f, "M5 10.5a7 7 0 0 1 14 0M9.5 9.5v.01M14.5 9.5v.01", 0, 0 } };
static const MiraOp mira_cut_392_f0[] = { { 1, 1.0f, 0.0f, "M10.5 16.5h3", 0, 0 } };
static const MiraOp mira_ops_f_392[] = { { 0, 0.0f, 0.0f, "M5 10.5v3a7 7 0 0 0 14 0v-3c-.8 1.8-2 3-3.5 3.5-1.3-.7-2.5-1-3.5-1s-2.2.3-3.5 1C7 13.5 5.8 12.3 5 10.5z", mira_cut_392_f0, 1 }, { 1, 1.0f, 0.0f, "M5 10.5a7 7 0 0 1 14 0M9.5 9.5v.01M14.5 9.5v.01", 0, 0 } };
static const char *const mira_tags_393[] = { "tatouage", "tattoo", "encre", "c\305\223ur", "personnage" };
static const MiraOp mira_ops_o_393[] = { { 1, 1.0f, 0.0f, "M12 19.5s-7.5-4.5-7.5-10a4 4 0 0 1 7.5-2 4 4 0 0 1 7.5 2c0 5.5-7.5 10-7.5 10z", 0, 0 }, { 1, 1.0f, 0.0f, "M4.5 11h15v3h-15z", 0, 0 }, { 1, 1.0f, 0.0f, "M4.5 11H2l1 1.5-1 1.5h2.5M19.5 11H22l-1 1.5 1 1.5h-2.5", 0, 0 } };
static const MiraOp mira_cut_393_f0[] = { { 1, 1.0f, 0.0f, "M4.5 11h15v3h-15z", 0, 0 } };
static const MiraOp mira_ops_f_393[] = { { 0, 0.0f, 0.0f, "M12 19.5s-7.5-4.5-7.5-10a4 4 0 0 1 7.5-2 4 4 0 0 1 7.5 2c0 5.5-7.5 10-7.5 10z", mira_cut_393_f0, 1 }, { 1, 1.0f, 0.0f, "M4.5 11H2l1 1.5-1 1.5h2.5M19.5 11H22l-1 1.5 1 1.5h-2.5", 0, 0 } };
static const char *const mira_tags_394[] = { "robe", "jupe", "soir\303\251e", "tenue" };
static const MiraOp mira_ops_o_394[] = { { 1, 1.0f, 0.0f, "M9.5 3.5c.8 1 1.6 1.5 2.5 1.5s1.7-.5 2.5-1.5L15 6.5 14.5 9 20 20.5H4L9.5 9 9 6.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M9.5 9h5", 0, 0 } };
static const MiraOp mira_cut_394_f0[] = { { 1, 1.0f, 0.0f, "M9.5 9h5", 0, 0 } };
static const MiraOp mira_ops_f_394[] = { { 0, 0.0f, 0.0f, "M9.5 3.5c.8 1 1.6 1.5 2.5 1.5s1.7-.5 2.5-1.5L15 6.5 14.5 9 20 20.5H4L9.5 9 9 6.5z", mira_cut_394_f0, 1 } };
static const char *const mira_tags_395[] = { "pistolet", "arme de poing", "glock", "arme" };
static const MiraOp mira_ops_o_395[] = { { 1, 1.0f, 0.0f, "M4 7.5h15.5V10H10l-1 7.5H6.5l1-7.5H4z", 0, 0 }, { 1, 1.0f, 0.0f, "M10.5 10v1.5a1.5 1.5 0 0 0 1.5 1.5h1.5V10", 0, 0 } };
static const MiraOp mira_ops_f_395[] = { { 0, 0.0f, 0.0f, "M4 7.5h15.5V10H10l-1 7.5H6.5l1-7.5H4z", 0, 0 }, { 1, 1.0f, 0.0f, "M10.5 10v1.5a1.5 1.5 0 0 0 1.5 1.5h1.5V10", 0, 0 } };
static const char *const mira_tags_396[] = { "m1911", "colt 1911", "pistolet", "arme de poing", "arme" };
static const MiraOp mira_ops_o_396[] = { { 1, 1.0f, 0.0f, "M3.5 7.5h17V10H10.5l-1 8H7l1-8H3.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M11 10v1.5a1.5 1.5 0 0 0 1.5 1.5H14V10M3.5 7.5l-1-1", 0, 0 } };
static const MiraOp mira_ops_f_396[] = { { 0, 0.0f, 0.0f, "M3.5 7.5h17V10H10.5l-1 8H7l1-8H3.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M11 10v1.5a1.5 1.5 0 0 0 1.5 1.5H14V10M3.5 7.5l-1-1", 0, 0 } };
static const char *const mira_tags_397[] = { "desert eagle", "magnum", "pistolet", "arme de poing", "arme" };
static const MiraOp mira_ops_o_397[] = { { 1, 1.0f, 0.0f, "M3.5 6.5H20l1 1V10H10.5l-1 8H7l1-8H3.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M11 8.25h8.5", 0, 0 }, { 1, 1.0f, 0.0f, "M11 10v1.5a1.5 1.5 0 0 0 1.5 1.5H14V10", 0, 0 } };
static const MiraOp mira_cut_397_f0[] = { { 1, 1.0f, 0.0f, "M11 8.25h8.5", 0, 0 } };
static const MiraOp mira_ops_f_397[] = { { 0, 0.0f, 0.0f, "M3.5 6.5H20l1 1V10H10.5l-1 8H7l1-8H3.5z", mira_cut_397_f0, 1 }, { 1, 1.0f, 0.0f, "M11 10v1.5a1.5 1.5 0 0 0 1.5 1.5H14V10", 0, 0 } };
static const char *const mira_tags_398[] = { "revolver", "colt anaconda", "barillet", "arme de poing", "arme" };
static const MiraOp mira_ops_o_398[] = { { 1, 1.0f, 0.0f, "M8.75 7.5h2.5a1.25 1.25 0 0 1 1.25 1.25v1.5a1.25 1.25 0 0 1 -1.25 1.25h-2.5a1.25 1.25 0 0 1 -1.25 -1.25v-1.5a1.25 1.25 0 0 1 1.25 -1.25zM12.5 8h8v2.5h-8zM7.5 8.5H5L3.5 10l1 1.5-1 5.5h2.2L7.5 11.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.5 11.5v1a1.5 1.5 0 0 0 1.5 1.5h1v-2.5M5 8.5 4 7", 0, 0 } };
static const MiraOp mira_ops_f_398[] = { { 0, 0.0f, 0.0f, "M8.75 7.5h2.5a1.25 1.25 0 0 1 1.25 1.25v1.5a1.25 1.25 0 0 1 -1.25 1.25h-2.5a1.25 1.25 0 0 1 -1.25 -1.25v-1.5a1.25 1.25 0 0 1 1.25 -1.25zM12.5 8h8v2.5h-8zM7.5 8.5H5L3.5 10l1 1.5-1 5.5h2.2L7.5 11.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M7.5 11.5v1a1.5 1.5 0 0 0 1.5 1.5h1v-2.5M5 8.5 4 7", 0, 0 } };
static const char *const mira_tags_399[] = { "ak47", "kalachnikov", "fusil d'assaut", "arme" };
static const MiraOp mira_ops_o_399[] = { { 1, 1.0f, 0.0f, "M2 9.25 7 8.75h12.5v1.75H14c.2 1.8.8 3.5 1.8 5l-1.8 1c-1.1-1.6-1.7-3.6-2-6H11l-.7 3.5H8.6l.6-3.5H7l-4.5 2.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M19.5 9.65h3M14.5 7.75h6v1", 0, 0 } };
static const MiraOp mira_ops_f_399[] = { { 0, 0.0f, 0.0f, "M2 9.25 7 8.75h12.5v1.75H14c.2 1.8.8 3.5 1.8 5l-1.8 1c-1.1-1.6-1.7-3.6-2-6H11l-.7 3.5H8.6l.6-3.5H7l-4.5 2.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M19.5 9.65h3M14.5 7.75h6v1", 0, 0 } };
static const char *const mira_tags_400[] = { "m4a1", "m4", "carabine", "fusil d'assaut", "arme" };
static const MiraOp mira_ops_o_400[] = { { 1, 1.0f, 0.0f, "M2 10h3l1 .75h2V10h10.5v2H14l.35 4.5h-2L12 12h-1l-.8 3.5H8.4l.7-3.5H6l-1 1H2z", 0, 0 }, { 1, 1.0f, 0.0f, "M18.5 11H22M17 10V8.75", 0, 0 } };
static const MiraOp mira_ops_f_400[] = { { 0, 0.0f, 0.0f, "M2 10h3l1 .75h2V10h10.5v2H14l.35 4.5h-2L12 12h-1l-.8 3.5H8.4l.7-3.5H6l-1 1H2z", 0, 0 }, { 1, 1.0f, 0.0f, "M18.5 11H22M17 10V8.75", 0, 0 } };
static const char *const mira_tags_401[] = { "m16", "fusil d'assaut", "poign\303\251e de transport", "arme" };
static const MiraOp mira_ops_o_401[] = { { 1, 1.0f, 0.0f, "M2 10 8 9.75h10.5v2H14l.3 4.5h-2l-.3-4.5h-1l-.8 3.5H8.4l.7-3.5H8L2 13.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 9.75V8.5h4.5v1.25M17 9.75l.3-1.25M18.5 10.75h4", 0, 0 } };
static const MiraOp mira_ops_f_401[] = { { 0, 0.0f, 0.0f, "M2 10 8 9.75h10.5v2H14l.3 4.5h-2l-.3-4.5h-1l-.8 3.5H8.4l.7-3.5H8L2 13.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M9 9.75V8.5h4.5v1.25M17 9.75l.3-1.25M18.5 10.75h4", 0, 0 } };
static const char *const mira_tags_402[] = { "kar98k", "mauser", "fusil \303\240 verrou", "arme" };
static const MiraOp mira_ops_o_402[] = { { 1, 1.0f, 0.0f, "M2 11.25 6.5 10h14v1.5h-10l-2 1.25h-2l-4 2.25z", 0, 0 }, { 0, 0.0f, 0.0f, "M11.25 14a0.75 0.75 0 1 0 1.5 0a0.75 0.75 0 1 0 -1.5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M20.5 10.75h2M11 11.5l.8 2M9 12.75a1.25 1.25 0 0 0 2.5 0", 0, 0 } };
static const MiraOp mira_ops_f_402[] = { { 0, 0.0f, 0.0f, "M2 11.25 6.5 10h14v1.5h-10l-2 1.25h-2l-4 2.25z", 0, 0 }, { 0, 0.0f, 0.0f, "M11.25 14a0.75 0.75 0 1 0 1.5 0a0.75 0.75 0 1 0 -1.5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M20.5 10.75h2M11 11.5l.8 2M9 12.75a1.25 1.25 0 0 0 2.5 0", 0, 0 } };
static const char *const mira_tags_403[] = { "sniper", "remington 700", "r700", "fusil de pr\303\251cision", "arme" };
static const MiraOp mira_ops_o_403[] = { { 1, 1.0f, 0.0f, "M2 10 7 9.5h11.5V11H10.5L9 13.5H7L2.5 14.5z", 0, 0 }, { 0, 0.0f, 0.0f, "M12.75 13.2a0.75 0.75 0 1 0 1.5 0a0.75 0.75 0 1 0 -1.5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M18.5 10.25h4M12.5 11l.8 1.8", 0, 0 } };
static const MiraOp mira_ops_f_403[] = { { 0, 0.0f, 0.0f, "M2 10 7 9.5h11.5V11H10.5L9 13.5H7L2.5 14.5z", 0, 0 }, { 0, 0.0f, 0.0f, "M12.75 13.2a0.75 0.75 0 1 0 1.5 0a0.75 0.75 0 1 0 -1.5 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M18.5 10.25h4M12.5 11l.8 1.8", 0, 0 } };
static const char *const mira_tags_404[] = { "fusil \303\240 pompe", "pompe", "shotgun", "arme" };
static const MiraOp mira_ops_o_404[] = { { 1, 1.0f, 0.0f, "M2 11 7 10h4.5v2.5H7l-4.5 2zM14.5 11.25h2.5a1 1 0 0 1 1 1v0a1 1 0 0 1 -1 1h-2.5a1 1 0 0 1 -1 -1v0a1 1 0 0 1 1 -1z", 0, 0 }, { 1, 1.0f, 0.0f, "M11.5 10.6h11M11.5 12h2M18 12h1", 0, 0 } };
static const MiraOp mira_ops_f_404[] = { { 0, 0.0f, 0.0f, "M2 11 7 10h4.5v2.5H7l-4.5 2zM14.5 11.25h2.5a1 1 0 0 1 1 1v0a1 1 0 0 1 -1 1h-2.5a1 1 0 0 1 -1 -1v0a1 1 0 0 1 1 -1z", 0, 0 }, { 1, 1.0f, 0.0f, "M11.5 10.6h11M11.5 12h2M18 12h1", 0, 0 } };
static const char *const mira_tags_405[] = { "pistolet-mitrailleur", "smg", "uzi", "mp5", "arme" };
static const MiraOp mira_ops_o_405[] = { { 1, 1.0f, 0.0f, "M5 8.5h12.5V11H14l.5 6h-1.8l-.5-6H8.6l-.7 4H6.1l.7-4H5z", 0, 0 }, { 1, 1.0f, 0.0f, "M17.5 9.75h3M5 9.5H2.5v3", 0, 0 } };
static const MiraOp mira_ops_f_405[] = { { 0, 0.0f, 0.0f, "M5 8.5h12.5V11H14l.5 6h-1.8l-.5-6H8.6l-.7 4H6.1l.7-4H5z", 0, 0 }, { 1, 1.0f, 0.0f, "M17.5 9.75h3M5 9.5H2.5v3", 0, 0 } };
static const char *const mira_tags_406[] = { "thompson", "tommy gun", "chargeur camembert", "pistolet-mitrailleur", "arme" };
static const MiraOp mira_ops_o_406[] = { { 1, 1.0f, 0.0f, "M2 9.25 6.5 8.5H15v2.25H9.5l-.7 3.5H7l.6-3.5h-1l-4 2zM9.25 13.25a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM16.5 9.5H18l-.3 3.5h-1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M15 9.5h7M19.25 8.5v2M20.75 8.5v2", 0, 0 } };
static const MiraOp mira_ops_f_406[] = { { 0, 0.0f, 0.0f, "M2 9.25 6.5 8.5H15v2.25H9.5l-.7 3.5H7l.6-3.5h-1l-4 2zM9.25 13.25a2.5 2.5 0 1 0 5 0a2.5 2.5 0 1 0 -5 0zM16.5 9.5H18l-.3 3.5h-1.5z", 0, 0 }, { 1, 1.0f, 0.0f, "M15 9.5h7M19.25 8.5v2M20.75 8.5v2", 0, 0 } };
static const char *const mira_tags_407[] = { "rpg", "lance-roquettes", "bazooka", "roquette", "arme" };
static const MiraOp mira_ops_o_407[] = { { 1, 1.0f, 0.0f, "M5 11h9a1 1 0 0 1 1 1v0a1 1 0 0 1 -1 1h-9a1 1 0 0 1 -1 -1v0a1 1 0 0 1 1 -1zM15 12l2-2.5h2l2.5 2.5-2.5 2.5h-2zM4 11 2.5 10v4L4 13zM7 13h1.3l-.4 2.5H6.6zM10.5 13h1.3l-.4 2.5h-1.3z", 0, 0 } };
static const MiraOp mira_ops_f_407[] = { { 0, 0.0f, 0.0f, "M5 11h9a1 1 0 0 1 1 1v0a1 1 0 0 1 -1 1h-9a1 1 0 0 1 -1 -1v0a1 1 0 0 1 1 -1zM15 12l2-2.5h2l2.5 2.5-2.5 2.5h-2zM4 11 2.5 10v4L4 13zM7 13h1.3l-.4 2.5H6.6zM10.5 13h1.3l-.4 2.5h-1.3z", 0, 0 } };
static const char *const mira_tags_408[] = { "couteau", "lame", "poignard", "corps \303\240 corps", "arme" };
static const MiraOp mira_ops_o_408[] = { { 1, 1.0f, 0.0f, "M10.5 11h9c1.2 0 2 .4 2.5 1-3 .8-7 1.25-11.5 1.25zM4.13 11h3.75a1.125 1.125 0 0 1 1.125 1.125v0a1.125 1.125 0 0 1 -1.125 1.125h-3.75a1.125 1.125 0 0 1 -1.125 -1.125v0a1.125 1.125 0 0 1 1.125 -1.125z", 0, 0 }, { 1, 1.0f, 0.0f, "M10 9.5v5", 0, 0 } };
static const MiraOp mira_ops_f_408[] = { { 0, 0.0f, 0.0f, "M10.5 11h9c1.2 0 2 .4 2.5 1-3 .8-7 1.25-11.5 1.25zM4.13 11h3.75a1.125 1.125 0 0 1 1.125 1.125v0a1.125 1.125 0 0 1 -1.125 1.125h-3.75a1.125 1.125 0 0 1 -1.125 -1.125v0a1.125 1.125 0 0 1 1.125 -1.125z", 0, 0 }, { 1, 1.0f, 0.0f, "M10 9.5v5", 0, 0 } };
static const char *const mira_tags_409[] = { "batte", "baseball", "corps \303\240 corps", "arme" };
static const MiraOp mira_ops_o_409[] = { { 1, 1.0f, 0.0f, "M17 4.6a2 2 0 0 1 2.4 2.4L8.5 17.5l-2-2zM4.25 18.5a1.25 1.25 0 1 0 2.5 0a1.25 1.25 0 1 0 -2.5 0z", 0, 0 } };
static const MiraOp mira_ops_f_409[] = { { 0, 0.0f, 0.0f, "M17 4.6a2 2 0 0 1 2.4 2.4L8.5 17.5l-2-2zM4.25 18.5a1.25 1.25 0 1 0 2.5 0a1.25 1.25 0 1 0 -2.5 0z", 0, 0 } };
static const char *const mira_tags_410[] = { "grenade", "explosif", "lancer", "arme" };
static const MiraOp mira_ops_o_410[] = { { 1, 1.0f, 0.0f, "M6.5 14.5a5.5 5.5 0 1 0 11 0a5.5 5.5 0 1 0 -11 0zM10.5 7h3v2h-3z", 0, 0 }, { 1, 1.0f, 0.0f, "M6.5 14.5h11", 0, 0 }, { 1, 1.0f, 0.0f, "M13.5 7.5l3 3M7.25 6.25a1.5 1.5 0 1 0 3 0a1.5 1.5 0 1 0 -3 0z", 0, 0 } };
static const MiraOp mira_cut_410_f0[] = { { 1, 1.0f, 0.0f, "M6.5 14.5h11", 0, 0 } };
static const MiraOp mira_ops_f_410[] = { { 0, 0.0f, 0.0f, "M6.5 14.5a5.5 5.5 0 1 0 11 0a5.5 5.5 0 1 0 -11 0zM10.5 7h3v2h-3z", mira_cut_410_f0, 1 }, { 1, 1.0f, 0.0f, "M13.5 7.5l3 3M7.25 6.25a1.5 1.5 0 1 0 3 0a1.5 1.5 0 1 0 -3 0z", 0, 0 } };
static const char *const mira_tags_411[] = { "munitions", "balles", "cartouches", "chargeur", "arme" };
static const MiraOp mira_ops_o_411[] = { { 1, 1.0f, 0.0f, "M5 10c0-1.8.5-3.3 1.5-4.5 1 1.2 1.5 2.7 1.5 4.5v9H5zM10.5 10c0-1.8.5-3.3 1.5-4.5 1 1.2 1.5 2.7 1.5 4.5v9h-3zM16 10c0-1.8.5-3.3 1.5-4.5 1 1.2 1.5 2.7 1.5 4.5v9h-3z", 0, 0 }, { 1, 1.0f, 0.0f, "M5 10h3M10.5 10h3M16 10h3M5 16.5h3M10.5 16.5h3M16 16.5h3", 0, 0 } };
static const MiraOp mira_cut_411_f0[] = { { 1, 1.0f, 0.0f, "M5 10h3M10.5 10h3M16 10h3M5 16.5h3M10.5 16.5h3M16 16.5h3", 0, 0 } };
static const MiraOp mira_ops_f_411[] = { { 0, 0.0f, 0.0f, "M5 10c0-1.8.5-3.3 1.5-4.5 1 1.2 1.5 2.7 1.5 4.5v9H5zM10.5 10c0-1.8.5-3.3 1.5-4.5 1 1.2 1.5 2.7 1.5 4.5v9h-3zM16 10c0-1.8.5-3.3 1.5-4.5 1 1.2 1.5 2.7 1.5 4.5v9h-3z", mira_cut_411_f0, 1 } };
static const char *const mira_tags_412[] = { "viseur", "r\303\251ticule", "cible", "vis\303\251e", "arme" };
static const MiraOp mira_ops_o_412[] = { { 0, 0.0f, 0.0f, "M11 12a1 1 0 1 0 2 0a1 1 0 1 0 -2 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M5 12a7 7 0 1 0 14 0a7 7 0 1 0 -14 0zM12 2.5v5M12 16.5v5M2.5 12h5M16.5 12h5", 0, 0 } };
static const MiraOp mira_ops_f_412[] = { { 0, 0.0f, 0.0f, "M11 12a1 1 0 1 0 2 0a1 1 0 1 0 -2 0z", 0, 0 }, { 1, 1.0f, 0.0f, "M5 12a7 7 0 1 0 14 0a7 7 0 1 0 -14 0zM12 2.5v5M12 16.5v5M2.5 12h5M16.5 12h5", 0, 0 } };

static const MiraSymbolRec MIRA_SYMBOLS[MIRA_SYMBOL_COUNT] = {
  { { "chevron.left", "navigation", mira_tags_0, 4, 1 }, mira_ops_o_0, 1, mira_ops_f_0, 1 },
  { { "chevron.right", "navigation", mira_tags_1, 4, 1 }, mira_ops_o_1, 1, mira_ops_f_1, 1 },
  { { "chevron.up", "navigation", mira_tags_2, 3, 0 }, mira_ops_o_2, 1, mira_ops_f_2, 1 },
  { { "chevron.down", "navigation", mira_tags_3, 4, 0 }, mira_ops_o_3, 1, mira_ops_f_3, 1 },
  { { "chevron.up.chevron.down", "navigation", mira_tags_4, 4, 0 }, mira_ops_o_4, 1, mira_ops_f_4, 1 },
  { { "chevron.left.2", "navigation", mira_tags_5, 3, 1 }, mira_ops_o_5, 1, mira_ops_f_5, 1 },
  { { "chevron.right.2", "navigation", mira_tags_6, 3, 1 }, mira_ops_o_6, 1, mira_ops_f_6, 1 },
  { { "house", "navigation", mira_tags_7, 3, 0 }, mira_ops_o_7, 2, mira_ops_f_7, 1 },
  { { "sidebar.left", "navigation", mira_tags_8, 4, 1 }, mira_ops_o_8, 2, mira_ops_f_8, 1 },
  { { "sidebar.right", "navigation", mira_tags_9, 4, 1 }, mira_ops_o_9, 2, mira_ops_f_9, 1 },
  { { "line.3.horizontal", "navigation", mira_tags_10, 4, 0 }, mira_ops_o_10, 1, mira_ops_f_10, 1 },
  { { "magnifyingglass", "navigation", mira_tags_11, 4, 0 }, mira_ops_o_11, 1, mira_ops_f_11, 1 },
  { { "ellipsis", "navigation", mira_tags_12, 4, 0 }, mira_ops_o_12, 1, mira_ops_f_12, 1 },
  { { "square.grid.2x2", "navigation", mira_tags_13, 7, 0 }, mira_ops_o_13, 1, mira_ops_f_13, 1 },
  { { "rectangle.portrait.and.arrow.right", "navigation", mira_tags_14, 4, 1 }, mira_ops_o_14, 1, mira_ops_f_14, 1 },
  { { "rectangle.portrait.and.arrow.left", "navigation", mira_tags_15, 4, 1 }, mira_ops_o_15, 1, mira_ops_f_15, 1 },
  { { "arrow.left", "fleches", mira_tags_16, 3, 1 }, mira_ops_o_16, 1, mira_ops_f_16, 1 },
  { { "arrow.right", "fleches", mira_tags_17, 3, 1 }, mira_ops_o_17, 1, mira_ops_f_17, 1 },
  { { "arrow.up", "fleches", mira_tags_18, 3, 0 }, mira_ops_o_18, 1, mira_ops_f_18, 1 },
  { { "arrow.down", "fleches", mira_tags_19, 3, 0 }, mira_ops_o_19, 1, mira_ops_f_19, 1 },
  { { "arrow.up.right", "fleches", mira_tags_20, 4, 1 }, mira_ops_o_20, 1, mira_ops_f_20, 1 },
  { { "arrow.up.left", "fleches", mira_tags_21, 2, 1 }, mira_ops_o_21, 1, mira_ops_f_21, 1 },
  { { "arrow.down.right", "fleches", mira_tags_22, 2, 1 }, mira_ops_o_22, 1, mira_ops_f_22, 1 },
  { { "arrow.down.left", "fleches", mira_tags_23, 2, 1 }, mira_ops_o_23, 1, mira_ops_f_23, 1 },
  { { "arrow.left.arrow.right", "fleches", mira_tags_24, 4, 0 }, mira_ops_o_24, 1, mira_ops_f_24, 1 },
  { { "arrow.up.arrow.down", "fleches", mira_tags_25, 4, 0 }, mira_ops_o_25, 1, mira_ops_f_25, 1 },
  { { "arrow.turn.up.left", "fleches", mira_tags_26, 3, 1 }, mira_ops_o_26, 1, mira_ops_f_26, 1 },
  { { "arrow.uturn.backward", "fleches", mira_tags_27, 4, 1 }, mira_ops_o_27, 1, mira_ops_f_27, 1 },
  { { "arrow.uturn.forward", "fleches", mira_tags_28, 3, 1 }, mira_ops_o_28, 1, mira_ops_f_28, 1 },
  { { "arrow.clockwise", "fleches", mira_tags_29, 4, 0 }, mira_ops_o_29, 1, mira_ops_f_29, 1 },
  { { "arrow.counterclockwise", "fleches", mira_tags_30, 4, 0 }, mira_ops_o_30, 1, mira_ops_f_30, 1 },
  { { "arrow.triangle.2.circlepath", "fleches", mira_tags_31, 4, 0 }, mira_ops_o_31, 1, mira_ops_f_31, 1 },
  { { "arrow.down.to.line", "fleches", mira_tags_32, 4, 0 }, mira_ops_o_32, 1, mira_ops_f_32, 1 },
  { { "arrow.up.to.line", "fleches", mira_tags_33, 4, 0 }, mira_ops_o_33, 1, mira_ops_f_33, 1 },
  { { "arrow.up.and.down.and.arrow.left.and.right", "fleches", mira_tags_34, 4, 0 }, mira_ops_o_34, 1, mira_ops_f_34, 1 },
  { { "arrow.up.left.and.arrow.down.right", "fleches", mira_tags_35, 4, 1 }, mira_ops_o_35, 1, mira_ops_f_35, 1 },
  { { "arrow.down.right.and.arrow.up.left", "fleches", mira_tags_36, 3, 1 }, mira_ops_o_36, 1, mira_ops_f_36, 1 },
  { { "arrow.right.circle", "fleches", mira_tags_37, 3, 1 }, mira_ops_o_37, 2, mira_ops_f_37, 1 },
  { { "arrow.left.circle", "fleches", mira_tags_38, 2, 1 }, mira_ops_o_38, 2, mira_ops_f_38, 1 },
  { { "arrow.up.circle", "fleches", mira_tags_39, 3, 0 }, mira_ops_o_39, 2, mira_ops_f_39, 1 },
  { { "arrow.down.circle", "fleches", mira_tags_40, 3, 0 }, mira_ops_o_40, 2, mira_ops_f_40, 1 },
  { { "arrowshape.right", "fleches", mira_tags_41, 3, 1 }, mira_ops_o_41, 1, mira_ops_f_41, 2 },
  { { "arrowshape.left", "fleches", mira_tags_42, 3, 1 }, mira_ops_o_42, 1, mira_ops_f_42, 2 },
  { { "plus", "actions", mira_tags_43, 3, 0 }, mira_ops_o_43, 1, mira_ops_f_43, 1 },
  { { "minus", "actions", mira_tags_44, 4, 0 }, mira_ops_o_44, 1, mira_ops_f_44, 1 },
  { { "xmark", "actions", mira_tags_45, 4, 0 }, mira_ops_o_45, 1, mira_ops_f_45, 1 },
  { { "checkmark", "actions", mira_tags_46, 5, 0 }, mira_ops_o_46, 1, mira_ops_f_46, 1 },
  { { "plus.circle", "actions", mira_tags_47, 3, 0 }, mira_ops_o_47, 2, mira_ops_f_47, 1 },
  { { "minus.circle", "actions", mira_tags_48, 4, 0 }, mira_ops_o_48, 2, mira_ops_f_48, 1 },
  { { "xmark.circle", "actions", mira_tags_49, 5, 0 }, mira_ops_o_49, 2, mira_ops_f_49, 1 },
  { { "checkmark.circle", "actions", mira_tags_50, 4, 0 }, mira_ops_o_50, 2, mira_ops_f_50, 1 },
  { { "plus.square", "actions", mira_tags_51, 3, 0 }, mira_ops_o_51, 2, mira_ops_f_51, 1 },
  { { "xmark.square", "actions", mira_tags_52, 3, 0 }, mira_ops_o_52, 2, mira_ops_f_52, 1 },
  { { "checkmark.square", "actions", mira_tags_53, 4, 0 }, mira_ops_o_53, 2, mira_ops_f_53, 1 },
  { { "square.and.arrow.up", "actions", mira_tags_54, 3, 0 }, mira_ops_o_54, 2, mira_ops_f_54, 2 },
  { { "square.and.arrow.down", "actions", mira_tags_55, 3, 0 }, mira_ops_o_55, 2, mira_ops_f_55, 2 },
  { { "doc.on.doc", "actions", mira_tags_56, 4, 0 }, mira_ops_o_56, 2, mira_ops_f_56, 2 },
  { { "trash", "actions", mira_tags_57, 4, 0 }, mira_ops_o_57, 3, mira_ops_f_57, 2 },
  { { "star", "actions", mira_tags_58, 4, 0 }, mira_ops_o_58, 1, mira_ops_f_58, 2 },
  { { "heart", "actions", mira_tags_59, 4, 0 }, mira_ops_o_59, 1, mira_ops_f_59, 2 },
  { { "bookmark", "actions", mira_tags_60, 4, 0 }, mira_ops_o_60, 1, mira_ops_f_60, 2 },
  { { "paperplane", "actions", mira_tags_61, 5, 0 }, mira_ops_o_61, 2, mira_ops_f_61, 1 },
  { { "sparkles", "actions", mira_tags_62, 7, 0 }, mira_ops_o_62, 1, mira_ops_f_62, 2 },
  { { "scissors", "actions", mira_tags_63, 3, 0 }, mira_ops_o_63, 2, mira_ops_f_63, 2 },
  { { "crop", "actions", mira_tags_64, 3, 0 }, mira_ops_o_64, 1, mira_ops_f_64, 1 },
  { { "plus.magnifyingglass", "actions", mira_tags_65, 3, 0 }, mira_ops_o_65, 1, mira_ops_f_65, 1 },
  { { "minus.magnifyingglass", "actions", mira_tags_66, 3, 0 }, mira_ops_o_66, 1, mira_ops_f_66, 1 },
  { { "bold", "texte", mira_tags_67, 4, 0 }, mira_ops_o_67, 1, mira_ops_f_67, 1 },
  { { "italic", "texte", mira_tags_68, 4, 0 }, mira_ops_o_68, 1, mira_ops_f_68, 1 },
  { { "underline", "texte", mira_tags_69, 3, 0 }, mira_ops_o_69, 1, mira_ops_f_69, 1 },
  { { "strikethrough", "texte", mira_tags_70, 4, 0 }, mira_ops_o_70, 1, mira_ops_f_70, 1 },
  { { "pencil", "texte", mira_tags_71, 5, 0 }, mira_ops_o_71, 1, mira_ops_f_71, 1 },
  { { "link", "texte", mira_tags_72, 4, 0 }, mira_ops_o_72, 1, mira_ops_f_72, 1 },
  { { "text.alignleft", "texte", mira_tags_73, 3, 1 }, mira_ops_o_73, 1, mira_ops_f_73, 1 },
  { { "text.aligncenter", "texte", mira_tags_74, 3, 0 }, mira_ops_o_74, 1, mira_ops_f_74, 1 },
  { { "text.alignright", "texte", mira_tags_75, 3, 1 }, mira_ops_o_75, 1, mira_ops_f_75, 1 },
  { { "text.justify", "texte", mira_tags_76, 3, 0 }, mira_ops_o_76, 1, mira_ops_f_76, 1 },
  { { "list.bullet", "texte", mira_tags_77, 3, 1 }, mira_ops_o_77, 2, mira_ops_f_77, 2 },
  { { "list.number", "texte", mira_tags_78, 3, 1 }, mira_ops_o_78, 1, mira_ops_f_78, 1 },
  { { "increase.indent", "texte", mira_tags_79, 3, 1 }, mira_ops_o_79, 1, mira_ops_f_79, 1 },
  { { "decrease.indent", "texte", mira_tags_80, 2, 1 }, mira_ops_o_80, 1, mira_ops_f_80, 1 },
  { { "textformat", "texte", mira_tags_81, 4, 0 }, mira_ops_o_81, 1, mira_ops_f_81, 1 },
  { { "textformat.size", "texte", mira_tags_82, 4, 0 }, mira_ops_o_82, 1, mira_ops_f_82, 1 },
  { { "character", "texte", mira_tags_83, 4, 0 }, mira_ops_o_83, 1, mira_ops_f_83, 1 },
  { { "text.quote", "texte", mira_tags_84, 3, 0 }, mira_ops_o_84, 1, mira_ops_f_84, 1 },
  { { "paragraphsign", "texte", mira_tags_85, 3, 0 }, mira_ops_o_85, 1, mira_ops_f_85, 1 },
  { { "doc", "fichiers", mira_tags_86, 4, 0 }, mira_ops_o_86, 2, mira_ops_f_86, 1 },
  { { "doc.text", "fichiers", mira_tags_87, 5, 0 }, mira_ops_o_87, 2, mira_ops_f_87, 1 },
  { { "doc.zipper", "fichiers", mira_tags_88, 3, 0 }, mira_ops_o_88, 2, mira_ops_f_88, 1 },
  { { "arrow.down.doc", "fichiers", mira_tags_89, 2, 0 }, mira_ops_o_89, 2, mira_ops_f_89, 1 },
  { { "folder", "fichiers", mira_tags_90, 4, 0 }, mira_ops_o_90, 2, mira_ops_f_90, 1 },
  { { "folder.badge.plus", "fichiers", mira_tags_91, 2, 0 }, mira_ops_o_91, 2, mira_ops_f_91, 1 },
  { { "clipboard", "fichiers", mira_tags_92, 3, 0 }, mira_ops_o_92, 2, mira_ops_f_92, 1 },
  { { "archivebox", "fichiers", mira_tags_93, 3, 0 }, mira_ops_o_93, 2, mira_ops_f_93, 1 },
  { { "tray.and.arrow.down", "fichiers", mira_tags_94, 3, 0 }, mira_ops_o_94, 2, mira_ops_f_94, 2 },
  { { "tray.and.arrow.up", "fichiers", mira_tags_95, 3, 0 }, mira_ops_o_95, 2, mira_ops_f_95, 2 },
  { { "externaldrive", "fichiers", mira_tags_96, 3, 0 }, mira_ops_o_96, 2, mira_ops_f_96, 1 },
  { { "cylinder.split.1x2", "fichiers", mira_tags_97, 4, 0 }, mira_ops_o_97, 2, mira_ops_f_97, 1 },
  { { "server.rack", "fichiers", mira_tags_98, 4, 0 }, mira_ops_o_98, 2, mira_ops_f_98, 1 },
  { { "tablecells", "fichiers", mira_tags_99, 4, 0 }, mira_ops_o_99, 2, mira_ops_f_99, 1 },
  { { "chart.bar", "fichiers", mira_tags_100, 4, 0 }, mira_ops_o_100, 1, mira_ops_f_100, 1 },
  { { "chart.pie", "fichiers", mira_tags_101, 4, 0 }, mira_ops_o_101, 2, mira_ops_f_101, 1 },
  { { "chart.line.uptrend.xyaxis", "fichiers", mira_tags_102, 5, 0 }, mira_ops_o_102, 1, mira_ops_f_102, 1 },
  { { "paperclip", "fichiers", mira_tags_103, 3, 0 }, mira_ops_o_103, 1, mira_ops_f_103, 1 },
  { { "printer", "fichiers", mira_tags_104, 2, 0 }, mira_ops_o_104, 2, mira_ops_f_104, 2 },
  { { "qrcode", "fichiers", mira_tags_105, 3, 0 }, mira_ops_o_105, 2, mira_ops_f_105, 1 },
  { { "barcode", "fichiers", mira_tags_106, 3, 0 }, mira_ops_o_106, 1, mira_ops_f_106, 1 },
  { { "envelope", "communication", mira_tags_107, 5, 0 }, mira_ops_o_107, 2, mira_ops_f_107, 1 },
  { { "envelope.open", "communication", mira_tags_108, 3, 0 }, mira_ops_o_108, 2, mira_ops_f_108, 1 },
  { { "bubble.left", "communication", mira_tags_109, 5, 0 }, mira_ops_o_109, 1, mira_ops_f_109, 1 },
  { { "bubble.left.and.bubble.right", "communication", mira_tags_110, 5, 0 }, mira_ops_o_110, 2, mira_ops_f_110, 2 },
  { { "phone", "communication", mira_tags_111, 3, 0 }, mira_ops_o_111, 1, mira_ops_f_111, 2 },
  { { "video", "communication", mira_tags_112, 4, 0 }, mira_ops_o_112, 1, mira_ops_f_112, 1 },
  { { "at", "communication", mira_tags_113, 3, 0 }, mira_ops_o_113, 1, mira_ops_f_113, 1 },
  { { "number", "communication", mira_tags_114, 5, 0 }, mira_ops_o_114, 1, mira_ops_f_114, 1 },
  { { "bell", "communication", mira_tags_115, 4, 0 }, mira_ops_o_115, 1, mira_ops_f_115, 1 },
  { { "bell.badge", "communication", mira_tags_116, 3, 0 }, mira_ops_o_116, 2, mira_ops_f_116, 2 },
  { { "bell.slash", "communication", mira_tags_117, 3, 0 }, mira_ops_o_117, 2, mira_ops_f_117, 2 },
  { { "megaphone", "communication", mira_tags_118, 4, 0 }, mira_ops_o_118, 2, mira_ops_f_118, 2 },
  { { "antenna.radiowaves.left.and.right", "communication", mira_tags_119, 5, 0 }, mira_ops_o_119, 2, mira_ops_f_119, 2 },
  { { "headset", "communication", mira_tags_120, 7, 0 }, mira_ops_o_120, 2, mira_ops_f_120, 2 },
  { { "headphones", "communication", mira_tags_121, 4, 0 }, mira_ops_o_121, 2, mira_ops_f_121, 2 },
  { { "face.smiling", "gestes", mira_tags_122, 5, 0 }, mira_ops_o_122, 2, mira_ops_f_122, 1 },
  { { "face.neutral", "gestes", mira_tags_123, 4, 0 }, mira_ops_o_123, 2, mira_ops_f_123, 1 },
  { { "face.frowning", "gestes", mira_tags_124, 4, 0 }, mira_ops_o_124, 2, mira_ops_f_124, 1 },
  { { "hand.thumbsup", "gestes", mira_tags_125, 6, 0 }, mira_ops_o_125, 1, mira_ops_f_125, 2 },
  { { "hand.thumbsdown", "gestes", mira_tags_126, 4, 0 }, mira_ops_o_126, 1, mira_ops_f_126, 2 },
  { { "hand.raised", "gestes", mira_tags_127, 5, 0 }, mira_ops_o_127, 1, mira_ops_f_127, 1 },
  { { "hand.point.up", "gestes", mira_tags_128, 5, 0 }, mira_ops_o_128, 1, mira_ops_f_128, 2 },
  { { "hand.wave", "gestes", mira_tags_129, 5, 0 }, mira_ops_o_129, 1, mira_ops_f_129, 1 },
  { { "person", "personnes", mira_tags_130, 5, 0 }, mira_ops_o_130, 1, mira_ops_f_130, 1 },
  { { "person.2", "personnes", mira_tags_131, 4, 0 }, mira_ops_o_131, 2, mira_ops_f_131, 2 },
  { { "person.badge.plus", "personnes", mira_tags_132, 3, 0 }, mira_ops_o_132, 2, mira_ops_f_132, 2 },
  { { "person.crop.circle", "personnes", mira_tags_133, 5, 0 }, mira_ops_o_133, 2, mira_ops_f_133, 1 },
  { { "person.crop.square", "personnes", mira_tags_134, 3, 0 }, mira_ops_o_134, 2, mira_ops_f_134, 1 },
  { { "person.wave.2", "personnes", mira_tags_135, 4, 0 }, mira_ops_o_135, 2, mira_ops_f_135, 2 },
  { { "creditcard", "commerce", mira_tags_136, 4, 0 }, mira_ops_o_136, 2, mira_ops_f_136, 1 },
  { { "banknote", "commerce", mira_tags_137, 4, 0 }, mira_ops_o_137, 2, mira_ops_f_137, 1 },
  { { "cart", "commerce", mira_tags_138, 4, 0 }, mira_ops_o_138, 2, mira_ops_f_138, 2 },
  { { "bag", "commerce", mira_tags_139, 4, 0 }, mira_ops_o_139, 2, mira_ops_f_139, 2 },
  { { "tag", "commerce", mira_tags_140, 4, 0 }, mira_ops_o_140, 2, mira_ops_f_140, 1 },
  { { "percent", "commerce", mira_tags_141, 4, 0 }, mira_ops_o_141, 2, mira_ops_f_141, 2 },
  { { "gift", "commerce", mira_tags_142, 4, 0 }, mira_ops_o_142, 2, mira_ops_f_142, 2 },
  { { "receipt", "commerce", mira_tags_143, 4, 0 }, mira_ops_o_143, 2, mira_ops_f_143, 1 },
  { { "wallet.pass", "commerce", mira_tags_144, 4, 0 }, mira_ops_o_144, 2, mira_ops_f_144, 1 },
  { { "storefront", "commerce", mira_tags_145, 4, 0 }, mira_ops_o_145, 3, mira_ops_f_145, 2 },
  { { "dollarsign.circle", "commerce", mira_tags_146, 4, 0 }, mira_ops_o_146, 2, mira_ops_f_146, 1 },
  { { "eurosign.circle", "commerce", mira_tags_147, 4, 0 }, mira_ops_o_147, 2, mira_ops_f_147, 1 },
  { { "bitcoinsign.circle", "commerce", mira_tags_148, 4, 0 }, mira_ops_o_148, 2, mira_ops_f_148, 1 },
  { { "chart.candlestick", "commerce", mira_tags_149, 5, 0 }, mira_ops_o_149, 2, mira_ops_f_149, 2 },
  { { "chart.line.downtrend.xyaxis", "commerce", mira_tags_150, 4, 0 }, mira_ops_o_150, 1, mira_ops_f_150, 1 },
  { { "iphone", "appareils", mira_tags_151, 4, 0 }, mira_ops_o_151, 2, mira_ops_f_151, 1 },
  { { "ipad", "appareils", mira_tags_152, 2, 0 }, mira_ops_o_152, 2, mira_ops_f_152, 1 },
  { { "laptopcomputer", "appareils", mira_tags_153, 3, 0 }, mira_ops_o_153, 2, mira_ops_f_153, 2 },
  { { "desktopcomputer", "appareils", mira_tags_154, 4, 0 }, mira_ops_o_154, 2, mira_ops_f_154, 2 },
  { { "watch", "appareils", mira_tags_155, 3, 0 }, mira_ops_o_155, 2, mira_ops_f_155, 2 },
  { { "keyboard", "appareils", mira_tags_156, 3, 0 }, mira_ops_o_156, 2, mira_ops_f_156, 1 },
  { { "computermouse", "appareils", mira_tags_157, 3, 0 }, mira_ops_o_157, 2, mira_ops_f_157, 1 },
  { { "battery.100", "appareils", mira_tags_158, 3, 0 }, mira_ops_o_158, 3, mira_ops_f_158, 3 },
  { { "battery.50", "appareils", mira_tags_159, 2, 0 }, mira_ops_o_159, 3, mira_ops_f_159, 3 },
  { { "battery.25", "appareils", mira_tags_160, 3, 0 }, mira_ops_o_160, 3, mira_ops_f_160, 3 },
  { { "battery.100.bolt", "appareils", mira_tags_161, 4, 0 }, mira_ops_o_161, 3, mira_ops_f_161, 3 },
  { { "bolt", "appareils", mira_tags_162, 5, 0 }, mira_ops_o_162, 1, mira_ops_f_162, 2 },
  { { "power", "appareils", mira_tags_163, 4, 0 }, mira_ops_o_163, 1, mira_ops_f_163, 1 },
  { { "wifi", "appareils", mira_tags_164, 4, 0 }, mira_ops_o_164, 1, mira_ops_f_164, 1 },
  { { "wifi.slash", "appareils", mira_tags_165, 3, 0 }, mira_ops_o_165, 1, mira_ops_f_165, 1 },
  { { "bluetooth", "appareils", mira_tags_166, 4, 0 }, mira_ops_o_166, 1, mira_ops_f_166, 1 },
  { { "cellularbars", "appareils", mira_tags_167, 4, 0 }, mira_ops_o_167, 1, mira_ops_f_167, 1 },
  { { "edge", "appareils", mira_tags_168, 4, 0 }, mira_ops_o_168, 1, mira_ops_f_168, 1 },
  { { "2g", "appareils", mira_tags_169, 4, 0 }, mira_ops_o_169, 1, mira_ops_f_169, 1 },
  { { "3g", "appareils", mira_tags_170, 4, 0 }, mira_ops_o_170, 1, mira_ops_f_170, 1 },
  { { "4g", "appareils", mira_tags_171, 3, 0 }, mira_ops_o_171, 1, mira_ops_f_171, 1 },
  { { "5g", "appareils", mira_tags_172, 3, 0 }, mira_ops_o_172, 1, mira_ops_f_172, 1 },
  { { "lte", "appareils", mira_tags_173, 4, 0 }, mira_ops_o_173, 1, mira_ops_f_173, 1 },
  { { "cpu", "appareils", mira_tags_174, 4, 0 }, mira_ops_o_174, 3, mira_ops_f_174, 2 },
  { { "memorychip", "appareils", mira_tags_175, 3, 0 }, mira_ops_o_175, 3, mira_ops_f_175, 2 },
  { { "sdcard", "appareils", mira_tags_176, 3, 0 }, mira_ops_o_176, 2, mira_ops_f_176, 1 },
  { { "airplane", "appareils", mira_tags_177, 3, 0 }, mira_ops_o_177, 1, mira_ops_f_177, 2 },
  { { "tv", "appareils", mira_tags_178, 3, 0 }, mira_ops_o_178, 2, mira_ops_f_178, 2 },
  { { "map", "cartes", mira_tags_179, 3, 0 }, mira_ops_o_179, 2, mira_ops_f_179, 1 },
  { { "mappin", "cartes", mira_tags_180, 4, 0 }, mira_ops_o_180, 2, mira_ops_f_180, 1 },
  { { "mappin.and.ellipse", "cartes", mira_tags_181, 3, 0 }, mira_ops_o_181, 3, mira_ops_f_181, 2 },
  { { "location", "cartes", mira_tags_182, 4, 0 }, mira_ops_o_182, 1, mira_ops_f_182, 2 },
  { { "location.north", "cartes", mira_tags_183, 4, 0 }, mira_ops_o_183, 1, mira_ops_f_183, 2 },
  { { "compass", "cartes", mira_tags_184, 5, 0 }, mira_ops_o_184, 2, mira_ops_f_184, 1 },
  { { "globe", "cartes", mira_tags_185, 7, 0 }, mira_ops_o_185, 2, mira_ops_f_185, 1 },
  { { "signpost.right", "cartes", mira_tags_186, 4, 1 }, mira_ops_o_186, 2, mira_ops_f_186, 2 },
  { { "car", "cartes", mira_tags_187, 4, 0 }, mira_ops_o_187, 3, mira_ops_f_187, 2 },
  { { "bus", "cartes", mira_tags_188, 3, 0 }, mira_ops_o_188, 3, mira_ops_f_188, 2 },
  { { "flag", "cartes", mira_tags_189, 4, 0 }, mira_ops_o_189, 2, mira_ops_f_189, 2 },
  { { "building.2", "cartes", mira_tags_190, 5, 0 }, mira_ops_o_190, 2, mira_ops_f_190, 1 },
  { { "clock", "temps", mira_tags_191, 5, 0 }, mira_ops_o_191, 2, mira_ops_f_191, 1 },
  { { "alarm", "temps", mira_tags_192, 4, 0 }, mira_ops_o_192, 3, mira_ops_f_192, 2 },
  { { "timer", "temps", mira_tags_193, 3, 0 }, mira_ops_o_193, 3, mira_ops_f_193, 2 },
  { { "hourglass", "temps", mira_tags_194, 4, 0 }, mira_ops_o_194, 2, mira_ops_f_194, 2 },
  { { "calendar", "temps", mira_tags_195, 5, 0 }, mira_ops_o_195, 3, mira_ops_f_195, 2 },
  { { "calendar.badge.plus", "temps", mira_tags_196, 3, 0 }, mira_ops_o_196, 3, mira_ops_f_196, 2 },
  { { "calendar.badge.clock", "temps", mira_tags_197, 4, 0 }, mira_ops_o_197, 3, mira_ops_f_197, 2 },
  { { "terminal", "dev", mira_tags_198, 4, 0 }, mira_ops_o_198, 2, mira_ops_f_198, 1 },
  { { "chevron.left.forwardslash.chevron.right", "dev", mira_tags_199, 5, 0 }, mira_ops_o_199, 1, mira_ops_f_199, 1 },
  { { "curlybraces", "dev", mira_tags_200, 4, 0 }, mira_ops_o_200, 1, mira_ops_f_200, 1 },
  { { "arrow.triangle.branch", "dev", mira_tags_201, 4, 0 }, mira_ops_o_201, 2, mira_ops_f_201, 2 },
  { { "arrow.triangle.merge", "dev", mira_tags_202, 4, 0 }, mira_ops_o_202, 2, mira_ops_f_202, 2 },
  { { "arrow.triangle.pull", "dev", mira_tags_203, 4, 0 }, mira_ops_o_203, 2, mira_ops_f_203, 2 },
  { { "point.3.connected.trianglepath.dotted", "dev", mira_tags_204, 5, 0 }, mira_ops_o_204, 2, mira_ops_f_204, 2 },
  { { "ladybug", "dev", mira_tags_205, 5, 0 }, mira_ops_o_205, 3, mira_ops_f_205, 2 },
  { { "hammer", "dev", mira_tags_206, 5, 0 }, mira_ops_o_206, 2, mira_ops_f_206, 2 },
  { { "wrench", "dev", mira_tags_207, 5, 0 }, mira_ops_o_207, 1, mira_ops_f_207, 2 },
  { { "puzzlepiece", "dev", mira_tags_208, 4, 0 }, mira_ops_o_208, 1, mira_ops_f_208, 2 },
  { { "cube", "dev", mira_tags_209, 5, 0 }, mira_ops_o_209, 2, mira_ops_f_209, 1 },
  { { "shippingbox", "dev", mira_tags_210, 5, 0 }, mira_ops_o_210, 2, mira_ops_f_210, 1 },
  { { "command", "dev", mira_tags_211, 4, 0 }, mira_ops_o_211, 1, mira_ops_f_211, 1 },
  { { "option", "dev", mira_tags_212, 4, 0 }, mira_ops_o_212, 1, mira_ops_f_212, 1 },
  { { "control", "dev", mira_tags_213, 4, 0 }, mira_ops_o_213, 1, mira_ops_f_213, 1 },
  { { "shift", "dev", mira_tags_214, 3, 0 }, mira_ops_o_214, 1, mira_ops_f_214, 2 },
  { { "delete.left", "dev", mira_tags_215, 4, 1 }, mira_ops_o_215, 2, mira_ops_f_215, 1 },
  { { "return", "dev", mira_tags_216, 4, 1 }, mira_ops_o_216, 1, mira_ops_f_216, 1 },
  { { "macwindow", "dev", mira_tags_217, 4, 0 }, mira_ops_o_217, 2, mira_ops_f_217, 1 },
  { { "cat", "dev", mira_tags_218, 6, 0 }, mira_ops_o_218, 3, mira_ops_f_218, 2 },
  { { "function", "dev", mira_tags_219, 4, 0 }, mira_ops_o_219, 1, mira_ops_f_219, 1 },
  { { "lock", "securite", mira_tags_220, 5, 0 }, mira_ops_o_220, 2, mira_ops_f_220, 2 },
  { { "lock.open", "securite", mira_tags_221, 4, 0 }, mira_ops_o_221, 2, mira_ops_f_221, 2 },
  { { "key", "securite", mira_tags_222, 4, 0 }, mira_ops_o_222, 2, mira_ops_f_222, 2 },
  { { "shield", "securite", mira_tags_223, 4, 0 }, mira_ops_o_223, 1, mira_ops_f_223, 1 },
  { { "checkmark.shield", "securite", mira_tags_224, 4, 0 }, mira_ops_o_224, 2, mira_ops_f_224, 1 },
  { { "exclamationmark.shield", "securite", mira_tags_225, 3, 0 }, mira_ops_o_225, 2, mira_ops_f_225, 1 },
  { { "checkmark.seal", "securite", mira_tags_226, 4, 0 }, mira_ops_o_226, 2, mira_ops_f_226, 1 },
  { { "xmark.seal", "securite", mira_tags_227, 4, 0 }, mira_ops_o_227, 2, mira_ops_f_227, 1 },
  { { "touchid", "securite", mira_tags_228, 4, 0 }, mira_ops_o_228, 1, mira_ops_f_228, 1 },
  { { "faceid", "securite", mira_tags_229, 4, 0 }, mira_ops_o_229, 1, mira_ops_f_229, 1 },
  { { "eye", "securite", mira_tags_230, 5, 0 }, mira_ops_o_230, 2, mira_ops_f_230, 1 },
  { { "eye.slash", "securite", mira_tags_231, 4, 0 }, mira_ops_o_231, 2, mira_ops_f_231, 2 },
  { { "accessibility", "securite", mira_tags_232, 4, 0 }, mira_ops_o_232, 2, mira_ops_f_232, 1 },
  { { "ear", "securite", mira_tags_233, 4, 0 }, mira_ops_o_233, 1, mira_ops_f_233, 1 },
  { { "figure.roll", "securite", mira_tags_234, 4, 0 }, mira_ops_o_234, 2, mira_ops_f_234, 2 },
  { { "gearshape", "reglages", mira_tags_235, 5, 0 }, mira_ops_o_235, 1, mira_ops_f_235, 1 },
  { { "slider.horizontal.3", "reglages", mira_tags_236, 4, 0 }, mira_ops_o_236, 2, mira_ops_f_236, 2 },
  { { "switch.2", "reglages", mira_tags_237, 4, 0 }, mira_ops_o_237, 2, mira_ops_f_237, 2 },
  { { "line.3.horizontal.decrease", "reglages", mira_tags_238, 4, 0 }, mira_ops_o_238, 1, mira_ops_f_238, 1 },
  { { "pin", "reglages", mira_tags_239, 4, 0 }, mira_ops_o_239, 2, mira_ops_f_239, 2 },
  { { "moon", "reglages", mira_tags_240, 4, 0 }, mira_ops_o_240, 1, mira_ops_f_240, 2 },
  { { "paintbrush", "reglages", mira_tags_241, 5, 0 }, mira_ops_o_241, 2, mira_ops_f_241, 2 },
  { { "info.circle", "statut", mira_tags_242, 4, 0 }, mira_ops_o_242, 2, mira_ops_f_242, 1 },
  { { "questionmark.circle", "statut", mira_tags_243, 4, 0 }, mira_ops_o_243, 2, mira_ops_f_243, 1 },
  { { "exclamationmark.circle", "statut", mira_tags_244, 4, 0 }, mira_ops_o_244, 2, mira_ops_f_244, 1 },
  { { "exclamationmark.triangle", "statut", mira_tags_245, 5, 0 }, mira_ops_o_245, 2, mira_ops_f_245, 1 },
  { { "ellipsis.circle", "statut", mira_tags_246, 4, 0 }, mira_ops_o_246, 2, mira_ops_f_246, 1 },
  { { "nosign", "statut", mira_tags_247, 4, 0 }, mira_ops_o_247, 2, mira_ops_f_247, 2 },
  { { "lightbulb", "statut", mira_tags_248, 4, 0 }, mira_ops_o_248, 2, mira_ops_f_248, 2 },
  { { "gauge", "statut", mira_tags_249, 5, 0 }, mira_ops_o_249, 2, mira_ops_f_249, 2 },
  { { "hourglass.bottomhalf.filled", "statut", mira_tags_250, 4, 0 }, mira_ops_o_250, 3, mira_ops_f_250, 3 },
  { { "play", "media", mira_tags_251, 4, 0 }, mira_ops_o_251, 1, mira_ops_f_251, 2 },
  { { "pause", "media", mira_tags_252, 3, 0 }, mira_ops_o_252, 1, mira_ops_f_252, 2 },
  { { "stop", "media", mira_tags_253, 3, 0 }, mira_ops_o_253, 1, mira_ops_f_253, 2 },
  { { "backward", "media", mira_tags_254, 4, 0 }, mira_ops_o_254, 1, mira_ops_f_254, 2 },
  { { "forward", "media", mira_tags_255, 4, 0 }, mira_ops_o_255, 1, mira_ops_f_255, 2 },
  { { "backward.end", "media", mira_tags_256, 3, 0 }, mira_ops_o_256, 1, mira_ops_f_256, 1 },
  { { "forward.end", "media", mira_tags_257, 3, 0 }, mira_ops_o_257, 1, mira_ops_f_257, 1 },
  { { "play.rectangle", "media", mira_tags_258, 5, 0 }, mira_ops_o_258, 2, mira_ops_f_258, 1 },
  { { "record.circle", "media", mira_tags_259, 4, 0 }, mira_ops_o_259, 2, mira_ops_f_259, 2 },
  { { "shuffle", "media", mira_tags_260, 3, 0 }, mira_ops_o_260, 1, mira_ops_f_260, 1 },
  { { "repeat", "media", mira_tags_261, 4, 0 }, mira_ops_o_261, 1, mira_ops_f_261, 1 },
  { { "speaker.wave.2", "media", mira_tags_262, 4, 0 }, mira_ops_o_262, 2, mira_ops_f_262, 2 },
  { { "speaker.slash", "media", mira_tags_263, 4, 0 }, mira_ops_o_263, 2, mira_ops_f_263, 2 },
  { { "mic", "media", mira_tags_264, 4, 0 }, mira_ops_o_264, 2, mira_ops_f_264, 2 },
  { { "mic.slash", "media", mira_tags_265, 3, 0 }, mira_ops_o_265, 2, mira_ops_f_265, 2 },
  { { "camera", "media", mira_tags_266, 3, 0 }, mira_ops_o_266, 2, mira_ops_f_266, 1 },
  { { "photo", "media", mira_tags_267, 4, 0 }, mira_ops_o_267, 2, mira_ops_f_267, 1 },
  { { "music.note", "media", mira_tags_268, 4, 0 }, mira_ops_o_268, 2, mira_ops_f_268, 2 },
  { { "waveform", "media", mira_tags_269, 5, 0 }, mira_ops_o_269, 1, mira_ops_f_269, 1 },
  { { "film", "media", mira_tags_270, 4, 0 }, mira_ops_o_270, 2, mira_ops_f_270, 1 },
  { { "sun.max", "meteo", mira_tags_271, 4, 0 }, mira_ops_o_271, 2, mira_ops_f_271, 2 },
  { { "cloud", "meteo", mira_tags_272, 4, 0 }, mira_ops_o_272, 1, mira_ops_f_272, 1 },
  { { "cloud.arrow.up", "meteo", mira_tags_273, 4, 0 }, mira_ops_o_273, 2, mira_ops_f_273, 1 },
  { { "cloud.arrow.down", "meteo", mira_tags_274, 4, 0 }, mira_ops_o_274, 2, mira_ops_f_274, 1 },
  { { "cloud.rain", "meteo", mira_tags_275, 3, 0 }, mira_ops_o_275, 2, mira_ops_f_275, 2 },
  { { "cloud.bolt", "meteo", mira_tags_276, 4, 0 }, mira_ops_o_276, 2, mira_ops_f_276, 2 },
  { { "snowflake", "meteo", mira_tags_277, 5, 0 }, mira_ops_o_277, 1, mira_ops_f_277, 1 },
  { { "wind", "meteo", mira_tags_278, 4, 0 }, mira_ops_o_278, 1, mira_ops_f_278, 1 },
  { { "thermometer", "meteo", mira_tags_279, 4, 0 }, mira_ops_o_279, 2, mira_ops_f_279, 1 },
  { { "umbrella", "meteo", mira_tags_280, 4, 0 }, mira_ops_o_280, 2, mira_ops_f_280, 2 },
  { { "drop", "meteo", mira_tags_281, 5, 0 }, mira_ops_o_281, 1, mira_ops_f_281, 2 },
  { { "flame", "meteo", mira_tags_282, 5, 0 }, mira_ops_o_282, 1, mira_ops_f_282, 2 },
  { { "circle", "formes", mira_tags_283, 4, 0 }, mira_ops_o_283, 1, mira_ops_f_283, 2 },
  { { "square", "formes", mira_tags_284, 3, 0 }, mira_ops_o_284, 1, mira_ops_f_284, 2 },
  { { "triangle", "formes", mira_tags_285, 3, 0 }, mira_ops_o_285, 1, mira_ops_f_285, 2 },
  { { "diamond", "formes", mira_tags_286, 3, 0 }, mira_ops_o_286, 1, mira_ops_f_286, 2 },
  { { "hexagon", "formes", mira_tags_287, 3, 0 }, mira_ops_o_287, 1, mira_ops_f_287, 2 },
  { { "capsule", "formes", mira_tags_288, 4, 0 }, mira_ops_o_288, 1, mira_ops_f_288, 2 },
  { { "rectangle", "formes", mira_tags_289, 3, 0 }, mira_ops_o_289, 1, mira_ops_f_289, 2 },
  { { "seal", "formes", mira_tags_290, 4, 0 }, mira_ops_o_290, 1, mira_ops_f_290, 2 },
  { { "circle.lefthalf.filled", "formes", mira_tags_291, 5, 0 }, mira_ops_o_291, 2, mira_ops_f_291, 2 },
  { { "circle.grid.3x3", "formes", mira_tags_292, 4, 0 }, mira_ops_o_292, 1, mira_ops_f_292, 1 },
  { { "rectangle.3.group", "formes", mira_tags_293, 4, 0 }, mira_ops_o_293, 1, mira_ops_f_293, 1 },
  { { "rectangle.split.2x1", "formes", mira_tags_294, 4, 0 }, mira_ops_o_294, 2, mira_ops_f_294, 1 },
  { { "square.3.layers.3d", "formes", mira_tags_295, 4, 0 }, mira_ops_o_295, 2, mira_ops_f_295, 2 },
  { { "square.on.square", "formes", mira_tags_296, 4, 0 }, mira_ops_o_296, 2, mira_ops_f_296, 2 },
  { { "gamecontroller", "manette", mira_tags_297, 4, 0 }, mira_ops_o_297, 2, mira_ops_f_297, 1 },
  { { "gamecontroller.grips", "manette", mira_tags_298, 5, 0 }, mira_ops_o_298, 2, mira_ops_f_298, 1 },
  { { "gamecontroller.touchpad", "manette", mira_tags_299, 6, 0 }, mira_ops_o_299, 2, mira_ops_f_299, 1 },
  { { "dpad", "manette", mira_tags_300, 4, 0 }, mira_ops_o_300, 2, mira_ops_f_300, 1 },
  { { "dpad.up", "manette", mira_tags_301, 3, 0 }, mira_ops_o_301, 3, mira_ops_f_301, 2 },
  { { "dpad.down", "manette", mira_tags_302, 3, 0 }, mira_ops_o_302, 3, mira_ops_f_302, 2 },
  { { "dpad.left", "manette", mira_tags_303, 3, 0 }, mira_ops_o_303, 3, mira_ops_f_303, 2 },
  { { "dpad.right", "manette", mira_tags_304, 3, 0 }, mira_ops_o_304, 3, mira_ops_f_304, 2 },
  { { "a.circle", "manette", mira_tags_305, 4, 0 }, mira_ops_o_305, 2, mira_ops_f_305, 1 },
  { { "b.circle", "manette", mira_tags_306, 4, 0 }, mira_ops_o_306, 2, mira_ops_f_306, 1 },
  { { "x.circle", "manette", mira_tags_307, 4, 0 }, mira_ops_o_307, 2, mira_ops_f_307, 1 },
  { { "y.circle", "manette", mira_tags_308, 3, 0 }, mira_ops_o_308, 2, mira_ops_f_308, 1 },
  { { "triangle.circle", "manette", mira_tags_309, 3, 0 }, mira_ops_o_309, 2, mira_ops_f_309, 1 },
  { { "square.circle", "manette", mira_tags_310, 3, 0 }, mira_ops_o_310, 2, mira_ops_f_310, 1 },
  { { "circle.circle", "manette", mira_tags_311, 3, 0 }, mira_ops_o_311, 2, mira_ops_f_311, 1 },
  { { "l.joystick", "manette", mira_tags_312, 4, 0 }, mira_ops_o_312, 2, mira_ops_f_312, 1 },
  { { "r.joystick", "manette", mira_tags_313, 4, 0 }, mira_ops_o_313, 2, mira_ops_f_313, 1 },
  { { "l1.rectangle.roundedbottom", "manette", mira_tags_314, 4, 0 }, mira_ops_o_314, 2, mira_ops_f_314, 1 },
  { { "r1.rectangle.roundedbottom", "manette", mira_tags_315, 4, 0 }, mira_ops_o_315, 2, mira_ops_f_315, 1 },
  { { "l2.rectangle.roundedtop", "manette", mira_tags_316, 4, 0 }, mira_ops_o_316, 2, mira_ops_f_316, 1 },
  { { "r2.rectangle.roundedtop", "manette", mira_tags_317, 4, 0 }, mira_ops_o_317, 2, mira_ops_f_317, 1 },
  { { "lb.rectangle.roundedbottom", "manette", mira_tags_318, 4, 0 }, mira_ops_o_318, 2, mira_ops_f_318, 1 },
  { { "rb.rectangle.roundedbottom", "manette", mira_tags_319, 4, 0 }, mira_ops_o_319, 2, mira_ops_f_319, 1 },
  { { "lt.rectangle.roundedtop", "manette", mira_tags_320, 4, 0 }, mira_ops_o_320, 2, mira_ops_f_320, 1 },
  { { "rt.rectangle.roundedtop", "manette", mira_tags_321, 4, 0 }, mira_ops_o_321, 2, mira_ops_f_321, 1 },
  { { "zl.rectangle.roundedtop", "manette", mira_tags_322, 4, 0 }, mira_ops_o_322, 2, mira_ops_f_322, 1 },
  { { "zr.rectangle.roundedtop", "manette", mira_tags_323, 4, 0 }, mira_ops_o_323, 2, mira_ops_f_323, 1 },
  { { "line.3.horizontal.circle", "manette", mira_tags_324, 4, 0 }, mira_ops_o_324, 2, mira_ops_f_324, 1 },
  { { "house.circle", "manette", mira_tags_325, 4, 0 }, mira_ops_o_325, 2, mira_ops_f_325, 1 },
  { { "trophy", "manette", mira_tags_326, 6, 0 }, mira_ops_o_326, 2, mira_ops_f_326, 2 },
  { { "dice", "manette", mira_tags_327, 5, 0 }, mira_ops_o_327, 2, mira_ops_f_327, 1 },
  { { "gamecontroller.split", "manette", mira_tags_328, 6, 0 }, mira_ops_o_328, 2, mira_ops_f_328, 1 },
  { { "crown", "objets", mira_tags_329, 5, 0 }, mira_ops_o_329, 2, mira_ops_f_329, 1 },
  { { "rocket", "objets", mira_tags_330, 6, 0 }, mira_ops_o_330, 3, mira_ops_f_330, 2 },
  { { "scope", "objets", mira_tags_331, 5, 0 }, mira_ops_o_331, 1, mira_ops_f_331, 1 },
  { { "wand.and.stars", "objets", mira_tags_332, 6, 0 }, mira_ops_o_332, 1, mira_ops_f_332, 1 },
  { { "cursorarrow", "objets", mira_tags_333, 5, 0 }, mira_ops_o_333, 1, mira_ops_f_333, 2 },
  { { "leaf", "objets", mira_tags_334, 6, 0 }, mira_ops_o_334, 2, mira_ops_f_334, 1 },
  { { "graduationcap", "objets", mira_tags_335, 6, 0 }, mira_ops_o_335, 2, mira_ops_f_335, 2 },
  { { "book", "objets", mira_tags_336, 6, 0 }, mira_ops_o_336, 1, mira_ops_f_336, 1 },
  { { "ticket", "objets", mira_tags_337, 6, 0 }, mira_ops_o_337, 2, mira_ops_f_337, 1 },
  { { "fork.knife", "objets", mira_tags_338, 5, 0 }, mira_ops_o_338, 1, mira_ops_f_338, 1 },
  { { "mug", "objets", mira_tags_339, 5, 0 }, mira_ops_o_339, 2, mira_ops_f_339, 2 },
  { { "cross.case", "objets", mira_tags_340, 6, 0 }, mira_ops_o_340, 3, mira_ops_f_340, 2 },
  { { "pawprint", "objets", mira_tags_341, 5, 0 }, mira_ops_o_341, 1, mira_ops_f_341, 1 },
  { { "moon.stars", "objets", mira_tags_342, 5, 0 }, mira_ops_o_342, 1, mira_ops_f_342, 2 },
  { { "equal", "objets", mira_tags_343, 4, 0 }, mira_ops_o_343, 1, mira_ops_f_343, 1 },
  { { "face.bubble", "marques", mira_tags_344, 6, 0 }, mira_ops_o_344, 2, mira_ops_f_344, 1 },
  { { "cat.circle", "marques", mira_tags_345, 5, 0 }, mira_ops_o_345, 2, mira_ops_f_345, 1 },
  { { "arrow.branch.diamond", "marques", mira_tags_346, 5, 0 }, mira_ops_o_346, 2, mira_ops_f_346, 1 },
  { { "fox", "marques", mira_tags_347, 5, 0 }, mira_ops_o_347, 2, mira_ops_f_347, 1 },
  { { "bird", "marques", mira_tags_348, 5, 0 }, mira_ops_o_348, 2, mira_ops_f_348, 1 },
  { { "butterfly", "marques", mira_tags_349, 4, 0 }, mira_ops_o_349, 2, mira_ops_f_349, 2 },
  { { "penguin", "marques", mira_tags_350, 5, 0 }, mira_ops_o_350, 3, mira_ops_f_350, 2 },
  { { "robot", "marques", mira_tags_351, 5, 0 }, mira_ops_o_351, 3, mira_ops_f_351, 2 },
  { { "apple", "marques", mira_tags_352, 5, 0 }, mira_ops_o_352, 2, mira_ops_f_352, 2 },
  { { "briefcase", "marques", mira_tags_353, 6, 0 }, mira_ops_o_353, 3, mira_ops_f_353, 2 },
  { { "cube.stack", "marques", mira_tags_354, 5, 0 }, mira_ops_o_354, 1, mira_ops_f_354, 1 },
  { { "phone.bubble.left", "marques", mira_tags_355, 5, 0 }, mira_ops_o_355, 2, mira_ops_f_355, 1 },
  { { "dot.radiowaves.upright", "marques", mira_tags_356, 5, 0 }, mira_ops_o_356, 2, mira_ops_f_356, 2 },
  { { "pen.nib", "marques", mira_tags_357, 6, 0 }, mira_ops_o_357, 2, mira_ops_f_357, 1 },
  { { "music.note.circle", "marques", mira_tags_358, 5, 0 }, mira_ops_o_358, 2, mira_ops_f_358, 1 },
  { { "figure.stand", "vetements", mira_tags_359, 5, 0 }, mira_ops_o_359, 1, mira_ops_f_359, 1 },
  { { "hair", "vetements", mira_tags_360, 5, 0 }, mira_ops_o_360, 2, mira_ops_f_360, 2 },
  { { "helmet", "vetements", mira_tags_361, 5, 0 }, mira_ops_o_361, 3, mira_ops_f_361, 2 },
  { { "tshirt", "vetements", mira_tags_362, 5, 0 }, mira_ops_o_362, 1, mira_ops_f_362, 1 },
  { { "jacket", "vetements", mira_tags_363, 6, 0 }, mira_ops_o_363, 2, mira_ops_f_363, 1 },
  { { "gloves", "vetements", mira_tags_364, 5, 0 }, mira_ops_o_364, 2, mira_ops_f_364, 1 },
  { { "pants", "vetements", mira_tags_365, 5, 0 }, mira_ops_o_365, 2, mira_ops_f_365, 1 },
  { { "shoe", "vetements", mira_tags_366, 4, 0 }, mira_ops_o_366, 2, mira_ops_f_366, 1 },
  { { "underwear", "vetements", mira_tags_367, 5, 0 }, mira_ops_o_367, 2, mira_ops_f_367, 1 },
  { { "eyeglasses", "vetements", mira_tags_368, 4, 0 }, mira_ops_o_368, 2, mira_ops_f_368, 2 },
  { { "earring", "vetements", mira_tags_369, 5, 0 }, mira_ops_o_369, 1, mira_ops_f_369, 1 },
  { { "necklace", "vetements", mira_tags_370, 6, 0 }, mira_ops_o_370, 2, mira_ops_f_370, 2 },
  { { "bracelet", "vetements", mira_tags_371, 5, 0 }, mira_ops_o_371, 1, mira_ops_f_371, 1 },
  { { "anklet", "vetements", mira_tags_372, 5, 0 }, mira_ops_o_372, 2, mira_ops_f_372, 2 },
  { { "ring", "vetements", mira_tags_373, 5, 0 }, mira_ops_o_373, 2, mira_ops_f_373, 2 },
  { { "vest", "vetements", mira_tags_374, 5, 0 }, mira_ops_o_374, 2, mira_ops_f_374, 1 },
  { { "parachute", "vetements", mira_tags_375, 4, 0 }, mira_ops_o_375, 2, mira_ops_f_375, 2 },
  { { "hat", "vetements", mira_tags_376, 5, 0 }, mira_ops_o_376, 2, mira_ops_f_376, 1 },
  { { "cap", "vetements", mira_tags_377, 4, 0 }, mira_ops_o_377, 1, mira_ops_f_377, 1 },
  { { "beanie", "vetements", mira_tags_378, 5, 0 }, mira_ops_o_378, 3, mira_ops_f_378, 2 },
  { { "helmet.motorcycle", "vetements", mira_tags_379, 5, 0 }, mira_ops_o_379, 2, mira_ops_f_379, 1 },
  { { "helmet.motocross", "vetements", mira_tags_380, 5, 0 }, mira_ops_o_380, 2, mira_ops_f_380, 2 },
  { { "vest.armor", "vetements", mira_tags_381, 5, 0 }, mira_ops_o_381, 2, mira_ops_f_381, 1 },
  { { "boot", "vetements", mira_tags_382, 5, 0 }, mira_ops_o_382, 2, mira_ops_f_382, 1 },
  { { "shoe.heel", "vetements", mira_tags_383, 5, 0 }, mira_ops_o_383, 1, mira_ops_f_383, 1 },
  { { "shorts", "vetements", mira_tags_384, 5, 0 }, mira_ops_o_384, 2, mira_ops_f_384, 1 },
  { { "skirt", "vetements", mira_tags_385, 4, 0 }, mira_ops_o_385, 2, mira_ops_f_385, 1 },
  { { "hoodie", "vetements", mira_tags_386, 5, 0 }, mira_ops_o_386, 2, mira_ops_f_386, 1 },
  { { "shirt", "vetements", mira_tags_387, 5, 0 }, mira_ops_o_387, 2, mira_ops_f_387, 1 },
  { { "sunglasses", "vetements", mira_tags_388, 4, 0 }, mira_ops_o_388, 2, mira_ops_f_388, 2 },
  { { "goggles", "vetements", mira_tags_389, 5, 0 }, mira_ops_o_389, 2, mira_ops_f_389, 2 },
  { { "mask", "vetements", mira_tags_390, 5, 0 }, mira_ops_o_390, 2, mira_ops_f_390, 1 },
  { { "backpack", "vetements", mira_tags_391, 5, 0 }, mira_ops_o_391, 3, mira_ops_f_391, 2 },
  { { "beard", "vetements", mira_tags_392, 5, 0 }, mira_ops_o_392, 3, mira_ops_f_392, 2 },
  { { "tattoo", "vetements", mira_tags_393, 5, 0 }, mira_ops_o_393, 3, mira_ops_f_393, 2 },
  { { "dress", "vetements", mira_tags_394, 4, 0 }, mira_ops_o_394, 2, mira_ops_f_394, 1 },
  { { "pistol", "armes", mira_tags_395, 4, 0 }, mira_ops_o_395, 2, mira_ops_f_395, 2 },
  { { "pistol.m1911", "armes", mira_tags_396, 5, 0 }, mira_ops_o_396, 2, mira_ops_f_396, 2 },
  { { "pistol.magnum", "armes", mira_tags_397, 5, 0 }, mira_ops_o_397, 3, mira_ops_f_397, 2 },
  { { "revolver", "armes", mira_tags_398, 5, 0 }, mira_ops_o_398, 2, mira_ops_f_398, 2 },
  { { "rifle.ak47", "armes", mira_tags_399, 4, 0 }, mira_ops_o_399, 2, mira_ops_f_399, 2 },
  { { "rifle.m4a1", "armes", mira_tags_400, 5, 0 }, mira_ops_o_400, 2, mira_ops_f_400, 2 },
  { { "rifle.m16", "armes", mira_tags_401, 4, 0 }, mira_ops_o_401, 2, mira_ops_f_401, 2 },
  { { "rifle.kar98k", "armes", mira_tags_402, 4, 0 }, mira_ops_o_402, 3, mira_ops_f_402, 3 },
  { { "rifle.sniper", "armes", mira_tags_403, 5, 0 }, mira_ops_o_403, 3, mira_ops_f_403, 3 },
  { { "shotgun", "armes", mira_tags_404, 4, 0 }, mira_ops_o_404, 2, mira_ops_f_404, 2 },
  { { "smg", "armes", mira_tags_405, 5, 0 }, mira_ops_o_405, 2, mira_ops_f_405, 2 },
  { { "smg.drum", "armes", mira_tags_406, 5, 0 }, mira_ops_o_406, 2, mira_ops_f_406, 2 },
  { { "launcher.rpg", "armes", mira_tags_407, 5, 0 }, mira_ops_o_407, 1, mira_ops_f_407, 1 },
  { { "knife", "armes", mira_tags_408, 5, 0 }, mira_ops_o_408, 2, mira_ops_f_408, 2 },
  { { "bat", "armes", mira_tags_409, 4, 0 }, mira_ops_o_409, 1, mira_ops_f_409, 1 },
  { { "grenade", "armes", mira_tags_410, 4, 0 }, mira_ops_o_410, 3, mira_ops_f_410, 2 },
  { { "ammo", "armes", mira_tags_411, 5, 0 }, mira_ops_o_411, 2, mira_ops_f_411, 1 },
  { { "crosshair", "armes", mira_tags_412, 5, 0 }, mira_ops_o_412, 2, mira_ops_f_412, 2 },
};

#endif /* MIRA_SYMBOLS_DATA_H */
