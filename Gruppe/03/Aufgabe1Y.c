#include <stdio.h>

int main()
{
	int punkte;
	printf("\nBitte geben sie ihre Punktzahl ein:  ");
	scanf("%d", &punkte);
	
	if (punkte >= 0 && punkte < 21)        printf("\nIhre Note ist 5.");
    if (punkte > 20 && punkte < 26)        printf("\nIhre Note ist 4.");
    if (punkte > 25 && punkte < 31)        printf("\nIhre Note ist 3.");
    if (punkte > 30 && punkte < 36)        printf("\nIhre Note ist 2.");
    if (punkte > 35 && punkte < 41)        printf("\nIhre Note ist 1.");
	if (punkte < 0 || punkte > 40)        printf("\nFehler.");
	
	return 0;
}
	