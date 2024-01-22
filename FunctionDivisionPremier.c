#include <stdio.h>
#include <stdbool.h>


bool ispremier(int n){
	
	int i;
	if(n==2||n==1)
	{
		return true;
    }
    else
	{
    	for(i=2;i<n;i++)
	    {
	   	    if(n%i==0)
	   	    {
	   		    return false;
	   		    break;
		    }
		    else{
		        return true;	
		    }
        }
	}
}

void divdedby(float a,float b)
{
	float result;
	if(b==0)
	{
		printf("Impossible de diviser par 0");
	}
	else
	{
        result=a/b;		
	
	    if(ispremier(result))
	    {
		   printf("True\n");
	    }
	    else
	    {
		    printf("False\n");
	    }
	
	    printf("La division de %.f/%.f=%.f",a,b,result);
	}
}

int main(){
	float a,b;
	
	printf("Entrer a :");
	scanf("%f",&a);
	printf("Entrer b :");
	scanf("%f",&b);
	
	divdedby(a,b);
	return 0;
}
