#include <stdio.h>

// Fonction de recherche lin�aire
int rechercheLineaire(int tableau[], int taille, int cible) {
	int i;
    for (i = 0; i < taille; i++) {
        if (tableau[i] == cible) {
            // La cible a �t� trouv�e, retourne la position
            return i;
        }
    }

    // La cible n'a pas �t� trouv�e dans le tableau
    return -1;
}

int main() {
    int tableau[] = {11, 22, 25, 34, 64, 90};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    int cible = 25;
    int i;
    
    printf("Tableau : ");
    for (i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    int resultat = rechercheLineaire(tableau, taille, cible);

    if (resultat != -1)
        printf("La cible %d se trouve a la position %d.\n", cible, resultat);
    else
        printf("La cible %d n'est pas presente dans le tableau.\n", cible);

    return 0;
}
