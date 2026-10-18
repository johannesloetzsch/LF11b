# Crypto &amp; Auth

Der Unterrichtsblock "Crypto & Auth" beinhaltet die folgenden Themenkomplexe:

## Grundlagen
<!-- Wiederholung aus LF4 und ZQL -->

* Überleitung vom [Datenschutzrecht](https://johannesloetzsch.github.io/LF4/datenschutz.html) und organisatorischen Maßnahmen zu [TOM](https://johannesloetzsch.github.io/LF4/tom.html)
* Wiederholung Krypto-Grundlagen
  * symmetrische vs. asymmetrische [Kryptographie](https://johannesloetzsch.github.io/LF4/kryptographie.html)
  * Hashes
* Überblick [Authentifizierung](https://johannesloetzsch.github.io/LF4/authentifizierung.html)
  * Passwörter, 2FA/MFA
  * ACL
* Ausblick: Schlüsselaustausch-Problem

> **💻** Praxis: `/etc/shadow`, `chmod`, SSH-Keys

> **📝❗** FiSi AP2 Konzeption Sommer 2024 Aufgabe 2
>
> Zuordnungsaufgabe: Schutzmaßnahmen wie **Datenträger verschlüsseln** und Berechtigungskonzept auf Dateiebene den Schutzzielen **Zutritts-, Zugangs- und Zugriffskontrolle** zuordnen

> **📝❗** FiSi AP2 Konzeption Sommer 2022 Aufgabe 3
>
> Kamera-Vergleichstabelle: Verschlüsselungsmethode (**WEP, WPA, WPA2, WPA3**) und **passwortgeschützter Zugriff** als Auswahlkriterium


## Verschlüsselung und Signaturen

* [Verschlüsselung](https://johannesloetzsch.github.io/LF4/kryptographie.html) unterscheiden: Datenträger-, Transport-, Ende-zu-Ende
* [Hybride Verschlüsselung](https://johannesloetzsch.github.io/LF4/kryptographie.html)
* [Signaturen](https://johannesloetzsch.github.io/LF4/kryptographie.html) und Schlüsselaustausch
  * PKI vs. Web-of-Trust
  * CA, X.509 → [SSL/TLS](https://johannesloetzsch.github.io/LF4/tls.html)

> **💻** Praxis: PGP/GPG

> **💻** Praxisprojekt: TLS

> **📝❗** FiSi AP2 Analyse Sommer 2024 Aufgabe 2 ca–cc
>
> Mailclient per Telnet-Analyse konfigurieren: Protokoll, Verbindungssicherheit (**STARTTLS vs. SSL/TLS**) und **Authentifizierungsmethode** wählen

> **📝❗** FiSi AP2 Konzeption Winter 2024 Aufgabe 2 d
>
> **X.509-Personalzertifikate**: zwei Eigenschaften nennen; **Signierung und Verschlüsselung von Mails** gemäß Unternehmensregelung

> **📝❗** FiSi AP2 Analyse Sommer 2022 Aufgabe 3
>
> Browser-Fehler **ERR_CERT_AUTHORITY_INVALID**: Das Serverzertifikat gilt nicht als vertrauenswürdig — Ursache und Behebung

> **📝❗** FiSi AP2 Analyse Winter 2024 Aufgabe 4
>
> **SSL/TLS-Inspection** an der NGFW: Man-in-the-Middle-Mechanik, Vor- und Nachteile, rechtliche Maßnahme, **Intermediat-CA** und Behebung der Browser-Fehler **SEC_ERROR_UNKNOWN_ISSUER** und **BEHAVIOR_CHANGED**

> **📝❗** FiSi AP2 Analyse Sommer 2025 Aufgabe 3 b
>
> VPN-Produktentscheidung: **X.509-Zertifikate** für gegenseitige Authentifizierung versus hinterlegte Public-Keys; Relevanz hardware-unterstützter **Krypto-Algorithmen**


## Authentifizierung und Authorisierung
* [Authentifizierung](https://johannesloetzsch.github.io/LF4/authentifizierung.html) und Autorisierung
  * relevante TOMs raussuchen, unterscheiden, erklären
* [Passwörter](https://johannesloetzsch.github.io/LF4/passwoerter.html)
* [Dateiberechtigungen (ACL)](https://johannesloetzsch.github.io/LF4/dateiberechtigungen.html)
* [SSO](https://johannesloetzsch.github.io/LF4/sso.html)
  * OAuth2, OIDC, SAML
  * RADIUS

> **💻** Praxis: [FastAPI-Security](https://fastapi.tiangolo.com/tutorial/security/first-steps/), Keycloak/Authentik/Authelia

> **📝❗** FiSi AP2 Analyse Winter 2025 Aufgabe 2 da–db
>
> **Passwort-Policy** der VPN-Nutzer um zwei Regeln für sicherere Passwörter ergänzen; **Multi-Faktor-Authentifizierung**: zwei weitere **Methoden neben Passwort**

> **📝❗** FiSi AP2 Analyse Sommer 2022 Aufgabe 2 ab–ac
>
> RADIUS (**AAA**) versus **PSK** am WLAN-Controller: Bedeutung der drei A-Komponenten und zwei Vorteile von RADIUS AAA

> **📝❗** FiSi AP2 Analyse Sommer 2024 Aufgabe 4 aa–ab
>
> **WPA2-Personal** im Unternehmens-WLAN: drei Nachteile dieser Verschlüsselungsmethode und eine Möglichkeit zur Verbesserung

> **📝❗** FiSi AP2 Analyse Sommer 2025 Aufgabe 4 ab–ac
>
> IoT-WLAN: Begriffe Authentifizierung und Vertraulichkeit erklärt, je ein Beispiel wie **WPA 1/2/3** sie realisieren

## Wiederholung

<!-- Übergang zu Netzwerksicherheit -->
> **📝❗** FiSi AP2 Konzeption Sommer 2025 Aufgabe 2 f
>
> Passwort- und Benutzersicherheit als **Testbereich eines Sicherheits-Dienstleisters im Zero-Trust-Kontext**
