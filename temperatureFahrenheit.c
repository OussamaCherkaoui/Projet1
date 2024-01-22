#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float tempfahr,tempcels;
	
	printf("Entrer la température Celsius :");
	scanf("%f",&tempcels);
	
	tempfahr=(tempcels*9/5)+32;
	
	printf("La temperature fahrenheit du tamperature %.2f est %.2f",tempcels,tempfahr);
	return 0;
}
