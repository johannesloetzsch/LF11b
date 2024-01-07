# Netzwerksicherheit

## Firewalls

### [iptables](https://wiki.ubuntuusers.de/iptables/)

### NAT
(**N**etwork**A**ddress**T**ranslation)
-> NAPT (**N**etwork**A**ddress**P**ort**T**ranslation)

* SNAT (**S**ourceNAT) / Masquerading
* DNAT (**D**estinationNAT)
* …
  * Full NAT
  * 1:1 NAT
  * No NAT



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

## Proxy, ReverseProxy
### SSL-Offloading/TLS-Termination

## Radius

* „AAA“
  * Authentication
  * Authorization
  * Accounting
