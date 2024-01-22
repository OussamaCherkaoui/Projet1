#include <stdio.h>
#include <stdbool.h>




int ispremier(int n){
	int i;
	int p=0;
	if(n==2||n==1)
	{
		return p=0;
    }
    else{
    	for(i=2;i<n;i++)
	    {
	   	      if(n%i==0)
	   	    {
	   	    	p++;
		    }
        }
        return p;
	}
}

int main(){
	
	int nbr;
	
	printf("Entrer un nombre :");
	scanf("%d",&nbr);
	
	 if(ispremier(nbr)==0)
    {
    	printf("Le nombre est Premier");
	}
	else
	{
		printf("Le nombre est non premier");
	}
	return 0;
	
}
