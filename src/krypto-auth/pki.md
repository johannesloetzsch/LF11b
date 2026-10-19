# PKI, CA, X.509

## Public-Key-Zertifikat

> **❓❗** Was ist ein Public-Key-Zertifikat?

- Bindet einen Public Key an eine Identität (Subject)
- Enthält:
  - **Public Key**
  - Identität
  - Gültigkeit
  - **Signatur** einer CA ([RFC 5280](https://www.rfc-editor.org/rfc/rfc5280))
- Der Client prüft die Signatur mit dem Public Key der CA
  - die Kette endet bei einer Root-CA im Trust Store
- Zweck: Authentifizierung des Inhabers und Verteilung seines Public Keys


### X.509

Beispiel:

```text
Certificate
  Version:             3
  Serial Number:       01
  Signature Algorithm: sha256WithRSAEncryption
  Issuer:              C=DE, O=schullabor, CN=LF11b-Test-CA
  Validity
    Not Before:        Jan  1 00:00:00 2026 GMT
    Not After:         Jan  1 00:00:00 2027 GMT
  Subject:             C=DE, O=schullabor, CN=example.local
  Subject Public Key Info
    Algorithm:         rsaEncryption
    Public-Key:        (2048 bit)
  X509v3 extensions
    X509v3 Subject Alternative Name:
      DNS:example.local
  Signature Algorithm: sha256WithRSAEncryption
  Signature Value:     ...
```

Der Abschnitt von `Version` bis `X509v3 extensions` wird als `tbsCertificate` (to be signed) bezeichnet.

> **❓** Welche Felder hat ein X.509-Zertifikat?

-> [RFC 5280 §4.1](https://www.rfc-editor.org/rfc/rfc5280)

- Version, Seriennummer
- Gültigkeit (`notBefore` / `notAfter`)
- Issuer und Subject:
  - Land/Region (C)
  - Organisation (O)
  - Gebräuchlicher Name (CN)
- Public Key Info
- Erweiterungen (nur v3), z. B. `subjectAltName`:
  - `DNS:example.local` — fehlt der Hostname, meldet der Browser `ERR_CERT_COMMON_NAME_INVALID` oder `SSL_ERROR_BAD_CERT_DOMAIN`
  - `email:max.mustermann@example.org` für Mailverschlüsselung mit S/MIME
- Signaturalgorithmus (einmal innerhalb und einmal außerhalb des tbsCertificate)
- Signatur des Hashes der Inhalte

Dateiformate:
- PKCS#12: verschlüsselter **Private Key** + Zertifikat ([RFC 7292](https://www.rfc-editor.org/rfc/rfc7292))
- PKCS#10: CSR (vom Antragsteller selbst signiert) ([RFC 2986](https://www.rfc-editor.org/rfc/rfc2986))
- PEM: als Base64-Text ([RFC 7468](https://www.rfc-editor.org/rfc/rfc7468))
- DER: binär


## PKI

> **❓** Was gehört zu einer PKI?

- Bindet Public Keys an Identitäten und „schafft“ damit Vertrauen
- Lebenszyklus: **CSR → Ausstellung → Nutzung → Erneuerung → Sperrung**
- Kette: Root-CA (selbstsigniert) → Intermediate-CA → Endentitäts-Zertifikat


## CA

> **❓❗** Welche Aufgaben hat eine CA?

- **Stellt Zertifikate aus und signiert sie** mit ihrem Private Key
- Root-CA: selbstsigniert, ihr Zertifikat steht im Trust Store
- Intermediate-CA: von der Root-CA signiert und stellt Endentitäts-Zertifikate aus (Delegation)
- Sperrung: CRL als Liste oder OCSP online ([RFC 5280 §3.3](https://www.rfc-editor.org/rfc/rfc5280), [RFC 6960](https://www.rfc-editor.org/rfc/rfc6960))
- Ob eine CA vertrauenswürdig ist, entscheidet der Client über seinen Trust Store


## S/MIME

> **❓** Was ist S/MIME?

-> Standard zum **Signieren und Verschlüsseln von E-Mails** auf Basis von X.509-Zertifikaten ([RFC 8551](https://www.rfc-editor.org/rfc/rfc8551))

- verwendet Zertifikate mit:
  - `subjectAltName = email:…`
  - `extendedKeyUsage = emailProtection`

- Signieren: Absender signiert mit seinem **privaten Schlüssel**, Empfänger prüft mit dem öffentlichen Schlüssel aus dem Zertifikat
- Verschlüsseln: hybrid mit dem **öffentlichen Schlüssel des Empfängers** (überprüft mittels Zertifikat)


## Prüfungsaufgaben

> **📝❗** FiSi AP2 Konzeption Winter 2024 Aufgabe 2 d
>
> **X.509-Personalzertifikate**: zwei Eigenschaften nennen; **Signierung und Verschlüsselung von Mails** gemäß Unternehmensregelung

> **📝❗** FiSi AP2 Analyse Sommer 2025 Aufgabe 3 b
>
> VPN-Produktentscheidung: **X.509-Zertifikate** für gegenseitige Authentifizierung versus hinterlegte Public-Keys; Relevanz hardware-unterstützter **Krypto-Algorithmen**


## Praxis

> **💻** Eigene CA erstellen ([einfach](https://fisi.b-maus.de/linux/sicherheit/tls/ca/root/) -> [vollständig](https://openssl-ca.readthedocs.io/))
