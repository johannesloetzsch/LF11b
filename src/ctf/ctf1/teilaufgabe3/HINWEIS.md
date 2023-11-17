Um das Programm solange immer wieder neu zu starten, bis es erfolgreich beendet wurde, kann folgende Schleife verwendet werden:

```bash
while ! ./pineingabe ; do echo -e '\n…Nächster Versuch…\n'; done
```

Die Eingabe der Pin muss nicht händig erfolgen. Statt dessen kann auch der Pipe-Operator genutzt werden.

```bash
echo 42 | ./pineingabe
```
