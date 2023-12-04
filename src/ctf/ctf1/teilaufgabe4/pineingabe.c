#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

/** Diese Hilfsfunktion vergleicht, ob zwei als Zeichenkette eingegebene Pins gleich sind. **/
bool vergleichePins(char* pin1, char* pin2) {
  return strcmp(pin1, pin2) == 0;
}

void generiereZufallspin(int pinLaenge, char* randomPin) {
  srand(time (NULL));
  const char erlaubteZeichen[] = "0123456789";
  char zufallszeichen;
  for(int i=0; i<pinLaenge; i++) {
    zufallszeichen = rand() % 10;
    randomPin[i] = erlaubteZeichen[zufallszeichen];
  }
  randomPin[pinLaenge] = '\0';
}

int main(void) {
  /** Variablen deklarieren… **/
  int pinLaenge = 2;
  char* pinKorrekt = (char*)malloc(pinLaenge+1);
  char* pinEingegeben = (char*)malloc(pinLaenge+1);

  /** Um einen Bruteforce-Angriff zu verhindern (bzw. seinen Erfolg unwahrscheinlich zu machen), entscheiden wir uns die Anzahl der erlaubten Versuche zu begrenzen. Nur wenn die Pin innerhalb der erlaubten Versuche korrekt eingegeben wird, soll die Eingabe gültig sein. **/
  unsigned int verbleibendeVersuche = 3;
  bool letzteEingabeWarKorrekt = false;
  while(! letzteEingabeWarKorrekt) {
    generiereZufallspin(pinLaenge, pinKorrekt);  /** In der Realität würde die Pin nicht bei jedem Versuch neu generiert, sondern aus einer Datenbank gelesen werden **/

    /** Pin abfragen und in die Variable „pinEingegeben“ speichern. **/
    printf("Bitte geben Sie ihre %dstellige Pin ein.\n", pinLaenge);
    scanf("%s", pinEingegeben);

    /** Prüfen, ob die eingegebene Pin korrekt ist. **/
    if(vergleichePins(pinEingegeben, pinKorrekt)) {
      letzteEingabeWarKorrekt = true;
    }
    else {
      verbleibendeVersuche = verbleibendeVersuche-1;
      printf("Die eingegebene Pin ist falsch! Es bleiben noch %u Versuche.\n\n", verbleibendeVersuche);
    }
  }

  if(verbleibendeVersuche > 0)
    printf("Die Pin wurde korrekt eingegeben, bevor die Anzahl möglicher Versuche aufgebraucht wurde. Die Teilaufgabe wurde erfolgreich erledigt.");
  else
    printf("Es wurden zu viele Versuche benötigt um die Pin zu erraten.");  /** In dem Fall könnte man den Account sperren **/
}
