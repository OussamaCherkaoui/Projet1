#include <stdio.h>

int factoriel(int nbr)
{
    int i;
	int factoriel=1;
	for(i=1;i<=nbr;i++)
	{
	    factoriel=factoriel*i;		
	}
	return factoriel;
}
int main(){
	
	int nbr;
	printf("Entrer un nombre :");
	scanf("%d",&nbr);
	
	printf("Le factoriel est %d",factoriel(nbr));
	
	return 0;
}
