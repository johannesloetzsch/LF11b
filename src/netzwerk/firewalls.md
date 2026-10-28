# Firewalls

## Grundlagen

> **📝❗** FiSi AP2 Analyse Sommer 2026 Aufgabe 2 aa
>
> **Router-Aufgaben** im Sicherheitskontext: drei Funktionen nennen

- **Paketfilterung:** Er lässt nur den Datenverkehr durch, der den Firewall-Regeln entspricht.
- **Weiterleitung zwischen Netzen:** Der Router verbindet LAN und Internet und leitet Pakete anhand seiner Routingtabelle weiter.
- **Adressübersetzung:** Er übersetzt private IP-Adressen für den Internetzugang *und verbirgt so das interne Netz*.

> **📝❗** FiSi AP2 Analyse Sommer 2025 Aufgabe 3 ab
>
> **Firewall-Regeln**, **HTTPS**, **SMTP/IMAPS**, **Port 4711**, **interner Webserver**, **Default Deny**: Regeltabelle vervollständigen

> **📝❗** FiSi AP2 Analyse Sommer 2026 Aufgabe 2 ba–bb
>
> **VPN-Zugriff**, **internes Netz**, **Ports 80/443**, **DNS 53**, **SMTP 465/587**, **IMAPS 993**, **Default Deny**: Regeltabellen vervollständigen

Beispiel:
```bash
iptables -A INPUT -i lo -j ACCEPT
iptables -A INPUT -m conntrack --ctstate ESTABLISHED,RELATED -j ACCEPT
iptables -A INPUT -p tcp --dport 22 -m conntrack --ctstate NEW -j ACCEPT
iptables -A INPUT -p tcp --dport 443 -m conntrack --ctstate NEW -j ACCEPT
iptables -P INPUT DROP
iptables -P OUTPUT ACCEPT
iptables -P FORWARD DROP
```

## Firewall-Typen

- **Paketfilter** *(stateless)*  
  Prüft einzelne Pakete auf IP, Port und Protokoll.
- **Stateful Packet Inspection** (**SPI**) *(stateful)*  
  Erweitert den Paketfilter um eine State Table und erkennt den Verbindungsbezug; Antwortpakete einer erlaubten Verbindung werden automatisch akzeptiert.

  ```bash
  iptables -A INPUT -m conntrack --ctstate ESTABLISHED,RELATED -j ACCEPT
  iptables -A INPUT -p tcp --dport 22 -m conntrack --ctstate NEW -j ACCEPT
  iptables -P INPUT DROP
  ```
  <!-- ESTABLISHED: Paket gehört zu einer bereits bestehenden Verbindung, die in beide Richtungen Daten gesehen hat.
       RELATED: Paket beginnt eine neue Verbindung, die mit einer bestehenden Verbindung zusammenhängt, z. B. FTP-Datenkanal oder ICMP-Fehler. -->

- **Application-Layer-Firewall** *(L5–L7)*  
  Prüft daneben auch Inhalte und Anwendungsprotokolle; arbeitet oft als Proxy oder Application Gateway.
  - **Web-Application-Firewall** (**WAF**)  
  Sonderform bzw. Spezialfall der Application-Layer-Firewall; konzentriert sich gezielt auf HTTP(S) und Webanwendungen.
- **Next-Generation-Firewall** (**NGFW**)

  Integrierter Typ: enthält Paketfilter, SPI, Deep-Paket-Inspection (**DPI**) und oft Intrusion-Detection/Intrusion-Prevention-System (**IDS/IPS**), Antivirus (**AV**), **TLS-Inspection** oder App-Erkennung. Je nach Produkt auch AppState- und Content-Awareness.

| Szenario | Paketfilter | Stateful Inspection | WAF | NGFW |
|---|---|---|---|---|
| RDP-Brute-Force aus dem Internet | X |  |  |  |
| Datenabfluss zu einer bekannten C2-IP | X |  |  |  |
| Gefälschte ACK-Pakete ohne bestehende Verbindung |  | X |  |  |
| Spoofing von Antwortpaketen auf eine ausgehende Verbindung |  | X |  |  |
| SQL-Injection über ein Login-Formular |  |  | X |  |
| XSS-Angriff über ein Kommentarfeld |  |  | X |  |
| Verschlüsselte C2-Kommunikation über HTTPS |  |  |  | X |
| Malware-Download über eine erlaubte HTTP-Verbindung |  |  |  | X |

> **❓❗** Welche Vor- und Nachteile können sich durch den Einsatz einer NGFW ergeben?


> **📝❗** FiSi AP2 Analyse Sommer 2025 Aufgabe 3 aa
>
> **Stateful Packet Inspection**, **Paketfilter**, **Zustand**, **Verbindungsbezug**: Unterschied erläutern

> **📝❗** FiSi AP2 Analyse Sommer 2025 Aufgabe 3 ac
>
> **NGFW**, **Vorteile**, **Paketfilter**: zwei Vorteile nennen

> **📝❗** FiSi AP2 Analyse Sommer 2026 Aufgabe 2 ac
>
> **SPI**, **NGFW**, **Layer**, **DPI**, **IDS/IPS**: beide Techniken unterscheiden

> **📝❗** FiSi AP2 Analyse Winter 2024 Aufgabe 4 aa–ad
>
> **NGFW**, **SSL/TLS-Inspection**, **HTTPS**, **Vor- und Nachteile**, **rechtliche Maßnahmen**: untersuchen und bewerten

> **📝❗** FiSi AP2 Analyse Sommer 2022 Aufgabe 3 a
>
> **URL-Filterung**, **Entschlüsseln und Scannen**, **Inhalte**, **Schadsoftware**: Varianten vergleichen und begründen

> **📝❗** FiSi AP2 Analyse Winter 2024 Aufgabe 4 ba–bc
>
> **Zertifikatsfehler**, **NGFW**, **TLS-Inspection**, **Fehlerbehebung**: Meldungen erklären und Lösungen vorschlagen

## DMZ

> **❓❗** Was ist eine DMZ?

> **❓❗** Wie wird eine DMZ umgesetzt?

> **📝❗** FiSi AP2 Analyse Sommer 2022 Aufgabe 3 ca–cc
>
> **Reverse-Proxy**, **DMZ**, **Serververteilung**: Funktionen und Platzierung begründen

> **📝❗** FiSi AP2 Analyse Sommer 2025 Aufgabe 1 bc
>
> **DMZ**, **zwei Eigenschaften**, **Schutzwirkung**: nennen

## Betrieb & Grenzen

> **📝❗** FiSi AP2 Analyse Sommer 2026 Aufgabe 2 ab
>
> **Grenzen einer Firewall**, **Phishing/Social Engineering**, **interne und physische Angriffe**, **Schadsoftware**: zwei Beispiele erklären

## Praxisaufgabe

> **💻 Praxisaufgabe:** Richten Sie eine Firewall ein: eingehend nur z.B. SSH und HTTPS erlauben, ausgehend alles erlauben, sonst eingehend blockieren. Nutzen sie dafür z.B. **iptables, nftables, ufw oder OPNsense/OpenWrt**.

<!--
> **Lösungsideen:** iptables: `INPUT DROP`, established/related erlauben, TCP 22/443 erlauben, `OUTPUT ACCEPT` · nftables: Input-Policy `drop`, `ct state established,related accept`, TCP 22/443 erlauben · ufw: `default deny incoming`, `default allow outgoing`, `allow 22/tcp`, `allow 443/tcp` · OPNsense/OpenWrt: WAN eingehend blockieren, 22/443 gezielt erlauben, LAN ausgehend erlauben.
-->
