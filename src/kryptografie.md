# Grundlagen Kryptografie

> [BSI TR-02102](https://www.bsi.bund.de/DE/Themen/Unternehmen-und-Organisationen/Standards-und-Zertifizierung/Technische-Richtlinien/TR-nach-Thema-sortiert/tr02102/tr02102_node.html) „Kryptographische Verfahren: Empfehlungen und Schlüssellängen“

## Verschlüsselung

### Symmetrisch

#### Polyalphabetische Ersetzungschiffren (z.B. Vigenère-Chiffre)

![](https://upload.wikimedia.org/wikipedia/commons/6/6d/VigenereSquare2.jpg)

<samp>&nbsp; WETTERVORHERSAGEBISKAYA</samp> (Klartext1)<br/>
<samp>+ NGMNIAKRBOGPITRFMEORCBI</samp> (Schlüssel)<br/>
<samp>= JKFGMRFFSVKGATXJNMGBCZI</samp> (Ciphertext1)

<samp>&nbsp; IUZOMFOYMGNPJXIIQVGZEIM</samp> (Ciphertext2)

> Aufgabe 1: Angenommen, du hast obrige beiden Ciphertexte empfangen, den Klartext1 erraten und damit den „Tagesschlüssel“ berechnet (known-plaintext attack). Entschlüssel Ciphertext2 (z.B. mittels [Tabula recta](https://de.wikipedia.org/wiki/Tabula_recta))
>
> Aufgabe 2: Wie kann diese Art von Angriff verhindert werden?

#### [One-Time-Pad](https://de.wikipedia.org/wiki/One-Time-Pad)

#### [AES](https://www.youtube.com/watch?v=O4xNJsjtN6E)
![Substitutions-Permutations-Netzwerk](https://upload.wikimedia.org/wikipedia/commons/c/cd/SubstitutionPermutationNetwork2.png)

### Asymmetrisch

### Schlüsselaustausch

#### Diffie-Hellman

```mermaid
sequenceDiagram
    Alice->Bob: p=23, z=7
    Note left of Alice: a=3
    Alice->>Bob: A = z^a mod p = 7^3 mod 23 = 21
    Note right of Bob: b=4
    Bob->>Alice: B = z^b mod p = 7^4 mod 23 = 9
    Note left of Alice: k = B^a mod p = 9^3 mod 23 = 16
    Note right of Bob: k = A^b mod p = 21^4 mod 23 = 16
```

## Signaturen

## [(Kryptographische) Hashes](https://de.wikipedia.org/wiki/Kryptographische_Hashfunktion)

Anforderungen:
* Feste Länge der Hash-Werte
* Einweg-Funktion („Falltür-Funktion“)
* „Kollisionsfreiheit“ / „Kollisionsresistenz“

![Merkle-Damgård-Konstruktion](https://upload.wikimedia.org/wikipedia/commons/thumb/a/ac/MerkleDamgaard.svg/1920px-MerkleDamgaard.svg.png)
