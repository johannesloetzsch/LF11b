# NAT

> **❓❗** Was ist NAT?

> **❓❗** Wo wird NAT benötigt?

> **❓❗** Wie funktioniert NAT/PAT?

Beispiel:
Ein Client möchte aus dem lokalen Netz von `192.168.0.42:45123` eine Anfrage an `116.202.184.120:443` stellen.
Der Client ist hinter einem Router mit der öffentlichen IP `80.153.5.129`. Beim PAT übersetzt der Router den Quellport `45123` auf `50001`.

<table style="width:100%;border-collapse:collapse">
  <tr>
    <td style="vertical-align:top;padding:12px;border:1px solid #ddd">
      <p><strong>① LAN-seitig</strong></p>
      <table>
        <thead><tr><th>Source</th><th>Destination</th></tr></thead>
        <tbody><tr><td>192.168.0.42:45123</td><td>116.202.184.120:443</td></tr></tbody>
      </table>
    </td>
    <td style="vertical-align:top;padding:12px;border:1px solid #ddd">
      <p><strong>② Internet-seitig</strong></p>
      <table>
        <thead><tr><th>Source</th><th>Destination</th></tr></thead>
        <tbody><tr><td><strong>80.153.5.129:50001</strong></td><td>116.202.184.120:443</td></tr></tbody>
      </table>
    </td>
  </tr>
  <tr>
    <td style="vertical-align:top;padding:12px;border:1px solid #ddd">
      <p><strong>④ Antwort LAN</strong></p>
      <table>
        <thead><tr><th>Source</th><th>Destination</th></tr></thead>
        <tbody><tr><td>116.202.184.120:443</td><td><strong>192.168.0.42:45123</strong></td></tr></tbody>
      </table>
    </td>
    <td style="vertical-align:top;padding:12px;border:1px solid #ddd">
      <p><strong>③ Antwort Internet</strong></p>
      <table>
        <thead><tr><th>Source</th><th>Destination</th></tr></thead>
        <tbody><tr><td>116.202.184.120:443</td><td>80.153.5.129:50001</td></tr></tbody>
      </table>
    </td>
  </tr>
</table>

Das oben beschriebene Verfahren ist **SNAT** (*Source NAT*); weil zusätzlich der Quellport übersetzt wird, ist es genauer **PAT** (*Port Address Translation*). In Linux wird diese Form auch **Masquerading** genannt.


## DNAT

> **❓❗** Wie können wir in einem privaten Netz hinter einem NAT-Router Dienste betreiben, die öffentlich erreichbar sind?

**DNAT** überschreibt bei eingehenden Paketen die **Ziel-IP-Adresse** und meist auch den **Ziel-Port**. Der häufige Anwendungsfall ist **Portforwarding**: Der NAT-Router leitet eingehende Pakete an einen Server im lokalen Netz weiter.


## Prüfungsaufgaben

> **📝❗** FiSi AP2 Analyse Sommer 2025 Aufgabe 1 ba
>
> **Eine öffentliche IPv4-Adresse**, **viele Geräte**: erklären, wie die Geräte gemeinsam ins Internet kommen

> **📝❗** FiSi AP2 Analyse Winter 2025 Aufgabe 1 ba–bd
>
> **NAT/PAT-Prozess**, **Paketinhalt**, **TLS**, **Portforwarding**: Ablauf ergänzen und Zusammenhänge erklären

> **📝❗** FiSi AP2 Analyse Sommer 2024 Aufgabe 1 b–ba
>
> **DMZ-Server**, **von außen erreichbar**, **Router-Konfiguration**: erforderliche Maßnahmen bestimmen
