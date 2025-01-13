# Firewalls

## Strategien

### Whitelist („Allowlist-Strategie“)

* „~~Diese Variante ist sehr sicher.~~“ Dise Stragegie ist die einzige, die für die meisten Anwendungsfälle einen relevanten Sicherheitsvorteil bietet.
* Ein Packetfilter mit Whitelist-Strategie sollte auf jedem System eingesetzt werden.
* „Allerdings erfordert sie eine (aufwendige) Konfiguration der Firewall.“ (?)

### Blacklist („Blocklist-Strategie“)

* „Diese Variante ist relativ komfortabel. Bei der Einführung ist mit ~~keinerlei~~ wenigen Problemen zu rechnen.“
* „Allerdings ist sie nur so sicher, wie Gefahren und **Sicherheitslöcher bekannt** sind und gesperrt werden.“ :(


## Arten

### Paketfilter

* einfach
* hoher Datendurchsatz
* untersucht einzelne Daten„pakete“
* Layer 3 (und teilweise Layer 4 und Layer 2)

### Stateful-Packet-Inspection (SPI)

* untersucht Daten„ströme“ (zusammengehörende „Pakete“)
* überwiegend für Layer 4 (TCP)

### Application-Layer-Firewall (Content-Filter)

* „Application-Gateway“, „Application-Level-Gateway“
* Auf Layern 5-7
* „~~intelligenter~~“ Behauptet intelligenter als Paketfilter+SPI zu sein
* Datendurchsatz relativ niedrig

> Bewerten Sie folgende Anwendungsfälle:
>
> * „Herausfiltern von ActiveX und/oder JavaScript aus angeforderten HTML-Seiten“
> * „Blockieren von Viren oder Trojanern in Webseiten“
> * „Filtern von vertraulichen Firmeninformationen (z.B. Bilanz)“
> * „Sperren von unerwünschten Webseiten anhand von Schlüsselwörtern“
> * „Unerwünschte Anwendungsprotokollen (Filesharing) blockieren“

* meist nur Blacklist
* verhindert Ende-zu-Ende-Verschlüsselung

### Next Generation Firewall

* Zusatzfunktionen
  * Deep Packet Inspection (DPI)
  * IPS oder IDS

* Bringt viele Herausforderungen
  * Integrität, Vertraulichkeit, Verfügbarkeit
  * Datenschutz
  * komplexe Konfiguration, Debuggen, Kosten
  * maschinelle Lernverfahren


## Beispiel: [iptables](https://wiki.ubuntuusers.de/iptables/)

### [Beispielkonfiguration für Clients](https://www.cyberciti.biz/tips/linux-iptables-examples.html)

```bash
iptables -P FORWARD DROP
iptables -P OUTPUT ACCEPT
iptables -A INPUT -m state --state NEW,ESTABLISHED -j ACCEPT
iptables -P INPUT DROP
```
