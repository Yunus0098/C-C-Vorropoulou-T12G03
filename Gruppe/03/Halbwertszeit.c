#include <stdio.h>

int main(){

  //Initialisierung der Variablen
  float tage = 0.0;
  float mol = 200;
  
  /*Schleife, die so lange die Menge Radium halbiert bis weniger als 2% davon verbleit,
    und dabei die Halbwetszeiten addiert*/
  while (200*0.02 <= mol){
    printf("%4.1f Tage: %8.4f mol\n", tage, mol);
    tage += 11.4;
    mol /= 2;
  }
  //Ausgabe der verstrichenen Tage und die Menge des verbleibenden Radiums
  printf("Nach %.1f Tagen sind nur noch %.4f von %.4f Mol Radiums vorhanden.\n"
      "Das Radium ist verbraucht.\n", tage, mol, 200.0);
  return 0;
}
