#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/** Diese Hilfsfunktion vergleicht, ob zwei als Zeichenkette eingegebene Pins gleich sind. **/
bool vergleichePins(char* pin1, char* pin2) {
  return strcmp(pin1, pin2) == 0;
}

int main(void) {
  /** Variablen deklarieren… **/
  char* pinKorrekt = "1234";
  char* pinEingegeben = (char*)malloc(5);

  /** Pin abfragen und in die Variable „pinEingegeben“ speichern. **/
  printf("Bitte geben Sie ihre Pin ein\n");
  scanf("%s", pinEingegeben);

  /** Prüfen, ob die eingegebene Pin korrekt ist. **/
  if(vergleichePins(pinEingegeben, pinKorrekt))
    printf("Die eingegebene Pin ist korrekt. Die Teilaufgabe wurde erfolgreich erledigt.");
  else
    printf("Die eingegebene Pin ist falsch!");
}
