#include <stdio.h>

int Somme(int nbr)
{
	if(nbr==0)
	{
		return 0;
	}
	return nbr+Somme(nbr-1);
}
int main(){
	int nbr;
	printf("Entrer un nombre : ");
	scanf("%d",&nbr);
	printf("La somme des entiers entre 0 et %d est : %d",nbr,Somme(nbr));
	return 0;
}
