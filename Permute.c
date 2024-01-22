#include <stdio.h>

int permute(int n1,int n2)
{
	int temp=n1;
	n1=n2;
	n2=temp;
	printf("A :%d    ",n1);
	printf("B :%d",n2);
}
int main()
{
	int a,b;
	
	printf("Entrer A :");
	scanf("%d",&a);
	printf("Entrer B :");
	scanf("%d",&b);
	
	permute(a,b);
	
	return 0;
}
