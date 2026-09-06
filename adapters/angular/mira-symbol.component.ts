// @miralabs/ui-angular — <mira-symbol> : composant standalone, renderer commun, DOM construit sans innerHTML (pas de sanitizer à contourner).
import { Component, ElementRef, Input, OnChanges, inject } from "@angular/core";
import { symbolToElement } from "@miralabs/icones/render";
import type { SymbolData, SymbolOptions } from "@miralabs/icones";

@Component({
  selector: "mira-symbol",
  standalone: true,
  template: "",
  host: { style: "display:inline-grid;place-items:center" },
})
export class MiraSymbolComponent implements OnChanges {
  @Input({ required: true }) symbol!: SymbolData;
  @Input() weight: SymbolOptions["weight"] = "regular";
  @Input() shape: SymbolOptions["shape"] = "outline";
  @Input() tone: SymbolOptions["tone"] = "mono";
  @Input() size: SymbolOptions["size"] = "md";
  @Input() label?: string;
  @Input() mirror?: boolean;

  private host = inject<ElementRef<HTMLElement>>(ElementRef);

  ngOnChanges(): void {
    const el = this.host.nativeElement;
    el.replaceChildren();
    if (!this.symbol) return;
    const mirror = this.mirror ?? (!!this.symbol.rtl && getComputedStyle(el).direction === "rtl");
    el.appendChild(symbolToElement(this.symbol, { weight: this.weight, shape: this.shape, tone: this.tone, size: this.size, label: this.label, mirror }));
  }
}
