#include <stdio.h>

int main(){
  //Initialisierung der Laufvariable der 1. Schleife
  int i = 0;

  //1. Schleife, gibt die Zahlen 0 bis 10 mit printf() aus
  for (i = 0; i <= 10; i++){
    printf("%i\n", i);
  }
  
  /*Wiederverwertung de Laufvariable der 1. Schleife
    zur verwendung in der 2. Schleife*/
  i = 10;
  
  //2. Schleife, gibt die Zahlen 0 bis 10 in umgekehrter Reihnfolge aus
  while (i != 0){
    printf("%i\n", i);
    i--;
  }
  return 0;
}
