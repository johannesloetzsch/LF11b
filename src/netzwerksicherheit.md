# Netzwerksicherheit

## Firewalls

### [iptables](https://wiki.ubuntuusers.de/iptables/)

#### [Beispielkonfiguration für Clients](https://www.cyberciti.biz/tips/linux-iptables-examples.html)

```bash
iptables -P FORWARD DROP
iptables -P OUTPUT ACCEPT
iptables -A INPUT -m state --state NEW,ESTABLISHED -j ACCEPT
iptables -P INPUT DROP
```

### NAT
(**N**etwork**A**ddress**T**ranslation)
-> NAPT (**N**etwork**A**ddress**P**ort**T**ranslation)

* SNAT (**S**ourceNAT) / Masquerading
* DNAT (**D**estinationNAT)
* …
  * Full NAT
  * 1:1 NAT
  * No NAT

```bash
echo 1 | sudo tee /proc/sys/net/ipv4/ip_forward
iptables -t nat -A POSTROUTING -o eth0 -j MASQUERADE
```

![SNAT](https://upload.wikimedia.org/wikipedia/commons/c/c7/NAT_Concept-en.svg)

### VLAN

* Access-Mode, Trunk-Mode, Hybrid-Mode

* Zuweisung z.B. auf Basis von
  * Anschluss-Port
  * MAC
  * IP
  * IP + TCP/UDP-Port
  * Authentifizierung mit Zertifikaten

| Schicht | Administrationsaufwand | Flexibilität | Sicherheit |
|---------|------------------------|--------------|------------|
| 1       | +                      | -            | -          |
| 2       | (-)                    | (-)          | -          |
| 3       | (-)                    | +            | -          |
| 4       | (-)                    | +            | (-)        |
| 5-7     | (-)                    | +            | (+)        |

```bash
### Vorbereitung:
lsmod | grep 8021q
sudo modprobe 8021q

### Virtuelles Interface für VLAN-ID 200 anlegen:
sudo ip link add link wlan0 name wlan0.200 type vlan id 200
```

## VPN

## Proxy
* Caching
* Filtern -> Verfügbarkeit (+ Versuch des Schutzes vor schädlichen Inhalten)
* Kontrolle -> Vertraulichkeit
* Manipulation -> Integrität
  * z.B. [„Upside-Down-inTernet“](https://pete.ex-parrot.com/upside-down-ternet.html)

### ReverseProxy
#### SSL-Offloading/TLS-Termination

## Radius

* „AAA“
  * Authentication
  * Authorization
  * Accounting
