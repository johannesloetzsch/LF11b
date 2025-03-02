# Plan

## Zeitplan

```mermaid
gantt
 title LF11b November 2024
 dateFormat YYYY-MM-DD
 axisFormat %d.%m.
 section 8h Mo 18.11.
  Wiederholung aus vorherigen LF    :2024-11-18, 8h
 section 8h Fr 22.11.
  Test (Inhalte vom Montag)         :crit, 2024-11-22, 1h
  Theorie                           :2024-11-22, 4h
  SOL Übungsaufgaben                :crit, 2024-11-22, 2h
```

```mermaid
gantt
 title LF11b Januar 2025
 dateFormat YYYY-MM-DD
 axisFormat %d.%m.
 section 8h Mo 06.01.
  Theorie                           :2025-01-06, 8h
 section 6h Mi 08.01.
  Theorie                           :2025-01-08, 6h
 section 5h Do 09.01.
  (Wiederholung für Klassenarbeit)  :2025-01-09, 5h
 section 4h Fr 10.01.
  (Klassenarbeit)                   :crit, 2025-01-09, 2h
  SOL Praxisbeispiel                :crit, 2025-01-09, 2h
 section 8h Mo 13.01.
  Theorie                           :2025-01-13, 8h
 section 6h Mi 15.01.
  Exkursion FHD                     :t1, 2025-01-15, 2h
  Theorie                           :after t1, 4h
 section 3h Do 16.01.
  Theorie                           :2025-01-16, 3h
 section 6h Fr 17.01.
  Klassenarbeit                     :crit, t2, 2025-01-17, 2h
  Theorie                           :t3, after t2, 2h
  SOL Schutzmaßnahmen planen        :crit, after t3, 2h
```

```mermaid
gantt
 title LF11b März 2025
 dateFormat YYYY-MM-DD
 axisFormat %d.%m.
 section 6h Mo 03.03.
  Erklärung Praxisprojekt + Wiederholung :t1, 2025-03-03, 2h
  Planung Praxisprojekt             :after t1, 4h
 section 5h Mi 05.03.
  Praxisprojekt                     :2025-03-05, 5h
 section 4h Fr 07.03.
  Praxisprojekt + Wiederholung      :2025-03-07, 2h
  SOL Projektabschluss & Bewerten des erreichten Sicherheitsniveaus :crit, 2025-03-07, 2h
 section 4h Fr 14.03.
  Klassenarbeit                     :crit, t2, 2025-03-14, 2h
  Projektpräsentationen             :crit, after t2, 2h
```

## Unterrichtsinhalte 13.1. (8 Stunden)

* [x] Wiederholung/Vertiefung Firewall
* [x] Einführung: „Theorie vs. Praxis“ -> Beispiel
* [.] Grundlagen
  * [ ] Praxisfragen
  * [ ] Threat Models

## Unterrichtsinhalte 15.1. (~~6~~ 3 Stunden)

* [x] Auswertung SOL vom 10.1. (wahlweise Vorträge)
  * [ ] Gemeinsame Schutzbedarfs- und Risikoanalyse
  * [ ] Prüfung / Bewertung / Abgleich mit „Grundlagen“-Empfehlungen

## Unterrichtsinhalte 16.1. (3 Stunden) + März (?)

* [x] Wiederholung/Vertiefung [VPN](vpn.md)
* [ ] Planung
  * [x] [TOM](tom.md)
  * [ ] [Endpoint Security](planung.md)
* [.] Grundlagen
  * [ ] Praxisfragen
* [ ] Handlungsempfehlung


## Bonus

* [ ] Weitere Praxisbeispiele
* [x] Hackerethik (vs. [202c StGB](https://www.gesetze-im-internet.de/stgb/__202c.html))
* [ ] CTF
* [ ] „Live Hacks“ z.B.
  * [ ] SQL-Injection
  * [ ] Netzwerksicherheit
    * [ ] MITM-Proxy
    * [ ] NMap
    * [ ] Wireshark / TCPdump
  * [ ] Binary Exploitation
* [ ] Grundlagen Kryptografie


## Leistungskontrollen
* **Fr 17.01. Klausur: doppelte Wertung, 90min, handschriftlich**
  * Erlaubte Hilfsmittel: keine
  * Inhalte:
    * Netzwerksicherheit
      * Firewall, NAT 
      * VLAN
      * VPN
      * Radius (3A)


* **Fr 14.03. Klausur: doppelte Wertung, 90min, handschriftlich**
  * Erlaubte Hilfsmittel: A4 Factsheet einseitig
  * Inhalte:
    * [Grundlagen IT-Sicherheit](grundlagen.md)
      * Datenschutz
      * Verbreitete Ursachen für Sicherheitsprobleme (Angriffsvektoren/Bedrohungsszenarien)
      * **[Technische und organisatorische Maßnahmen](tom.md)**
    * **Grundprinzipien**
      * Relative Sicherheit
      * Defense in depth / Schweizer-Käse-Modell
      * KISS-Prinzip / „teile und herrsche“
      * Secure by design, Technischer Datenschutz
      * Kerckhoffs’ Prinzip
    * [Grundlegende Definitonen nach BSI-Grundschutz](analyse.md)
      * **Zielobjekte für Schutzbedarfsfeststellung**
      * **Schutzziele (= Grundwerte)**
      * **Schadensszenarien**
      * **Schutzbedarfskategorien**
    * Schutzbedarfsanalyse, Schutzbedarfsmatrix
    * **Risikoanalyse**
      * **Elementare Gefährdungen**
      * **Risikobewertung**
      * Häufigkeit, Auswirkungen
      * Risikokategorien
    * **[Risikobehandlung](planung.md)**
    * ~~Grundlagen Kryptografie~~

* **Projektarbeit**: zwei kleine Noten (Projektergebnis + Mitarbeit)
  * Vorlage: [pdf](material/projektarbeit_lf11b.pdf), [odt](material/projektarbeit_lf11b.odt)
