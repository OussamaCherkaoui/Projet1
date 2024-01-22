#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int age;
    printf("Entrer l' age de l'enfant : \n");
    scanf("%d",&age);
    
    if(age==6||age==7)
    {
    	printf("Poussin");
    }
    else if(age==8||age==9)
    {
    	printf("Pupille");
	}
	else if(age==10||age==11)
	{
		printf("Minime");
	}
    else if(age>=12&&age<=18)
    {
    	printf("Cadet");
	}
    else
	{
    	printf("Cette age est hors liste");
	}
    
	return 0;
}
