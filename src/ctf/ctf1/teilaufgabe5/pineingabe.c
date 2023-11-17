#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

/** Diese Hilfsfunktion vergleicht, ob zwei als Zeichenkette eingegebene Pins gleich sind. **/
bool vergleichePins(char* pin1, char* pin2, int pinLaenge) {
  return strncmp(pin1, pin2, pinLaenge) == 0;  /** Um den Exploit zu vereinfachen, werden beim vergleichen der Pins nur Zeichenketten der erwarteten Längen verglichen **/
}

char* generiereZufallspin(int pinLaenge, char* randomPin) {
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
  int pinLaenge = 8;  /** Mit dieser langen Pin sollte es aufwändiger sein, einen Bruteforce-Angriff zu nutzen. **/
  /** Aber haben wir uns gegen alle anderen möglichen Overflows geschützt??? **/
  char* pinEingegeben = (char*)malloc(pinLaenge+1);
  char* pinKorrekt = (char*)malloc(pinLaenge+1);
  char* speicherplatzFuerErkenntnisDesTages = (char*)malloc(1000);  /** Hoffentlich genug Speicherplatz um die Nachricht zu speichern **/
  strcpy(speicherplatzFuerErkenntnisDesTages, "In C (und verwandten Sprachen) sicher zu programmieren ist nicht so einfach…");

  uint verbleibendeVersuche = 3;
  bool letzteEingabeWarKorrekt = false;
  while(! letzteEingabeWarKorrekt && verbleibendeVersuche!=0) {
    generiereZufallspin(pinLaenge, pinKorrekt);

    /** Pin abfragen und in die Variable „pinEingegeben“ speichern. **/
    printf("Bitte geben Sie ihre %dstellige Pin ein.\n", pinLaenge);
    scanf("%s", pinEingegeben);  /** Aaahm, wie lang darf pinEingegeben eigentlich maximal sein??? **/
    printf("%s\n\n", speicherplatzFuerErkenntnisDesTages);

    /** Prüfen, ob die eingegebene Pin korrekt ist. **/
    if(vergleichePins(pinEingegeben, pinKorrekt, pinLaenge)) {
      letzteEingabeWarKorrekt = true;
    }
    else {
      verbleibendeVersuche = verbleibendeVersuche-1;
      printf("Die eingegebene Pin ist falsch! Es bleiben noch %u Versuche.\n\n", verbleibendeVersuche);
      /** Weil die Aufgabe deutlich anspruchsvoller ist als die vorherigen ist, hier noch ein Hinweis **/
      strcpy(speicherplatzFuerErkenntnisDesTages, "In C muss sehr gut darauf geachtet werden, dass an keinen Speicherplatz etwas größeres/längeres gespeichert wird, als Speicherplatz allocated (auf deutsch reserviert) wurde. Insbesondere darf man nicht darauf vertrauen, dass Nutzer bei ihren Eingaben sich an die Erwartungen des Entwicklers halten…");
    }
  }

  if(verbleibendeVersuche > 0)
    printf("Die Pin wurde korrekt eingegeben, bevor die Anzahl möglicher Versuche aufgebraucht wurde. Die Teilaufgabe wurde erfolgreich erledigt.");
  else
    printf("Es wurden zu viele Versuche benötigt um die Pin zu erraten.");

  printf("\nNur zur Info: Die „korrekte Pin“ lautete: %s", pinKorrekt);  /** Nur für Demo-Zwecke **/
}
