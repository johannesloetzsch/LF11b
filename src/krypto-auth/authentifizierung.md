# Authentifizierung

„Wer sind Sie?"

-> **Zugangskontrolle**

> **💡** Der Benutzer weist seine Identität nach (**Authentisierung**); das System prüft diesen Nachweis (**Authentifizierung**). „Authentifizierung" darf als Oberbegriff für den gesamten Vorgang verwendet werden.
>
> (siehe auch [BSI TR-03187, Abschnitt 2.1 „Definitionen"](https://www.bsi.bund.de/SharedDocs/Downloads/DE/BSI/Publikationen/TechnischeRichtlinien/TR03187/BSI-TR-03187.pdf?__blob=publicationFile&v=4))

## Faktoren

Die Authentisierung kann auf drei Wegen erfolgen:

* **Wissen**: PIN, Passwort, Passphrase, …
* **Besitz**: Schlüssel, Smartcard, Hardware Security Token, …
* **Sein**: biometrische Merkmale (Fingerabdruck, Iris, Stimme, …)

### 2FA & MFA

> **💬❓** Was muss bei der Umsetzung von Multi-Faktor-Authentisierung beachtet werden?
>
> Was sind unabhängige Faktoren?


## Wissen

### Passwörter / Passphrases

#### Passwortrichtlinien

> **📝❗** FiSi AP2 Analyse Winter 2025 Aufgabe 2 da
>
> **Passwort-Policy**

* Großer Zeichenvorrat (klein+groß+nummern+sonderzeichen) -> viel Zufall
* Passwortlänge
* Keine Wörterbuchwörter
* Kein persönlicher Bezug (Name, Benutzername, Geburtsdatum)
* Unterschiedliche Passwörter für verschiedene Zugänge
* Keine Wiederverwendung / Ableitung ehemaliger Passwörter

> [**💡** **Hinweise zum Umgang mit Passwörtern** des Landesbeauftragten für Datenschutz und Informationsfreiheit Baden-Württemberg](https://www.baden-wuerttemberg.datenschutz.de/hinweise-zum-umgang-mit-passwoertern/)

> [**💡** BSI-Empfehlungen](https://www.bsi.bund.de/DE/Themen/Verbraucherinnen-und-Verbraucher/Informationen-und-Empfehlungen/Cyber-Sicherheitsempfehlungen/Accountschutz/Sichere-Passwoerter-erstellen/sichere-passwoerter-erstellen_node.html)


#### Passwortmanager

-> Zwingend erforderlich!

Wie will man sonst Passwort-Policies für viele Dienste umsetzen?

> **💬❓** Welchen Schutzbedarf sehen wir für unsere Passwortmanager?
>
> Welche Lösungen können die Anforderungen erfüllen?


### PIN & Fehlbedienungszähler

> **❓** Unter welchen Bedingungen kann eine kurze PIN zur Authentifizierung eingesetzt werden?

> **❓** Was ist ein Fehlbedienungszähler?

#### …Realität…

> [**💡💬** Die häufigsten 4-stelligen PIN-Codes](https://informationisbeautiful.net/visualizations/most-common-pin-codes/)

![](https://infobeautiful4.s3.amazonaws.com/2021/03/IIB-Pin-Numbers-1276@2x-1.png)


## Besitz

Für Besitzfaktoren sollte möglichst [**Challenge-Response**](https://de.wikipedia.org/wiki/Challenge-Response-Authentifizierung) auf Basis von **Schlüsseln** eingesetzt werden. Der Schlüssel sollte **nicht kopierbar** sein — also nicht als bloße Datei, sondern in einem dafür vorgesehenen System (**Hardware Security Token, Smartcard, TPM**) gespeichert werden. Als zweiter Faktor bietet sich eine Passphrase (Wissen) an, die den Zugriff auf den Schlüssel schützt.

### Hardware- und Plattformstandards

- **FIDO2-Authenticator** — nicht exportierbarer Schlüssel, Domain-Bindung, dafür gebaut.
- **TPM 2.0** — Schlüssel im Chip, optional an PCRs/Systemzustand gebunden.
- **Secure Enclave / Android Keystore** — Plattform-Keystore, Basis für Passkeys.
- **PIV** — Smartcard-Profil mit PIN, bewährt im Behördenumfeld.
- **OpenPGP Card** — Smartcard für GPG, Nische, älter.

### Schlüssel und Schnittstellen

- **SSH-Key** — privater Schlüssel im Token/TPM ist ein starker Besitzfaktor; als Datei kopierbar und nur durch eine Passphrase geschützt.
- **PKCS#11** — API für Schlüssel in HSM und Smartcard; ob sie exportierbar sind, bestimmt das Token.

### Credential-Protokolle

- **FIDO2 / WebAuthn** — Challenge-Response pro Domain, phishing-resistent.
- **Passkeys** — FIDO2-Credential im Plattform-Authenticator, modern und benutzerfreundlich.
- **TOTP** — zeitbasiertes OTP, weit verbreitet, aber phishbar.
- **HOTP** — zählerbasiertes OTP, älter; kann desynchronisieren.
- **OCRA** — challenge-basiertes OTP, vor allem im Banking.
- **U2F** — Vorgänger von FIDO2, nur Challenge-Response, ohne Passkey-Sync.


## Biometrie

> **❓** Welche Nachteile haben biometrische Merkmale zur Authentifizierung?


## SSO

### Ziele

- Ein **Login für viele Dienste**: weniger Passwörter und weniger Reset-Aufwand.
- Zentrale Policy: MFA, Sperren und Rollen an einer Stelle durchsetzen.
- Schnelles Onboarding/Offboarding: ein Konto statt vieler Einzelkonten.
- Einheitliche Identität und Protokollierung über Anwendungen hinweg.

### Herausforderungen

- Der IdP ist Single Point of Failure und attraktives Angriffsziel.
- Zentrales Abmelden (Single Logout) ist über verschiedene Protokolle schwer.
- Kurze, gebundene und widerrufbare Tokens sind aufwendig; gestohlene Tokens bleiben sonst gültig.
- Ein **kompromittiertes Konto öffnet viele Dienste**; MFA/FIDO2 und Monitoring sind Pflicht.
- Attribute sammeln Nutzungsdaten beim IdP; Datenschutz und Zweckbindung beachten.

### Protokolle

- **OpenID Connect** — Identitätsschicht auf OAuth 2.0
  - das ID Token (JWT) meldet die Identität
  - Häufige Fehlannahme: OAuth2 authentifiziert nicht — dafür ist OIDC da
  - typisch für Web- und App-SSO
- **SAML 2.0** — XML-basiertes SSO zwischen Identity Provider und Service Provider; Assertions tragen Authentifizierung und Attribute
- **Kerberos** — ticketbasiertes SSO in Active Directory; authentifiziert den Nutzer, die Autorisierung prüft der Dienst selbst
