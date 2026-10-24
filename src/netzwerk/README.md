# Netzwerksicherheit

Der Unterrichtsblock "Netzwerksicherheit" beinhaltet die folgenden Themenkomplexe:

## Routing, NAT, Firewall und DMZ

* Wiederholung Routing
  * NAT
* Firewalls
  * Whitelist-/Blacklist-Strategie
  * Paketfilter, SPI, Application-Layer → NGFW, WAF
* DMZ: Pufferzone zwischen Internet und internem Netz

> **📝❗** FiSi AP2 Analyse Sommer 2024 Aufgabe 1 aa
>
> **Routing-Tabelle** am Router vervollständigen: Netze WAN, LAN und DMZ mit Subnetzmaske und **Next-Hop** bzw. Interface ergänzen

> **📝❗** FiSi AP2 Analyse Winter 2024 Aufgabe 2 c (ca–cb)
>
> **Default-Route** am Core-Switch begründen und die notwendige **Route** in die Tabelle eintragen

> **📝❗** FiSi AP2 Analyse Winter 2025 Aufgabe 1 a-c
>
> **Routingtabelle** des Routers in der Zentrale prüfen und für die Kommunikation aller Standorte vervollständigen

> **📝❗** FiSi AP2 Analyse Sommer 2024 Aufgabe 1 b–ba
>
> **DMZ-Server** von außen erreichbar machen: am Router einrichten, was dafür erforderlich ist

> **📝❗** FiSi AP2 Analyse Winter 2024 Aufgabe 2 d
>
> **NAT/PAT** mit einer einzigen öffentlichen IPv4-Adresse: technische Umsetzung, Vor- und Nachteile

> **📝❗** FiSi AP2 Analyse Winter 2025 Aufgabe 1 ba–bd
>
> **NAT/PAT-Prozess**: warum das NAT den Paketinhalt verändert, Tabelle der Abschnitte ergänzen, **Trotz TLS-verschlüsselter** Verbindung, **Portforwarding**

> **📝❗** FiSi AP2 Analyse Sommer 2025 Aufgabe 1 bc
>
> Zwei **Eigenschaften einer DMZ** nennen

> **📝❗** FiSi AP2 Analyse Sommer 2025 Aufgabe 3 aa–ac
>
> **Stateful Packet Inspection** versus Paketfilter unterscheiden, **Firewall-Regeln**-Tabelle vervollständigen, zwei **NGFW**-Vorteile gegenüber klassischem Paketfilter


## Reverse-Proxy

* Reverse-Proxy: Schutz, Anonymisierung, Caching, Loadbalancing

> **📝❗** FiSi AP2 Analyse Sommer 2022 Aufgabe 3 ca–cc
>
> **Reverse-Proxy** anhand von zwei Funktionen für eingehende Anfragen begründen; **DMZ** und Funktionsweise; **Serververteilung** zwischen DMZ und internem Netzwerk


## VLAN

* Traffic-Trennung, Verkleinerung der Broadcast-Domäne
* L3-Switching, Router-on-a-stick, IEEE 802.1Q
* VLAN-Hopping

> **📝❗** FiSi AP2 Analyse Sommer 2022 Aufgabe 2 ba–bb
>
> Zwei **Vorteile von VLANs** beschreiben; die Verbindung zwischen den Switches als **Trunk** (getaggte Verbindung) einrichten

> **📝❗** FiSi AP2 Analyse Winter 2025 Aufgabe 3 aa–bc
>
> Zwei **Gründe für VLANs**; Switchports auf **untagged/tagged** setzen; Konzept **Router-on-a-Stick** bzw. One-armed-Router; 802.1Q-**Subinterfaces**

> **📝❗** FiSi AP2 Analyse Sommer 2025 Aufgabe 1 ac
>
> **Subinterface** am Router: warum je VLAN ein logisches Interface auf der physischen LAN-Schnittstelle angegeben wird und was ein Subinterface ist (**Router-on-a-Stick**)

> **📝❗** FiSi AP2 Analyse Winter 2024 Aufgabe 1 aa–cb
>
> **VLAN-Vorteile**, portbasierte versus dynamische **VLANs**, **802.1Q-Tagging**, **native VLAN** am Trunk und warum es nicht das default VLAN (1) sein sollte, **VLAN-Hopping**


## WLAN

* [WLAN](https://johannesloetzsch.github.io/LF4/wlan.html): SSID, Broadcast, Enterprise

### RADIUS/EAP

* Siehe [Authentifizierung und Authorisierung](../krypto-auth/README.md#authentifizierung-und-authorisierung): RADIUS (AAA), EAP, IEEE 802.1X

> **📝❗** FiSi AP2 Analyse Sommer 2024 Aufgabe 4 ba–cc
>
> WLAN-**Kanalplanung** 2,4 GHz nach Störung durch neue Accesspoints; Begriffe aus dem **WLAN-Scan** (SSID, BSSID, Channel, Security, Signal); **hidden SSID**

> **📝❗** FiSi AP2 Analyse Sommer 2025 Aufgabe 4 aa
>
> **SSID-Broadcast**: Funktion und Zweck des öffentlichen Aussendens der SSID


## VPN

* [VPN](https://johannesloetzsch.github.io/LF4/vpn.html)
  * TUN/TAP, WireGuard, OpenVPN, IPSec, VXLAN

> **📝❗** FiSi AP2 Analyse Winter 2025 Aufgabe 2 aa–c
>
> **VPN-Typ** (Site-to-Site versus Remote-Access) aus dem Netzwerkplan ableiten; zwei **Schutzziele von VPN** mit **IPSec**; Troubleshooting: Nutzer ohne VPN-Zugriff

> **📝❗** FiSi AP2 Analyse Sommer 2022 Aufgabe 1 ca–cc
>
> **VPN**-Fachbegriff und Erläuterung; Laptop-Konfiguration mit ausschließlich **VPN-Traffic** (Volltunnel); Adresspool: wie viele **VPNs** nach **RFC 3021** (=/31) berechnen


## Zero Trust

> **📝❗** FiSi AP2 Konzeption Sommer 2025 Aufgabe 2 e
>
> **Least-Privilege-Prinzip** und **Zero-Trust-Prinzip**: zu jedem Prinzip eine typische Maßnahme

## Wiederholung

> **📝❗** FiSi AP2 Analyse Winter 2024 Aufgabe 1 d
>
> **Switch-Verwaltungszugriff** absichern: vier Einstellungen zum Ermöglichen und Absichern des Zugriffs — separates **Management-VLAN**, **HTTPS/SSH**, starke Passwörter und 2FA, SNMP, Logging, Firmware-Updates


## Ausblick: Testen

* nmap, tcpdump, **Wireshark**
* MITM-Proxy
* OpenVAS, SIEM

> **📝❗** FiSi AP2 Konzeption Sommer 2025 Aufgabe 2 f
>
> Netzwerksicherheit als Testbereich eines Sicherheits-Dienstleisters: **Penetrationstest** durch simulierte Angriffe und **Netzwerksicherheitsprüfung** — offene **Ports** und aktive **Dienste** sowie **Firewall**- und Routerkonfiguration; dazu **Logs** auswerten, **Malware**-Prüfung, Prüfung gemäß **Richtlinien** und simulierte **Social-Engineering-Tests**
