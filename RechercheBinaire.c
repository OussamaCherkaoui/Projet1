#include <stdio.h>

// Fonction de recherche binaire
int rechercheBinaire(int tableau[], int taille, int cible) {
    int debut = 0;
    int fin = taille - 1;

    while (debut <= fin) {
        int milieu = debut + (fin - debut) / 2;

        // Si la cible est présente au milieu
        if (tableau[milieu] == cible)
            return milieu;

        // Si la cible est plus petite, ignorez la moitié droite
        else if (tableau[milieu] > cible)
            fin = milieu - 1;

        // Sinon, ignorez la moitié gauche
        else
            debut = milieu + 1;
    }

    // Si la cible n'est pas présente dans le tableau
    return -1;
}

int main() {
    int tableau[] = {11, 22, 25, 34, 64, 90};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    int cible = 25;
    int i;

    printf("Tableau : ");
    for (i = 0; i < taille; i++) {
        printf("%d ",tableau[i]);
    }
    printf("\n");
     int resultat = rechercheBinaire(tableau, taille, cible);

    if (resultat != -1)
        printf("La cible %d se trouve a la position %d.\n", cible, resultat);
    else
        printf("La cible %d n'est pas présente dans le tableau.\n", cible);

    return 0;   
}
