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
  Theorie                           :2025-01-15, 6h
 section 3h Do 16.01.
  Wiederholung für Klassenarbeit    :2025-01-16, 3h
 section 4h Fr 17.01.
  Klassenarbeit                     :crit, 2025-01-17, 2h
  SOL Schutzmaßnahmen planen        :crit, 2025-01-17, 2h
```

```mermaid
gantt
 title LF11b März 2025
 dateFormat YYYY-MM-DD
 axisFormat %d.%m.
 section 6h Mo 03.03.
  Praxis                            :2025-03-03, 6h
 section 5h Mi 05.03.
  Praxis                            :2025-03-05, 5h
 section 4h Fr 07.03.
  Praxis                            :2025-03-07, 2h
  SOL Projektabschluss & Bewerten des erreichten Sicherheitsniveaus :crit, 2025-03-07, 2h
 section 4h Fr 14.03.
  Projektpräsentationen             :crit, 2025-03-14, 4h
```

## Unterrichtsinhalte 13.1. (8 Stunden)

* [ ] Einführung: „Theorie vs. Praxis“ -> Beispiel
* [ ] Grundlagen
  * [ ] Praxisfragen
  * [ ] Threat Models
* [ ] Planung
  * [ ] Endpoint Security
  * [ ] TOM

## Unterrichtsinhalte 15.1. (6 Stunden)

* [ ] Auswertung SOL vom 10.1. (wahlweise Vorträge)
  * [ ] Gemeinsame Schutzbedarfs- und Risikoanalyse
  * [ ] Prüfung / Bewertung / Abgleich mit „Grundlagen“-Empfehlungen
* [ ] Weitere Praxisbeispiele
* [ ] Handlungsempfehlung

## Bonus

* [ ] Hackerethik (vs. [202c StGB](https://www.gesetze-im-internet.de/stgb/__202c.html))
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
* **Fr 10.01. Klausur: doppelte Wertung, 90min, handschriftlich**
  * Erlaubte Hilfsmittel: keine
  * Inhalte:
    * Netzwerksicherheit
      * Firewall, NAT 
      * VLAN
      * VPN
      * Radius (3A)


* **Fr 17.01. Klausur: doppelte Wertung, 90min, handschriftlich**
  * Erlaubte Hilfsmittel: keine
  * Inhalte:
    * Grundlagen IT-Sicherheit
      * Datenschutz
      * Verbreitete Ursachen für Sicherheitsprobleme (Angriffsvektoren/Bedrohungsszenarien)
      * Technische und organisatorische Maßnahmen
    * Grundprinzipien
      * Relative Sicherheit
      * Defense in depth / Schweizer-Käse-Modell
      * KISS-Prinzip / „teile und herrsche“
      * Secure by design, Technischer Datenschutz
      * Kerckhoffs’ Prinzip
    * Grundlegende Definitonen nach BSI-Grundschutz
      * Zielobjekte für Schutzbedarfsfeststellung
      * Schutzziele (= Grundwerte)
      * Schadensszenarien
      * Schutzbedarfskategorien
    * Schutzbedarfsanalyse, Schutzbedarfsmatrix
    * Risikoanalyse
      * Elementare Gefährdungen
      * Risikobewertung
      * Häufigkeit, Auswirkungen
      * Risikokategorien
    * Risikobehandlung
    * ~~Grundlagen Kryptografie~~
