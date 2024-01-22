#include <stdio.h>

float addition(float a, float b)
{
	float result;
	if(b==0)
	{
		printf("Desolé, Vous ne pouvez pas diviser par 0");
	}
	else
	{
		result=a/b;
	}
	return result;
}

float sousstraction(float a,float b)
{
	float result;
	return result=a-b;
}

float multiplication(float a,float b)
{
	float result;
	return result=a*b;
}
int main(){
	
	float a,b;
	int choix;
	
	printf("Voila le menu choisissez l' operation que voulez-vous utiliser ?\n 1-Addition . \n2-Sousstraction . \n3-Multiplication .\n");
	scanf("%d",&choix);
	
	printf("Entrer a:");
	scanf("%f",&a);
	
	printf("Entrer b:");
	scanf("%f",&b);
	
	switch(choix)
	{
		case 1: 
		    printf("L' adition %.2f/%.2f=%.2f",a,b,addition(a,b));
	        break;
		case 2: 
		    printf("La sousstraction %.2f-%.2f=%.2f",a,b,sousstraction(a,b));
	        break;
	    case 3: 
		    printf("La multiplication %.2f*%.2f=%.2f",a,b,multiplication(a,b));
	        break;
		default: 
		    printf("CHOIX INVALID !!");
		    break;
	}
	return 0;
}
