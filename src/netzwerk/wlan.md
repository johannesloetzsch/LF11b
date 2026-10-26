# WLAN

## WLAN-Grundlagen

- **Wireless Local Area Network (WLAN)** auf Basis von **IEEE 802.11**
- **Service Set Identifier (SSID)** = Netzname
  - **SSID-Broadcast** dient der Auffindbarkeit
  - **Hidden SSID** -> SSID wird nicht im Beacon ausgesendet; Clients müssen sie manuell eintragen, kein Sicherheitsgewinn
- **Access Point (AP)**
  - **Basic Service Set (BSS)** = eine Funkzelle
  - **Basic Service Set Identifier (BSSID)** = MAC-Adresse des AP
- **Extended Service Set (ESS)** = mehrere APs mit gleicher SSID und Roaming
- **WLAN-Scan** zeigt SSID, BSSID, Kanal, Bandbreite, Sicherheitsverfahren und Signalstärke
- **Power over Ethernet (PoE)**

Frequenzen:
- **2,4 GHz** -> größere Reichweite, typisch überschneidungsfreie Kanäle 1/6/11
- **5 GHz** -> mehr Kanäle, kürzere Reichweite
- **6 GHz** -> optionale Erweiterung für neuere Geräte


> **📝❗** FiSi AP2 Analyse Sommer 2022 Aufgabe 2 aa
>
> **WLAN-Planung**: drei technische Aspekte für das WLAN-Konzept nennen

> **📝❗** FiSi AP2 Analyse Sommer 2025 Aufgabe 4 aa
>
> **SSID-Broadcast**: Funktionsweise und Zweck beschreiben

> **📝❗** FiSi AP2 Analyse Sommer 2024 Aufgabe 4 ca
>
> **WLAN-Scan**: drei der sechs Begriffe **SSID**, **BSSID**, **Channel**, **BW** (MHz), **Security** und **Signal** erläutern

> **📝❗** FiSi AP2 Analyse Sommer 2024 Aufgabe 4 cc
>
> **Hidden SSID**: Grund für die Markierung „`<hidden>`“ erläutern


## WLAN-Sicherheit

- **Wired Equivalent Privacy (WEP)** und **Temporal Key Integrity Protocol (TKIP)** sind veraltet.
- **Wi-Fi Protected Access (WPA)** ist die Sicherheitsfamilie
  - **WPA2 Personal** nutzt einen gemeinsamen **Pre-Shared Key (PSK)**, bietet keine individuellen Konten und keinen zentralen Widerruf
  - **WPA2 Enterprise** nutzt **IEEE 802.1X** und **RADIUS** mit individuellen Zugangsdaten
  - **WPA3** nutzt **Simultaneous Authentication of Equals (SAE)** und schützt besser gegen Offline-Angriffe

> **📝❗** FiSi AP2 Analyse Sommer 2025 Aufgabe 4 ab
>
> **Authentifizierung** und **Vertraulichkeit** in Bezug auf die WLAN-Verbindung erläutern

> **📝❗** FiSi AP2 Analyse Sommer 2025 Aufgabe 4 ac
>
> **WPA (1/2/3)**: je ein Beispiel für Authentifizierung und Verschlüsselung nennen

> **📝❗** FiSi AP2 Analyse Sommer 2024 Aufgabe 4 aa
>
> **WPA2 Personal**: drei Nachteile nennen

> **📝❗** FiSi AP2 Analyse Sommer 2024 Aufgabe 4 ab
>
> **WPA2 Personal absichern**: eine Möglichkeit zur Verbesserung erläutern


## RADIUS und AAA

- **Remote Authentication Dial-In User Service (RADIUS)**
  - RADIUS prüft zentral Benutzer/Geräte, erteilt Rechte und protokolliert Zugriffe
- **Authentication, Authorization, Accounting (AAA)** = Authentifizierung, Autorisierung, Abrechnung (Protokollierung)
- Vorteile gegenüber Pre-Shared Key (PSK): **individuelle Konten, zentrale Sperrung**, Nachvollziehbarkeit sowie Zuweisung von **VLAN** und Richtlinien
- **IEEE 802.1X** ist der Rahmen für die portbasierte Zugangskontrolle
  - **Extensible Authentication Protocol (EAP)** das darin transportierte Authentifizierungsverfahren

> **📝❗** FiSi AP2 Analyse Sommer 2022 Aufgabe 2 ab
>
> **RADIUS (AAA)**: die drei A ausschreiben und die drei Komponenten erläutern

> **📝❗** FiSi AP2 Analyse Sommer 2022 Aufgabe 2 ac
>
> **RADIUS AAA vs. PSK**: zwei Vorteile von RADIUS AAA gegenüber PSK beschreiben


## Gast-WLAN und Netztrennung

- Ziel: Gäste vom internen Netz trennen; **Client Isolation**, Zeit-, Bandbreiten- und Gerätebegrenzung
- Maßnahmen:
  - eigene **SSID**, eigenes **VLAN** und eigenes IP-**Subnetz**
  - Firewall separat nötig
  - **Captive Portal/Voucher**

> **📝❗** FiSi AP2 Analyse Sommer 2022 Aufgabe 2 ad
>
> **Gast-WLAN**: eigene SSID, eigener IP-Adressbereich und Captive-Portal (Voucher) begründen

> **📝❗** FiSi AP2 Analyse Sommer 2024 Aufgabe 4 ba
>
> **Separates WLAN** für persönliche mobile Endgeräte von Mitarbeitenden und Gast-Endgeräte: drei Beispiele nennen

> **📝❗** FiSi AP2 Analyse Sommer 2024 Aufgabe 4 da
>
> **WLAN-Voucher-System** mit Zugangsportal: Funktionsweise erläutern

> **📝❗** FiSi AP2 Analyse Sommer 2024 Aufgabe 4 db
>
> **Voucher-System**: drei weitere Möglichkeiten des Gastgebers nennen


## Fehlersuche und Performance

- **SSID**, **Sicherheitseinstellungen**, **DHCP** und Roaming prüfen
- **Signalstärke**, **Kanalüberlappung/Interferenzen**, **Kanalbreite**, Anzahl Endgeräte und Altgeräte prüfen
  - insbesondere bei 2,4-GHz
  - Breite Kanäle erhöhen den Durchsatz, aber auch die Störanfälligkeit

> **📝❗** FiSi AP2 Analyse Sommer 2024 Aufgabe 4 cb
>
> **Mögliche Performanceprobleme**: einen Grund anhand der WLAN-Scan-Ausgabe nennen

> **📝❗** FiSi AP2 Analyse Sommer 2024 Aufgabe 4 bb
>
> **2,4-GHz-WLAN**: zwei mögliche Ursachen nennen, warum sich die Kameras nach neuen Accesspoints nicht mehr verbinden
