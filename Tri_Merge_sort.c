#include <stdio.h>
#include <stdlib.h>

void fusion(int T[],int g,int m, int d)
{
	int i,j,k;
	int n1=m-g+1;
	int n2=d-m;
	int tg[n1],td[n2];
	
	for(i=0;i<n1;i++)
       tg[i]=T[g+i];
    for(j=0;j<n2;j++)
       td[j]=T[m+1+j];
    
    
    i=0;
    j=0;
    k=g;
    
    while(i<n1&&j<n2)
    {
    	if(tg[i]<=td[j]){
    		T[k]=tg[i];
    		i++;
		}
		else{
			T[k]=td[i];
			j++;
		}
		k++;
	}
	while(i<n1){
		T[k]=tg[i];
		i++;
		k++;
	}
	while(j<n2){
		T[k]=td[j];
		j++;
		k++;
	}
}

void triFusion(int T[],int g, int d)
{
	if(g<d){
		int m=(g+d)/2;
		triFusion(T,g,m);
		triFusion(T,m+1,d);
		fusion(T,g,m,d);
	}
}

void affichage(int T[],int taille)
{
	int i;
	for(i=0;i<taille;i++)
	{
		printf("%d - ",T[i]);
	}
	printf("\n");
}

int main(){
	int taille=6;
	int T[]={20,12,10,35,25,0};
	printf("Tableau initial :\n");
	affichage(T,taille);
	triFusion(T,0,taille-1);
	printf("Tableau trie dans l' ordre croissant :\n");
	affichage(T,taille);
	
	return 0;
}
