#include <stdio.h>

int main(){
	float longueur,largeur,Aire;
	
	printf("Entrer la longueur de rectangle :");
	scanf("%f",&longueur);
	printf("Entrer la largeur de rectangle :");
	scanf("%f",&largeur);
	
	Aire=longueur*largeur;
	
	printf("L' aire du rectangle est : %.2f",Aire);
	return 0;
}
