#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(){
	int mois;
	
	printf("Quelle est le mois que voulez-vous afficher ? :\n");
	scanf("%d",&mois);
	
	switch(mois)
	{
		case 1:
			printf("JANVIER");
			break;
		case 2:
			printf("FEVRIER");
			break;
		case 3:
			printf("MARS");
			break;
		case 4:
			printf("AVRIL");
			break;
		case 5:
			printf("MAI");
			break;
		case 6:
			printf("JUIN");
			break;
		case 7:
			printf("JULLIET");
			break;
		case 8:
			printf("AOUT");
			break;
		case 9:
			printf("SEPTEMBRE");
			break;
		case 10:
			printf("OCTOBRE");
			break;
		case 11:
			printf("NOVEMBRE");
			break;
		case 12: 
		    printf("DECEMBRE");
			break;
		default:
			printf("ERREUR 404");
			break;
	}

	return 0;
}
