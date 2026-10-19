# Grundlagen

## TOM

-> [14 „Anforderungen an die Sicherheit der Datenverarbeitung“ nach § 64 BDSG](https://johannesloetzsch.github.io/LF4/tom.html#14-anforderungen-an-die-sicherheit-der-datenverarbeitung-nach--64-bdsg)

### Authentifizierung vs Autorisierung

| Zutritt     | Zugang               | Zugriff            |
| ----------- | -------------------- | ------------------ |
| -> Physisch | -> Authentifizierung | -> Autorisierung   |
| -> Wohin?   | -> Wer?              | -> Berechtigungen? |

> **📝❗** FiSi AP2 Konzeption Sommer 2024 Aufgabe 2
>
> Zuordnungsaufgabe: Schutzmaßnahmen wie **Datenträger verschlüsseln** und Berechtigungskonzept auf Dateiebene den Schutzzielen **Zutritts-, Zugangs- und Zugriffskontrolle** zuordnen

> **💬❓** Welche Maßnahmen zur Authentifizierung und Autorisierung kennen Sie?

-> [Methoden der Authentisierung](https://johannesloetzsch.github.io/LF4/authentifizierung.html#methoden-der-authentisierung) (Authentifizierung)

> **📝❗** FiSi AP2 Analyse Winter 2025 Aufgabe 2 da+db
>
> **Passwortpolicy** und zwei weitere **Authentifizierungsmethoden** (neben Wisse) für MFA


### Verschlüsselung

Nach Einsatzzweck:
- Datei-/Datenträgerverschlüsselung
- Transportverschlüsselung
- Ende-zu-Ende-Verschlüsselung

Nach Verfahren:
- Symmetrisch
- Asymmetrisch
- Hybrid


### Signaturen
> **💬❓** Was wissen Sie zum Thema Signaturen?
> 
> Beschreiben Sie Schutzziel und Funktionsweise.


### Hash-Funktionen
> **💬❓** Was wissen Sie zum Thema Hash-Funktionen?
> 
> Welchen Zweck erfüllen Sie?
>
> In welchem Zusammenhang zu Verschlüsselung stehen Hash-Funktionen?
>
> Welche Anforderungen an kryptografisch starke Hash-Funktionen gibt es?


### Schlüsselaustausch
> **💬❓** Was sind die „großen“ Herausforderungen beim korrekten Einsatz von Kryptographie?
>
> Welche Lösungsansätze kennen Sie?
