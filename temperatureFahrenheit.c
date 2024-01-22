#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float tempfahr,tempcels;
	
	print("Entrer la température Celsius :");
	scanf("%f",&tempcels);
	
	tempFahr=(tempcels*9/5)+32;
	
	printf("La température fahrenheit du tampérature %.2f est %.2f",tempcels,tempFahr);
	return 0;
}
