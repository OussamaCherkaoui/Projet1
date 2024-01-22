#include <stdio.h>


int main(){
	
	int a,b,c,max;
	
	printf("Entrer nombre 1 :");
	scanf("%d",&a);
	
	printf("Entrer nombre 2 :");
	scanf("%d",&b);
	
	printf("Entrer nombre 3 :");
	scanf("%d",&c);
	
	max=a;
	if(b>max){
		max=b;
	}
	
	if(c>max)
	{
		max=c;
	}
	printf("Le plus grand nombre est : %d",max);
    
    return 0;
	
}
