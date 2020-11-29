#include <stdio.h>

int main()
{
	float a = 1000000;
	float eps = 1;
	while(a!=eps+a);{
		eps/=2; 
		printf("\neps: %f", eps);
	}
	
	return 0;
}