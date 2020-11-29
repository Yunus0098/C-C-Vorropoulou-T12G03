#include <stdio.h>

int main(){
	float menge = 200;
	double tag = 0;
	    while(tag <=0 || menge > 3){
		printf("\n%.2f Tage: %.4f mol", tag, menge);
		menge -= menge/2;
		tag += 11.4;
		}
		printf(" - Verbraucht");
	return 0;
}