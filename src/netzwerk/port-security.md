# Port-Sicherheit

## Angriffe

### Port-Missbrauch

Ein **unbefugtes Gerät** wird an einen Switch-Port angeschlossen, z. B. ein fremdes Notebook, ein privater Switch oder ein nicht genehmigter Access Point. Das ist kein Protokollangriff, sondern eine Verletzung der Port-/Netzrichtlinie.

**Port-Security hilft:** Sie erlaubt nur bestimmte MAC-Adressen pro Port; für eine echte Identitätsprüfung ist zusätzlich **802.1X/RADIUS** nötig.

### MAC-Flooding

Der Angreifer sendet viele Frames mit ständig neuen, **gefälschten Quell-MAC-Adressen**. Dadurch füllt sich die MAC-/CAM-Tabelle des Switches. Der Switch kann legitime Adressen nicht mehr zuordnen und flutet unbekannte Unicast-Frames an alle Ports – der Angreifer kann so Traffic mitlesen.

**Port-Security hilft:** Sie begrenzt die Zahl der MAC-Adressen pro Port und schaltet den Port bei Überschreitung ab.

### MAC-Spoofing

Der Angreifer setzt die **MAC-Adresse eines erlaubten Geräts**. Port-Security sieht dann eine „gültige“ MAC und lässt den Verkehr durch. Sie kann MAC-Spoofing also nicht zuverlässig verhindern – MAC-Adressen sind sichtbar und nicht geheim.

**Port-Security hilft nicht zuverlässig;** nötig sind **802.1X/NAC** oder **MACsec**.

### ARP-Poisoning

Der **Angreifer fälscht ARP-Antworten** und ordnet **seine MAC einer fremden IP** zu, z. B. dem Gateway. Dadurch läuft der Verkehr über ihn (**Man-in-the-Middle**). Port-Security erkennt das nicht, weil sie nur MAC-Adressen am Port prüft und ARP nicht inspiziert.

**Port-Security hilft nicht;** nötig sind **Dynamic ARP Inspection (DAI)** mit **DHCP Snooping**, **statische ARP-Einträge** und **802.1X**.


## Port Security

Port Security ist eine Funktion am Switch, die pro Port festlegt, welche MAC-Adressen erlaubt sind und wie viele gleichzeitig gelernt werden dürfen. Sie schützt *(etwas)* vor unbefugten Endgeräten *(die keine zulässige MAC kennen)* und MAC-Flooding.

### MAC-Lernverfahren

- **Dynamisch:** Der Switch lernt die MAC-Adresse automatisch; sie geht bei einem Neustart verloren.
- **Sticky MAC Addresses:** Die MAC-Adresse wird dynamisch gelernt und bleibt auch nach einem Neustart erhalten.
- **Configured MAC Addresses:** Die MAC-Adresse wird manuell für den Port konfiguriert.

### Violation Modes

| Modus | Reaktion bei Verstoß |
|---|---|
| `protect` | Frames werden verworfen; keine Meldung; Port bleibt aktiv |
| `restrict` | Frames werden verworfen; Meldung/Log; Port bleibt aktiv |
| `shutdown` | Port wird sofort deaktiviert; manuelle Reaktivierung nötig |

### Prüfungsaufgaben

> **📝❗** FiSi AP2 Analyse Sommer 2022 Aufgabe 2 bc
>
> **Port Security**: unternehmensfremde Endgeräte an Netzwerkdosen verhindern

> **📝❗** FiSi AP2 Analyse Sommer 2026 Aufgabe 3 ca
>
> **Configured MAC Addresses / Sticky MAC Addresses**: Unterschied und Zweck erläutern

> **📝❗** FiSi AP2 Analyse Sommer 2026 Aufgabe 3 cb
>
> **Violation Mode „Shutdown“**: Reaktion auf eine nicht autorisierte MAC-Adresse und Dauer des Port-Zustands erläutern

> **📝❗** FiSi AP2 Analyse Sommer 2026 Aufgabe 3 d
>
> **Port-Security**: Schutzwirkung gegen den Angriff aus Aufgabe 3 b (ARP-Poisoning/MitM) beurteilen


## 802.1X

**IEEE 802.1X** ist eine portbasierte **Zugangskontrolle** und wird für kabelgebundene Ports, die Zuweisung von VLANs und die Authentifizierung im WLAN eingesetzt. Der Switch oder Access Point lässt ein Gerät erst nach erfolgreicher Anmeldung auf das Netz. Beteiligt sind **Supplicant** (Endgerät), **Authenticator** (Switch/Access Point) und **Authentication Server** (meist **RADIUS**). Vor der Anmeldung sind nur „EAPOL“-Frames erlaubt, danach wird der Port geöffnet.

802.1X regelt dabei den **Zugang**, nicht die eigentliche Authentifizierungsmethode. Dafür wird das Extensible Authentication Protocol (**EAP**) (z. B. EAP-TLS, PEAP) empfohlen.

![](https://upload.wikimedia.org/wikipedia/commons/1/1f/802.1X_wired_protocols.png?utm_source=en.wikipedia.org&utm_campaign=parser&utm_content=thumbnail_unscaled)
