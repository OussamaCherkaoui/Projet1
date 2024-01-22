#include <stdio.h>
#include <math.h>

int carre(int n)
{
    int p = pow(n, 2);
    return p;
}
void Afficher_Carre(int T[], int taille)
{
	int i;
    for (i = 0; i < taille; i++)
    {
        printf("\nle Carre est %d\n", carre(T[i]));
    }
}
void remplissage(int T[], int taille)
{
    int i;
    for (i = 0; i < taille; i++)
    {
        printf("T[%d]= ", i);
        scanf("%d", &T[i]);
    }
}
void affichage(int T[], int taille)
{
	int i;
    for ( i = 0; i < taille; i++)
    {
        printf("%d ", T[i]);
    }
}
int main()
{
    int taille;
    printf("entrer la taille du tableau: ");
    scanf("%d", &taille);
    int T[taille];
    remplissage(T, taille);
    affichage(T, taille);
    Afficher_Carre(T, taille);
}
