#include <stdio.h>

int max_2(int n1,int n2)
{
    int max=n1;
	if(max<=n2)
	{
		max=n2;
	}
	return max;
}
int max_4(int n1,int n2,int n3,int n4){
	int max1=max_2(n1,n2);
	int max2=max_2(n3,n4);
	printf("Le max est %d", max_2(max1,max2));
//	if(max1>=max2)
//	{
//		printf("Le max est %d",max1);
//	}
//	else{
//		printf("Le max est %d",max2);
//	}
}
int main(){
	int n1,n2,n3,n4,max;
	printf("Entrer nombre 1 : ");
	scanf("%d",&n1);
	printf("Entrer nombre 2 : ");
	scanf("%d",&n2);
	printf("Entrer nombre 3 : ");
	scanf("%d",&n3);
	printf("Entrer nombre 4 : ");
	scanf("%d",&n4);
	max_4(n1,n2,n3,n4);
		
	return 0;
}
