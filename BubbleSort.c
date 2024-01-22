#include <stdio.h>

// Fonction pour trier un tableau avec l'algorithme de tri à bulles
void triBulles(int tableau[], int taille) {
    int temp,i,j;
    for (i=0;i<taille-1;i++) {
        for (j=0;j<taille-i-1;j++) {
            i// Comparaison des éléments adjacents
            if (tableau[j]>tableau[j+1]) {
                // Échange si l'élément actuel est plus grand que l'élément suivant
                temp=tableau[j];
                tableau[j]=tableau[j+1];
                tableau[j+1]=temp;
            }
        }
    }
}

// Fonction pour afficher un tableau
void afficherTableau(int tableau[],int taille) {
	int i;
    for (i=0;i<taille;i++) {
        printf("%d ",tableau[i]);
    }
    printf("\n");
}

int main() {
    int tableau[]={64, 34, 25, 12, 22, 11, 90};
    int taille=sizeof(tableau)/sizeof(tableau[0]);

    printf("Tableau original : ");
    afficherTableau(tableau, taille);

    // Appel de la fonction de tri à bulles
    triBulles(tableau, taille);

    printf("Tableau trié : ");
    afficherTableau(tableau, taille);

    return 0;
}
