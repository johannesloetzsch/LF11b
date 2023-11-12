# Analyse

[Grundlegende Definitonen nach BSI-Grundschutz](https://www.bsi.bund.de/DE/Themen/Unternehmen-und-Organisationen/Standards-und-Zertifizierung/IT-Grundschutz/Zertifizierte-Informationssicherheit/IT-Grundschutzschulung/Online-Kurs-IT-Grundschutz/Lektion_4_Schutzbedarfsfeststellung/Lektion_4_01/Lektion_4_01_node.html)

## Zielobjekte für Schutzbedarfsfeststellung
* Daten
* datenverarbeitende Prozesse, Anwendungen, Systeme
* Kommunikationsverbindungen
* Räume

## Schutzziele (= Grundwerte)

* Verfügbarkeit
* Vertraulichkeit
* Integrität

## Schadensszenarien

* Beeinträchtigungen der persönlichen Unversehrtheit
* Verstöße gegen Gesetze, Vorschriften oder Verträge
* Beeinträchtigungen des informationellen Selbstbestimmungsrechts
* Beeinträchtigungen der Aufgabenerfüllung
* negative Innen- oder Außenwirkung
* finanzielle Auswirkungen

## Schutzbedarfskategorie

* Normaler Schutzbedarf
* Hoher Schutzbedarf
* Sehr hoher Schutzbedarf

### [Definition Schutzbedarfskategorien](https://www.bsi.bund.de/SharedDocs/Downloads/DE/BSI/Grundschutz/Hilfsmittel/Recplast/A21_Definition_Schutzbedarfskategorien.pdf?__blob=publicationFile&v=5)
Schadensszenario x Schutzbedarfskategorie

z.B.

|                                                                            | Normaler Schutzbedarf                                  | Hoher Schutzbedarf                                                 | Sehr hoher Schutzbedarf                                                         |
|----------------------------------------------------------------------------|--------------------------------------------------------|--------------------------------------------------------------------|---------------------------------------------------------------------------------|
| - mögliche Beeinträchtigungen der persönlichen Unversehrtheit              | nein                                                   | nicht stark/dauerhaft                                              | stark/dauerhaft                                                                 |
| - mögliche Verstöße gegen Gesetze, Vorschriften oder Verträge              | geringfügige Strafen                                   | schwerwiegende/hohe Strafen                                        | existenzbedrohende Strafen                                                      |
| - mögliche Beeinträchtigungen des informationellen Selbstbestimmungsrechts | geringfügige/tolerierbare Auswirkungen für Betroffenen | Beeinträchtigungen, aber ohne dauerhaften Folgen                   | stark/dauerhaft                                                                 |
| - mögliche Beeinträchtigungen der Aufgabenerfüllung                        | allenfalls unerheblich                                 | erhebliche Beeinträchtigung; Ausfallzeiten >24h nicht tolerierbar  | starke Beeinträchtigung; Ausfallzeiten >2h nicht tolerierbar                    |
| - mögliche negative Innen- oder Außenwirkung                               | kein Ansehensverlust bei Kunden und Geschäftspartnern  | Ansehen bei Kunden/Geschäftspartnern wird erheblich beeinträchtigt | Ansehen bei Kunden/Geschäftspartnern wird grundlegend und nachhaltig beschädigt |
| - möglicher finanzieller Schaden                                           | geringfügig (< XXX €)                                  | schwerwiegende/hoch (< YYYYYY €)                                   | existenzbedrohend (>= YYYYYY €)                                                  |

## [Schutzbedarf](https://www.bsi.bund.de/DE/Themen/Unternehmen-und-Organisationen/Standards-und-Zertifizierung/IT-Grundschutz/Zertifizierte-Informationssicherheit/IT-Grundschutzschulung/Online-Kurs-IT-Grundschutz/Lektion_4_Schutzbedarfsfeststellung/Lektion_4_node.html)

[BSI Checkliste für das Interview zur Schutzbedarfsfeststellung](https://www.itzbund.de/SharedDocs/Downloads/DE/digitalemission/trendstechnologien/IT-Security_Checkliste_Schutzbedarfsfeststellung.pdf?__blob=publicationFile&v=2)

### Schutzbedarfsmatrix
Zielobjekte x Schutzziele x Schadensszenarien x Schutzbedarfskategorie

|                                                                            | Beurteilung möglichen Schadens      | Normaler Schutzbedarf | Hoher Schutzbedarf | Sehr hoher Schutzbedarf |
|----------------------------------------------------------------------------|-------------------------------------|-----------------------|--------------------|-------------------------|
| **Verfügbarkeit** (Ausfall)                                                |                                     |                       |                    |                         |
| - mögliche Beeinträchtigungen der persönlichen Unversehrtheit              | ja? stärk? dauerhaft?               |                       |                    |                         |
| - mögliche Verstöße gegen Gesetze, Vorschriften oder Verträge              | Strafhöhe?                          |                       |                    |                         |
| - mögliche Beeinträchtigungen des informationellen Selbstbestimmungsrechts | stärke? dauerhaft?                  |                       |                    |                         |
| - mögliche Beeinträchtigungen der Aufgabenerfüllung                        | Beeinträchtigungsstärke?            |                       |                    |                         |
| - akzeptable Ausfallzeit                                                   | Stunden                             |                       |                    |                         |
| - mögliche negative Innen- oder Außenwirkung                               | erheblich? grundlegend? nachhaltig? |                       |                    |                         |
| - möglicher finanzieller Schaden                                           | €                                   |                       |                    |                         |
| **Vertraulichkeit** (Datenleak)                                            |                                     |                       |                    |                         |
| - mögliche Beeinträchtigungen der persönlichen Unversehrtheit              | ja? stärk? dauerhaft?               |                       |                    |                         |
| - mögliche Verstöße gegen Gesetze, Vorschriften oder Verträge              | Strafhöhe?                          |                       |                    |                         |
| - mögliche Beeinträchtigungen des informationellen Selbstbestimmungsrechts | stärke? dauerhaft?                  |                       |                    |                         |
| - mögliche Beeinträchtigungen der Aufgabenerfüllung                        | Beeinträchtigungsstärke?            |                       |                    |                         |
| - mögliche negative Innen- oder Außenwirkung                               | erheblich? grundlegend? nachhaltig? |                       |                    |                         |
| - möglicher finanzieller Schaden                                           | €                                   |                       |                    |                         |
| **Integrität** (Kompromittierung)                                          |                                     |                       |                    |                         |
| - mögliche Beeinträchtigungen der persönlichen Unversehrtheit              | ja? stärk? dauerhaft?               |                       |                    |                         |
| - mögliche Verstöße gegen Gesetze, Vorschriften oder Verträge              | Strafhöhe?                          |                       |                    |                         |
| - mögliche Beeinträchtigungen des informationellen Selbstbestimmungsrechts | stärke? dauerhaft?                  |                       |                    |                         |
| - mögliche Beeinträchtigungen der Aufgabenerfüllung                        | Beeinträchtigungsstärke?            |                       |                    |                         |
| - mögliche negative Innen- oder Außenwirkung                               | erheblich? grundlegend? nachhaltig? |                       |                    |                         |
| - möglicher finanzieller Schaden                                           | €                                   |                       |                    |                         |

Für normalen Schutzbedarf:
* IT-Grundschutzhandbuch -> IT-Grundschutz-Kataloge -> IT-Grundschutz-Kompendium

Zusätzlicher Analysebedarf falls:
* Ein Zielobjekt hat einen hohen oder sehr hohen Schutzbedarf in mindestens einem der Schutzziele
* Es gibt für ein Zielobjekt keinen hinreichend passenden Baustein im IT-Grundschutz-Kompendium

## Risikoanalyse

[![von dem Server hängt die ganze Produktion ab](https://www.bsi.bund.de/SharedDocs/Bilder/DE/BSI/Themen/grundschutzdeutsch/Webkurs2018/Abb_7_00_Illustration.png?__blob=normal&v=1)](https://www.bsi.bund.de/DE/Themen/Unternehmen-und-Organisationen/Standards-und-Zertifizierung/IT-Grundschutz/Zertifizierte-Informationssicherheit/IT-Grundschutzschulung/Online-Kurs-IT-Grundschutz/Lektion_7_Risikoanalyse/Lektion_7_node.html)

* Gefähdungsübersicht erstellen
* Risiken einstufen
* Risiken behandeln
* Sicherheitskonzept konsolidieren

### [Organisatorische Rahmenbedingungen](https://www.bsi.bund.de/DE/Themen/Unternehmen-und-Organisationen/Standards-und-Zertifizierung/IT-Grundschutz/Zertifizierte-Informationssicherheit/IT-Grundschutzschulung/Online-Kurs-IT-Grundschutz/Lektion_7_Risikoanalyse/Lektion_7_01/Lektion_7_01_node.html)

### [Zielobjekte zusammenstellen](https://www.bsi.bund.de/DE/Themen/Unternehmen-und-Organisationen/Standards-und-Zertifizierung/IT-Grundschutz/Zertifizierte-Informationssicherheit/IT-Grundschutzschulung/Online-Kurs-IT-Grundschutz/Lektion_7_Risikoanalyse/Lektion_7_02/Lektion_7_02_node.html)

### [47 Elementare Gefährdungen](https://www.bsi.bund.de/SharedDocs/Downloads/DE/BSI/Grundschutz/Kompendium/Elementare_Gefaehrdungen.pdf?__blob=publicationFile&v=4)

### [Gefährdungsübersicht anlegen](https://www.bsi.bund.de/DE/Themen/Unternehmen-und-Organisationen/Standards-und-Zertifizierung/IT-Grundschutz/Zertifizierte-Informationssicherheit/IT-Grundschutzschulung/Online-Kurs-IT-Grundschutz/Lektion_7_Risikoanalyse/Lektion_7_04/Lektion_7_04_node.html)

### [Gefährdungsübersicht ergänzen](https://www.bsi.bund.de/DE/Themen/Unternehmen-und-Organisationen/Standards-und-Zertifizierung/IT-Grundschutz/Zertifizierte-Informationssicherheit/IT-Grundschutzschulung/Online-Kurs-IT-Grundschutz/Lektion_7_Risikoanalyse/Lektion_7_05/Lektion_7_05_node.html)

### [Häufigkeit und Auswirkungen einschätzen](https://www.bsi.bund.de/DE/Themen/Unternehmen-und-Organisationen/Standards-und-Zertifizierung/IT-Grundschutz/Zertifizierte-Informationssicherheit/IT-Grundschutzschulung/Online-Kurs-IT-Grundschutz/Lektion_7_Risikoanalyse/Lektion_7_06/Lektion_7_06_node.html)

Häufigkeit
* selten
* mittel
* häufig
* sehr häufig

Auswirkungen
* vernachlässigbar
* begrenzt
* beträchtlich
* existenzbedrohend

### [Risiken bewerten](https://www.bsi.bund.de/DE/Themen/Unternehmen-und-Organisationen/Standards-und-Zertifizierung/IT-Grundschutz/Zertifizierte-Informationssicherheit/IT-Grundschutzschulung/Online-Kurs-IT-Grundschutz/Lektion_7_Risikoanalyse/Lektion_7_07/Lektion_7_07_node.html)

[![Risikobewertung](https://www.bsi.bund.de/SharedDocs/Bilder/DE/BSI/Themen/grundschutzdeutsch/Webkurs2018/Abb_7_07_Risikomatrix.png?__blob=normal&v=1)](https://www.bsi.bund.de/DE/Themen/Unternehmen-und-Organisationen/Standards-und-Zertifizierung/IT-Grundschutz/Zertifizierte-Informationssicherheit/IT-Grundschutzschulung/Online-Kurs-IT-Grundschutz/Lektion_7_Risikoanalyse/Lektion_7_07/Lektion_7_07_node.html)

### [Risiken behandeln](https://www.bsi.bund.de/DE/Themen/Unternehmen-und-Organisationen/Standards-und-Zertifizierung/IT-Grundschutz/Zertifizierte-Informationssicherheit/IT-Grundschutzschulung/Online-Kurs-IT-Grundschutz/Lektion_7_Risikoanalyse/Lektion_7_09/Lektion_7_09_node.html)

[![Risikobehandlung](https://www.bsi.bund.de/SharedDocs/Bilder/DE/BSI/Themen/grundschutzdeutsch/Webkurs2018/Abb_7_09_RisikenBehandeln.png?__blob=normal&v=1)](https://www.bsi.bund.de/DE/Themen/Unternehmen-und-Organisationen/Standards-und-Zertifizierung/IT-Grundschutz/Zertifizierte-Informationssicherheit/IT-Grundschutzschulung/Online-Kurs-IT-Grundschutz/Lektion_7_Risikoanalyse/Lektion_7_09/Lektion_7_09_node.html)

### nächste Schritte:

#### [Konsolidierung des Sicherheitskonzepts](https://www.bsi.bund.de/DE/Themen/Unternehmen-und-Organisationen/Standards-und-Zertifizierung/IT-Grundschutz/Zertifizierte-Informationssicherheit/IT-Grundschutzschulung/Online-Kurs-IT-Grundschutz/Lektion_8_Umsetzungsplanung/Lektion_8_01/Lektion_8_01_node.html)

#### [Umsetzungsplanung](https://www.bsi.bund.de/DE/Themen/Unternehmen-und-Organisationen/Standards-und-Zertifizierung/IT-Grundschutz/Zertifizierte-Informationssicherheit/IT-Grundschutzschulung/Online-Kurs-IT-Grundschutz/Lektion_8_Umsetzungsplanung/Lektion_8_node.html)

#### [Fortführung des Sicherheitsprozesses](https://www.bsi.bund.de/DE/Themen/Unternehmen-und-Organisationen/Standards-und-Zertifizierung/IT-Grundschutz/Zertifizierte-Informationssicherheit/IT-Grundschutzschulung/Online-Kurs-IT-Grundschutz/Lektion_7_Risikoanalyse/Lektion_7_10/Lektion_7_10_node.html)

## Schwachstellenanalyse

1. IST-Analyse

2. Vergleich mit Soll-Zustand

3. Risikobewertung 

=> potenzielle Bedrohung
