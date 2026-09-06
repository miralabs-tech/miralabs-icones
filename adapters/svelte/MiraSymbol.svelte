<script lang="ts">
  // @miralabs/ui-svelte — <MiraSymbol/> : renderer commun, sortie {@html}.
  import { symbolToString } from "@miralabs-tech/icones/render";
  import type { SymbolData, SymbolOptions } from "@miralabs-tech/icones";

  export let symbol: SymbolData;
  export let weight: SymbolOptions["weight"] = "regular";
  export let shape: SymbolOptions["shape"] = "outline";
  export let tone: SymbolOptions["tone"] = "mono";
  export let size: SymbolOptions["size"] = "md";
  export let label: string | undefined = undefined;
  export let mirror: boolean | undefined = undefined;

  $: html = symbolToString(symbol, {
    weight, shape, tone, size, label,
    mirror: mirror ?? (!!symbol.rtl && typeof document !== "undefined" && document.dir === "rtl"),
  });
</script>

<span style="display:inline-grid;place-items:center">{@html html}</span>
