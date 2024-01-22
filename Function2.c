#include <stdio.h>

int estimpair(int nbr)
{
	if(nbr%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main(){
	int n; 
	printf("Entrer un nombre :  ");
	scanf("%d",&n);
	if(estimpair(n))
	{
		printf("Nombre Pair");
	}
	else{
		printf("Nombre impair");
	}
	return 0;
}
