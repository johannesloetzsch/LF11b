# Plan

## Zeitplan

```mermaid
gantt
    title LF11b Stunden
    dateFormat YYYY-MM-DD
    axisFormat %d.%m.%Y
    section 06.10. – 08.10.
        IT-Grundschutz : 2026-10-06, 3d
    section 19.10. – 23.10.
        Crypto & Auth : 2026-10-19, 5d
    section 26.10. – 29.10.
        Netzwerksicherheit : 2026-10-26, 4d
    section 30.11. – 02.12.
        Praxis : 2026-11-30, 3d
```

### KW 41: Grundlagen Datenschutz und Datensicherheit

06.10.:
* Einordnung [Datenschutz und Datensicherheit](https://johannesloetzsch.github.io/LF4/dud.html)
* Datenschutzrecht
  * [Gesetze](https://johannesloetzsch.github.io/LF4/datenschutz.html)
    * DSGVO, BDSG, …
  * [Prinzipien](https://johannesloetzsch.github.io/LF4/datenschutz_prinzipien.html)
    * Verbot mit Erlaubnisvorbehalt
    * Grundsätze für die Verarbeitung personenbezogener Daten
    * Betroffenenrechte
    * Verarbeitung besonderer Kategorien personenbezogener Daten
    * Melde-/Benachrichtigungspflichten
  * [Verantwortlichkeiten](https://johannesloetzsch.github.io/LF4/datenschutz_verantwortlichkeiten.html)
  * [Datensparsamkeit](https://johannesloetzsch.github.io/LF4/datensparsamkeit.html)
* [Datensicherheit](https://johannesloetzsch.github.io/LF4/datensicherheit.html)

* [IT-Grundschutz-Methodik](https://johannesloetzsch.github.io/LF4/grundschutz.html)
  * Basis-, Kern-, Standardabsicherung

07.10.:
* [IT-Sicherheitsmanagement](https://johannesloetzsch.github.io/LF4/ism.html)
* [Gefährdungen](https://johannesloetzsch.github.io/LF4/gef%C3%A4hrungen.html#gef%C3%A4hrdungen-mit-besonderer-relevanz-f%C3%BCr-die-ihk-pr%C3%BCfung)
  * DoS
  * Phishing
  * Arten von Malware: Würmer, Trojaner, Ransomware
* [Vulnerability -> Exploit](https://johannesloetzsch.github.io/LF4/vulnerabilities.html)
* [Schutzbedarfsanalyse](https://johannesloetzsch.github.io/LF4/schutzbedarfsanalyse.html)
> Interaktive Übung zu Strukturanalyse und Schutzbedarfsfeststellung am Beispiel „Mail“

08.10.:
* [IT-Grundschutz-Methodik](https://johannesloetzsch.github.io/LF4/grundschutz.html)
  * [Ablauf Standard-Absicherung](https://johannesloetzsch.github.io/LF4/grundschutz_methodik.html)
  * Wiederholung [Schutzbedarfsanalyse](https://johannesloetzsch.github.io/LF4/schutzbedarfsanalyse.html)

* [IT-Grundschutz-Check](https://johannesloetzsch.github.io/LF4/grundschutz_check.html)
* [Grundlagen TOM](https://johannesloetzsch.github.io/LF4/tom.html)
  * [Endgerätesicherheit](https://johannesloetzsch.github.io/LF4/endger%C3%A4tesicherheit.html)
* [Ablauf Standard-Absicherung](https://johannesloetzsch.github.io/LF4/grundschutz_methodik.html)
  * [Risikoanalyse](https://johannesloetzsch.github.io/LF4/risikoanalyse.html)
> Gruppenarbeit "Risikoanalyse" -> IT-Grundschutz (vereinfacht) mittels [Vorlage für Praxisprojekt](../material/projektarbeit_lf11b.pdf) an eigenem Beispiel


### KW43: Crypto & Auth 

```mermaid
gantt
    title LF11b Stunden KW43
    dateFormat YYYY-MM-DD
    axisFormat %d.%m.
    section Mo 19.10. (6 UE)
        Grundlagen TOM : 2026-10-19, 6h
    section Di 20.10. (6 UE)
        Verschlüsselung+Signaturen : 2026-10-20, 6h
    section Mi 21.10. (6 UE)
        Authentifizierung+Authorisierung : 2026-10-21, 6h
    section Do 22.10. (6 UE)
        Wiederholung : 2026-10-22, 6h
    section Fr 23.10. (2 + 2 UE)
        1. Klassenarbeit : crit, 26_10_23_ue56, 2026-10-23, 2h
        SOL : after 26_10_23_ue56, 2h
        Nachhilfe Ansible : after 26_10_23_ue56, 2h
```

19.10.:
* Überleitung vom [Datenschutzrecht](https://johannesloetzsch.github.io/LF4/datenschutz.html) und organisatorischen Maßnahmen zu [TOM](https://johannesloetzsch.github.io/LF4/tom.html)
* Wiederholung Krypto-Grundlagen
  * symmetrische vs. asymmetrische [Kryptographie](https://johannesloetzsch.github.io/LF4/kryptographie.html)
  * Hashes
* Überblick [Authentifizierung](https://johannesloetzsch.github.io/LF4/authentifizierung.html)
  * Passwörter, 2FA/MFA
  * ACL
* Ausblick: Schlüsselaustausch-Problem
> Praxis: `/etc/shadow`, `chmod`, SSH-Keys

20.10.:
* [Verschlüsselung](https://johannesloetzsch.github.io/LF4/kryptographie.html) unterscheiden: Datenträger-, Transport-, Ende-zu-Ende
* [Hybride Verschlüsselung](https://johannesloetzsch.github.io/LF4/kryptographie.html)
* [Signaturen](https://johannesloetzsch.github.io/LF4/kryptographie.html) und Schlüsselaustausch
  * PKI vs. Web-of-Trust
  * CA, X.509 → [SSL/TLS](https://johannesloetzsch.github.io/LF4/tls.html)
> Praxis: PGP/GPG

21.10.:
* [Authentifizierung](https://johannesloetzsch.github.io/LF4/authentifizierung.html) und Autorisierung
  * relevante TOMs raussuchen, unterscheiden, erklären
* [Passwörter](https://johannesloetzsch.github.io/LF4/passwoerter.html)
* [Dateiberechtigungen (ACL)](https://johannesloetzsch.github.io/LF4/dateiberechtigungen.html)
* [SSO](https://johannesloetzsch.github.io/LF4/sso.html), OAuth2, OIDC, SAML
> Praxis: [FastAPI-Security](https://fastapi.tiangolo.com/tutorial/security/first-steps/), Keycloak/Authentik/Authelia

22.10.:
* Wiederholung
  * [Datenschutz & Datensicherheit](https://johannesloetzsch.github.io/LF4/dud.html)
  * [IT-Grundschutz](https://johannesloetzsch.github.io/LF4/grundschutz.html)
  * TOM aus [Endgerätesicherheit](https://johannesloetzsch.github.io/LF4/endger%C3%A4tesicherheit.html) und SYS.2.1 „Allgemeiner Client“

23.10.:
* Klassenarbeit (2 UE)
* SOL: Prüfungsaufgaben

### KW44: Netzwerksicherheit

```mermaid
gantt
    title LF11b Stunden KW44
    dateFormat YYYY-MM-DD
    axisFormat %d.%m.
    section Mo 26.10. (6 UE)
        Firewall : 2026-10-26, 6h
    section Di 27.10. (6 UE)
        VLAN : 2026-10-27, 6h
    section Mi 28.10. (6 UE)
        VPN : 2026-10-28, 6h
    section Do 29.10. (3 UE)
        2. Klassenarbeit : crit, 2026_10_29_ka, 2026-10-29, 2h
        Ausblick Praxisprojekt : after 2026_10_29_ka, 1h
```

26.10.:
* Wiederholung Routing
  * NAT
* Firewalls
  * Whitelist-/Blacklist-Strategie
  * Paketfilter, SPI, Application-Layer → NGFW, WAF
* DMZ

27.10.:
* VLAN
  * Traffic-Trennung, Verkleinerung der Broadcast-Domäne
  * L3-Switching, Router-on-a-stick, IEEE 802.1Q
  * VLAN-Hopping

28.10.:
* [VPN](https://johannesloetzsch.github.io/LF4/vpn.html)
  * TUN/TAP, WireGuard, OpenVPN, IPSec, VXLAN
* Zero Trust
* Wiederholung
  * WLAN

29.10.:
* Klassenarbeit (2 UE): Gesamtstoff, Schwerpunkt Netzwerksicherheit
* Ausblick Praxisprojekt
  * MITM-Proxy, nmap, tcpdump, Wireshark, OpenVAS, SIEM
  * CTF, Hackerethik, [202c StGB](https://www.gesetze-im-internet.de/stgb/__202c.html)
