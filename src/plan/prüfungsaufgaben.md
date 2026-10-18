# AP2-Übersicht: Zuordnung zu LF11b-Blöcken

## Legende

| Spalte | Block |
|---|---|
| **bis LF10b** | Stoff aus Vorgänger-LFs (inkl. LF10b), in AP2 vorkommend |
| **DuD** | Datenschutz und Datensicherheit |
| **Crypto+Auth** | Kryptografie, Authentifizierung |
| **Netzwerk** | Sicherheit vernetzter Systeme |

`*` = Zuordnung zur Spalte inhaltlich passend, wird aber als Stoff aus
Vorgänger-LFs vorausgesetzt und nicht erneut behandelt.

## Matrix

| Prüfung/Teil | bis LF10b | DuD | Crypto+Auth | Netzwerk |
| --- | --- | --- | --- | --- |
| S22 Konzeption | RAID, Virtualisierung, Backup, UML\*, SQL\*, Bubblesort\* | Datenschutz, Systemhärtung | — | Datenrate\* |
| S22 Analyse | Spam (Mail) | Briefgeheimnis, Sandbox | — | Subnetting\*, IPv6, Übertragungsmedien, VPN, WLAN/RADIUS, VLAN, EAP, HTTPS-/Reverse-Proxy, DMZ, Datenrate\* |
| S24 Konzeption | Cloud, Mail, Schreibtischtest\*, Datentypen\*, CAL\*, Verfügbarkeit, RAID | Datenschutz, TOM, Malware, Systemhärtung | — | — |
| S24 Analyse | DNS, Mail, Debugging\* | — | — | Routing, Subnetting\*, Multicast, DMZ, DNAT, ARP, APIPA, IPv6, SLAAC, DHCPv6, WLAN |
| W24 Konzeption | Cloud, Mail/DKIM/SPF, RAID, JBOD, Deduplizierung, SAN, Schreibtischtest\*, CSV\* | TOM, Spam/Phishing | X.509, asym. Verschlüsselung, Signaturen | Lichtwellenleiter\* |
| W24 Analyse | DNS, DHCP | — | TLS-Fehler | VLAN (L3, hopping), Subnetting\*, DHCP-Relay, NAT, IPv6, ICMP, NGFW, APIPA |
| S25 Konzeption | Virtualisierung, RAID, Backup, MDMS, CAL\*, Code-Debugging\* | Datenschutz, Systemhärtung | — | — |
| S25 Analyse | DNS, DHCP, LinkAggregation, MQTT\*, SpanningTree | — | X.509 | Subnetting\*, VLAN, Routing, SharedMedium, NAT, IPv6, DMZ, Firewalls, VPN, WLAN, ARP, Datenrate\* |
| W25 Konzeption | MixAndMatch, Badewannenkurve, BIOS/UEFI, Performance-Bottleneck, DB-Admin, Code-Debugging, Modulo\*, Testverfahren\*, Backup, RAID | TOM | — | — |
| W25 Analyse | SLA, QoS | — | Passwortrichtlinien, MFA | Subnetting\*, Routing, NAT, VPN, VLAN (Router-on-a-stick, dot1q), SharedMedium, SFP |
