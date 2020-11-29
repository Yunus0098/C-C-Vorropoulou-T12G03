#include <stdio.h>

int main(){

  //Initialisierung der Variablen
  float f = 1000000;
  float e = 1;

  //Schleife, die solange e halbiert bis f = f+e
  while (f != f+e){
    printf("%f\n", e);
    e /=2;
  }
  //Ausgabe des ersten e mit f = f+e
  printf("Epsilon = %f\n", e);
}
