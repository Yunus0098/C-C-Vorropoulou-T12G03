#include  <stdio.h>

//Funktion zur Berechnung der Note aus der Zahl der Punkte
int noteBerechnen(int punkte){
  //Note < 5?
  if (punkte < 21){
    return 5;
  }

  //Falls note != 5: Note?
  else{
    return 4 - ((punkte - 21) / 5);
  }
}

int main(){
  //Auffordrung zur eingabe der Punkte
  int punkte;
  printf("Geben sie zur Umrechnung die Punkte ein:\n-->    ");
  scanf("%i", &punkte);

  //Punkte zwischen 0 und 40?
  if ((punkte >= 0) && (punkte <= 40)){
    //Ausgabe der Note und ende des Programms
    int note = noteBerechnen(punkte);
    printf("Note: %i\n", note);
    return 0;
  }

  //Falls Punkte illegal: Ausgabe Fehlermeldung und erneuter Aufruf des Programms
  else{
    printf("Fehler: Die Eingabe muss zwischen 0 und 40 liegen!\n");
    return main();
  }
}
