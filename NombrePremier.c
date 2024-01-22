#include <stdio.h>
#include <stdbool.h>

int main(){
	
	int n,i;
	
	
	printf("Entrer un nombre :");
	scanf("%d",&n);
	
	if(n==2||n==1)
	{
		premier=true;
    }
    else{
    	for(i=2;i<n;i++)
	    {
		
	   	     if(n%i==0)
	   	    {
	   		    premier=false;
	   		    break;
		    }
		    else{
		        premier=true;	
		    }
        }
	}
	
    if(premier==true)
    {
    	printf("Le nombre est Premier");
	}
	else
	{
		printf("Le nombre est non premier");
	}
	return 0;
}
