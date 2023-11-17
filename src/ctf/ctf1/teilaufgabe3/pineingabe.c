#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

/** Diese Hilfsfunktion vergleicht, ob zwei als Zeichenkette eingegebene Pins gleich sind. **/
bool vergleichePins(char* pin1, char* pin2) {
  return strcmp(pin1, pin2) == 0;
}

/** Um zu verhindern, dass ein Angreifer die Pin aus dem Binary herausliest (z.B. mit `hexdump -C` oder `strings`), generieren wir diesmal eine zufällige Pin. **/
char* generiereZufallspin(int pinLaenge, char* randomPin) {
  srand(time (NULL));
  const char erlaubteZeichen[] = "0123456789";
  char zufallszeichen;
  for(int i=0; i<pinLaenge; i++) {
    zufallszeichen = rand() % 10;  /** es gibt 10 erlaubte Zeichen **/
    randomPin[i] = erlaubteZeichen[zufallszeichen];
  }
  randomPin[pinLaenge] = '\0';
}

int main(void) {
  /** Variablen deklarieren… **/
  int pinLaenge = 2;
  char* pinKorrekt = (char*)malloc(pinLaenge+1);
  generiereZufallspin(pinLaenge, pinKorrekt);  /** Die Funktion nimmt einen Pointer entgegen, in welchen die generierte Pin geschrieben wird. **/
  char* pinEingegeben = (char*)malloc(pinLaenge+1);

  /** Pin abfragen und in die Variable „pinEingegeben“ speichern. **/
  printf("Bitte geben Sie ihre %dstellige Pin ein\n", pinLaenge);
  scanf("%s", pinEingegeben);

  /** Prüfen, ob die eingegebene Pin korrekt ist. **/
  if(vergleichePins(pinEingegeben, pinKorrekt)) {
    printf("Die eingegebene Pin ist korrekt. Die Teilaufgabe wurde erfolgreich erledigt.");
    return 0;  /** Rückgabewert true **/
  }
  else {
    printf("Die eingegebene Pin ist falsch!");
    return 1;  /** Rückgabewert false **/
  }
}
