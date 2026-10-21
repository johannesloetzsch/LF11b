# Schutzbedarfsanalyse

-> [Vorgehen siehe LF4](https://johannesloetzsch.github.io/LF4/schutzbedarfsanalyse.html)

## Beispiel: „SSO Homeserver“

### Ausgangslage

Sie betreiben im eigenen Haushalt einen Homeserver. **Authentik** ist der zentrale **OIDC-Provider** für **Nextcloud** mit Familienfotos und gemeinsamen Dokumenten, ein **Wiki** mit Haushaltswissen und einen **Medienserver**. Nutzer sind Sie als Administrator sowie **3–5 enge Familienangehörige oder Mitbewohner**; keine Freunde oder Gäste. Der Server ist **nur im LAN und über VPN** erreichbar, nicht öffentlich aus dem Internet. Smart-Home- oder Safety-Systeme hängen nicht daran. Der Admin-Zugang ist mit MFA geschützt, Backups sind vorhanden.

### Zielobjekt

Authentik-Instanz einschließlich Admin-Konten, Benutzerdatenbank, OIDC-Client-Secrets, Signaturschlüssel und Sessions.

### Schadensfall

Ein Angreifer erlangt Admin-Zugriff oder erbeutet Signaturschlüssel beziehungsweise Client-Secrets. Dann kann er Tokens für beliebige Nutzer ausstellen oder sich als Nutzer ausgeben. Alternativ fällt Authentik aus; dann sind keine neuen SSO-Anmeldungen möglich.

### Aufgabenstellung

Bewerten Sie den Schutzbedarf des Zielobjekts für die Schutzziele **Vertraulichkeit (C)**, **Integrität (I)** und **Verfügbarkeit (A)**.

Gehen Sie dabei so vor:

1. Betrachten Sie die sechs Schadensszenarien aus der Maßstabstabelle.
2. Wählen Sie für jedes Schadensszenario und jedes Schutzziel eine Kategorie: **normal**, **hoch** oder **sehr hoch**.
3. Begründen Sie jede Einstufung mit der möglichen Schadenswirkung auf das Zielobjekt.
4. Ermitteln Sie anschließend den Gesamtschutzbedarf je Schutzziel nach dem **Maximumprinzip**.

> **Hinweis:** Der Schutzbedarf beschreibt die mögliche Schadenshöhe, nicht die Eintrittswahrscheinlichkeit. Es gibt nicht die eine richtige Lösung; entscheidend ist eine nachvollziehbare Begründung.

### Maßstab: Schutzbedarfskategorien

| Schadensszenario | Normaler Schutzbedarf | Hoher Schutzbedarf | Sehr hoher Schutzbedarf |
|---|---|---|---|
| Beeinträchtigung der persönlichen Unversehrtheit | keine Beeinträchtigung | nicht stark oder dauerhaft | stark oder dauerhaft |
| Verstoß gegen Gesetze, Vorschriften oder Verträge | geringfügige Strafen | schwerwiegende oder hohe Strafen | existenzbedrohende Strafen |
| Beeinträchtigung des informationellen Selbstbestimmungsrechts | geringfügige oder tolerable Auswirkungen | Beeinträchtigung, aber ohne dauerhafte Folgen | starke oder dauerhafte Beeinträchtigung |
| Beeinträchtigung der Aufgabenerfüllung | allenfalls unerheblich | erhebliche Beeinträchtigung; Ausfallzeiten über 24 Stunden nicht tolerierbar | starke Beeinträchtigung; Ausfallzeiten über 2 Stunden nicht tolerierbar |
| Negative Innen- oder Außenwirkung | kein Ansehensverlust bei Kunden und Geschäftspartnern | Ansehen wird erheblich beeinträchtigt | Ansehen wird grundlegend und nachhaltig beschädigt |
| Finanzielle Auswirkungen | geringfügig | schwerwiegend oder hoch | existenzbedrohend |

### Vorlage

| Schadensszenario | Vertraulichkeit (C) | Integrität (I) | Verfügbarkeit (A) |
|---|---|---|---|
| Beeinträchtigung der persönlichen Unversehrtheit |  |  |  |
| Verstoß gegen Gesetze, Vorschriften oder Verträge |  |  |  |
| Beeinträchtigung des informationellen Selbstbestimmungsrechts |  |  |  |
| Beeinträchtigung der Aufgabenerfüllung |  |  |  |
| Negative Innen- oder Außenwirkung |  |  |  |
| Finanzielle Auswirkungen |  |  |  |
| **Gesamt nach Maximumprinzip** |  |  |  |

### Musterlösung

<details>
<summary>Musterlösung anzeigen</summary>


| Schadensszenario | C – Vertraulichkeit | I – Integrität | A – Verfügbarkeit |
|---|---|---|---|
| Beeinträchtigung der persönlichen Unversehrtheit | **normal** — private IT-Dienste, keine Safety-Systeme. | **normal** — keine unmittelbare körperliche Wirkung. | **normal** — Ausfall gefährdet keine Personen. |
| Verstoß gegen Gesetze, Vorschriften oder Verträge | **normal** — reine Haushaltsnutzung, keine geschäftlichen Verträge; Datenschutz bleibt zu beachten. | **normal** — keine vertraglichen oder geschäftlichen Integritätspflichten. | **normal** — Ausfall verletzt keine gesetzliche Pflicht. |
| Beeinträchtigung des informationellen Selbstbestimmungsrechts | **hoch** — Zugriff auf Familienfotos, Dokumente und Kommunikationsdaten; erheblich, aber begrenzter Nutzerkreis. | **hoch** — Identitäten und Daten können manipuliert werden; Betroffene verlieren die Kontrolle. | **normal** — Nichtverfügbarkeit verändert keine Daten. |
| Beeinträchtigung der Aufgabenerfüllung | **hoch** — Sperrung und Neuaufbau von Authentik stören alle verbundenen Dienste. | **hoch** — gefälschte Identitäten machen Aktionen in allen Diensten unzuverlässig. | **hoch** — keine neuen SSO-Anmeldungen; bestehende Sitzungen laufen eventuell weiter. |
| Negative Innen- oder Außenwirkung | **normal** — kein öffentlicher oder geschäftlicher Ruf betroffen. | **normal** — Vertrauensverlust bleibt im privaten Haushalt. | **normal** — private Störung ohne Außenwirkung. |
| Finanzielle Auswirkungen | **normal** — Wiederherstellung kostet Zeit und eventuell Hardware, aber nicht existenzbedrohend. | **normal** — Neuaufsetzen und Neukonfiguration, aber keine geschäftlichen Folgekosten. | **normal** — Ausfall verursacht keinen nennenswerten finanziellen Schaden. |
| **Gesamt nach Maximumprinzip** | **hoch** | **hoch** | **hoch** |

#### Anmerkungen zur Beurteilung

Durch den privaten Haushalt sinken Recht, Reputation und Finanzen auf „normal“. Wegen der zentralen Identitäts- und Zugriffsfunktion bleiben C, I und A insgesamt bei „hoch“. „Sehr hoch“ wäre erst bei existenzbedrohenden Folgen, öffentlicher Vertrauensstellung oder sensiblen Identitätsdokumenten gerechtfertigt.

MFA und Backups senken die Eintrittswahrscheinlichkeit und verbessern die Wiederherstellung, ändern aber nicht automatisch den Schutzbedarf.

#### Interpretation

Eine **Risikoanalyse** ist **erforderlich**, da das Zielobjekt nach dem Maximumsprinzip in mindestens einem Schutzziel als hoch eingeschätzt wurde.

</details>
