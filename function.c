#include <stdio.h>

void AfficherNom(char* nom)
{   
	printf("Bonjour %s",&nom);
}

int main()
{
	char* nom;
	printf("Entrer votre nom :");
	scanf("%s",&nom);
	AfficherNom(nom);
	return 0;
}
