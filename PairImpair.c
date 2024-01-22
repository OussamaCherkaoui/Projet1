#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int nbr;
    printf("Entrer le nombre : \n");
    scanf("%d",&nbr);
    
    if(nbr%2==0)
    {
    	printf("Le nombre que vous avez entrer est pair");
	}
	else
	{
		printf("Le nombre que vous avez entrer est impair");
	}
	return 0;
}
