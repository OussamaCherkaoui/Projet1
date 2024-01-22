#include <stdio.h>

void inserer(int T[],int pos,int nbr){
	int i;
	for(i=6;i>pos;i--)
	{
		T[i]=T[i-1];
	}
	
	T[pos]=nbr;
	
	for(i=0;i<=6;i++)
	{
		printf("%d\n",T[i]);
	}
}
int main()
{
	int nbr,pos;
	int T[]={1,2,3,4,5,6};
	printf("QUELLE EST LE NOMBRE QUE VOULEZ-VOUZ INSERER ? : ");
	scanf("%d",&nbr);
	
	printf("A QUELLE POSITION VOULEZ-VOUS INSERER  :  ");
	scanf("%d",&pos);
	
	inserer(T,pos,nbr);
	
	
	return 0;
}
