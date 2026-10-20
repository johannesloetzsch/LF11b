# Autorisierung

„Was dürfen Sie?"

-> Zugriffskontrolle


## ACL

### POSIX-ACL

#### klassische Permission Bits

<!--
Die SuS können den Dateimodus aus `ls -l` ablesen und die neun Permission Bits den Klassen Owner, Group und Other zuordnen. Sie können Rechte oktal und symbolisch mit `chmod` setzen sowie Besitz mit `chown` und `chgrp` ändern. Sie können `umask` als prozessweiten Filter für neue Dateien erklären (`666` bzw. `777` minus umask) und typische Werte begründen: `022` für allgemein lesbare Dateien, `077` für private Daten.

Die SuS wissen, dass `umask` nur beim Anlegen wirkt und bestehende Dateien nicht ändert. Sie können für typische Fälle die passenden Rechte begründen: Webserver-Datei `644`, Verzeichnis `755`, Private Key `600`, Home `700`. Sie können erklären, dass bei Verzeichnissen `x` das Betreten und `w` das Anlegen und Löschen von Einträgen erlaubt.
-->


#### erweiterte ACLs

<!--
Die SuS können Beispiele nennen, in denen die Permission Bits nicht ausreichen: eine externe Person braucht Leserecht auf genau eine Datei; zwei Gruppen brauchen unterschiedliche Rechte auf derselben Datei; der Webserver-User braucht Zugriff, ohne Mitglied der Eigentümergruppe zu werden; neue Dateien sollen Gruppenrechte automatisch erben. Sie können begründen, warum das Modell mit nur einem Owner und einer Gruppe hier endet.

Die SuS können mit `getfacl` und `setfacl` Rechte lesen, setzen und entfernen sowie Default-ACLs auf Verzeichnissen erklären.

Die SuS können erklären, dass jede Datei eine POSIX-ACL besitzt und die Permission Bits deren Minimalform sind (`user::`, `group::`, `other::`). Sie wissen, dass die `mask` nur in erweiterten ACLs existiert, die Obergrenze für benannte Einträge und `group::` bildet und in `ls -l` als Gruppenfeld erscheint (Kennzeichen `+`). Sie können die Auswertungsreihenfolge nennen: Owner, benannter Nutzer, Gruppe, Other.
-->


## Least Privilege

<!--
Die SuS können das Prinzip formulieren: nur die Rechte, die für die Aufgabe nötig sind, und nur so lange wie nötig. Sie können „Default deny" begründen und auf Beispiele anwenden: Service-Account, Datenbankbenutzer, `sudo`-Regel.

Die SuS können `su` und `sudo` gegenüberstellen: `su` wechselt in ein Konto und verlangt dessen Passwort, `sudo` erlaubt einzelne Kommandos und verlangt das eigene Passwort. Sie können erklären, warum `sudo` Least Privilege umsetzt und `su` nicht.

Die SuS können erklären, wie Least Privilege den Schaden bei einer Kompromittierung begrenzt.
-->


## RBAC

<!--
Die SuS können das Prinzip erklären: Rechte werden Rollen zugeordnet, Personen erhalten Rollen. Sie können begründen, warum das wartbarer ist als Einzelrechte.

Die SuS können RBAC mit Unix-Gruppen umsetzen: Gruppe anlegen, Nutzer zuordnen, Dateien der Gruppe zuweisen, mit `setgid` die Gruppe vererben und eine `sudoers`-Gruppe als Admin-Rolle nutzen.

Die SuS kennen die Grenzen: keine Rollenhierarchie, keine Trennung von Aufgaben, Rechte addieren sich bei mehreren Gruppen, keine zeitliche Begrenzung.
-->


## su vs sudo

<!--
Die SuS können erklären, dass `sudo` Authentifizierung (Passwort) und Autorisierung (erlaubte Kommandos) verbindet. Sie können eine einfache `sudoers`-Regel lesen und mit `visudo` sicher ändern.

Die SuS können `NOPASSWD` als Risiko benennen und erklären, dass `sudo -i` bzw. `sudo su -` die Beschränkung aufheben.

Die SuS wissen, dass `sudo`-Aufrufe protokolliert werden und einen Root-Login ersetzbar machen.
-->


## OAuth2
<!-- kurze einleitung zu OAuth2 -->


### OAuth2-Scopes

<!--
Die SuS können OAuth2 als delegierte Autorisierung abgrenzen: Eine App erhält Zugriff, ohne das Passwort des Nutzers zu kennen.

Die SuS können erklären, was ein Scope ist: ein vom Client angefragtes, vom Nutzer genehmigtes Recht, das im Access Token steht und vom Resource Server geprüft wird.

Die SuS können Scopes von Rollen unterscheiden: Scopes gelten pro Client und Token und sind jederzeit entziehbar; Rollen sind dauerhafte Zuweisungen an Personen. Sie können den Mehrwert benennen: feinere, delegierbare Rechte nach dem Least-Privilege-Prinzip — nicht mächtiger, sondern enger und widerrufbar.
-->
