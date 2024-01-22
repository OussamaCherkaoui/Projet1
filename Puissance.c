#include <stdio.h>
#include <math.h>

int main() {
    // Déclaration des variables
    double base, exposant, resultat;

    // Saisie de la base
    printf("Entrez la base : ");
    scanf("%lf", &base);

    // Saisie de l'exposant
    printf("Entrez l'exposant : ");
    scanf("%lf", &exposant);

    // Calcul de la puissance
    resultat = pow(base, exposant);

    // Affichage du résultat
    printf("%.2f ^ %.2f = %.2f\n", base, exposant, resultat);

    return 0;
}
