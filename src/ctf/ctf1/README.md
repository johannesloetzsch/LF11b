# CTF1

Dieses CTF besteht aus mehreren Teilaufgaben, die aufeinander aufbauen.

Jede Teilaufgabe enthällt Code, der die gleiche Programmieraufgabe zu lösen versucht.

In den Nachfolgeaufgaben wurde jeweils probiert, den Fehler im Code der vorherigen Aufgabe zu lösen. Gleichzeitig wird auf eine weitere Sicherheitslücke hingewiesen.

## Code ausführen

Auf 64bit-Linux kann das vorcompilierte Programm aus dem jeweiligen Ordner direkt geöffnet werden:

```bash
./pineingabe
```

Für andere Systeme kann es so neu compiliert werden:
```bash
gcc pineingabe.c -o pineingabe
```

Es ist immer eine gute Idee, den Code selbst zu reviewen und zu compilieren und nicht blind einem heruntergeladenen Binärprogramm zu vertrauen…

## Hinweise

1. Die Fehler sind im Code zu finden.
2. Wenn es schwer fällt den Code zu lesen, kann es helfen das Programm auszuführen und für jeden einzelnen Schritt der Ausgeführt wird im Sourcecode nachzuvollziehen was warum getan wird.
3. Für manche Aufgaben gibt es eine zusätzliche Datei mit Hinweisen.
4. Da die Folgeaufgabe den gesuchten Fehler behebt (einschließlich erklärendem Kommentar), lohnt es sich im Zweifelsfall die Änderungen anzuschauen:

```bash
diff teilaufgabe1/pineingabe.c teilaufgabe2/pineingabe.c --color --unified=10
```

## Abgabe

Zum Nachweis der gefundenen Lösung, bitte für jede gelöste Teilaufgabe:
> a) den gefundenen Fehler beschreiben

oder

> b) den Lösungsweg zum ausnutzen des Fehlers angeben
