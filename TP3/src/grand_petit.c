#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int taille = 100;
    int tableau[100];

    // Initialisation de la graine pour la génération aléatoire
    srand(time(NULL));

    // 1. Remplissage du tableau de 100 entiers avec des valeurs entre 1 et 1000
    for (int i = 0; i < taille; i++) {
        tableau[i] = (rand() % 1000) + 1;
    }

    // Initialisation du max et du min avec le premier élément du tableau
    int max = tableau[0];
    int min = tableau[0];

    // 2. Utilisation d'une boucle pour parcourir le tableau et trouver le plus grand et le plus petit
    for (int i = 1; i < taille; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }

    // 3. Affichage des résultats[cite: 20]
    printf("Le numéro le plus grand est : %d\n", max);
    printf("Le numéro le plus petit est : %d\n", min);

    return 0;
}
