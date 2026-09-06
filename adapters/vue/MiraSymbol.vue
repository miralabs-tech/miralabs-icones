<script setup lang="ts">
// @miralabs/ui-vue — <MiraSymbol/> : rendu par le renderer commun, injecté en SVG statique (aucune réactivité interne nécessaire).
import { computed } from "vue";
import { symbolToString } from "@miralabs/icones/render";
import type { SymbolData, SymbolOptions } from "@miralabs/icones";

const props = withDefaults(defineProps<{
  symbol: SymbolData;
  weight?: SymbolOptions["weight"];
  shape?: SymbolOptions["shape"];
  tone?: SymbolOptions["tone"];
  size?: SymbolOptions["size"];
  label?: string;
  mirror?: boolean;
}>(), { weight: "regular", shape: "outline", tone: "mono", size: "md" });

const html = computed(() => symbolToString(props.symbol, {
  weight: props.weight, shape: props.shape, tone: props.tone, size: props.size, label: props.label,
  mirror: props.mirror ?? (!!props.symbol.rtl && typeof document !== "undefined" && document.dir === "rtl"),
}));
</script>

<template>
  <span style="display: inline-grid; place-items: center" v-html="html"></span>
</template>
