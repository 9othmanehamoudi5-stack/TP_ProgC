#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int taille = 100;
    int tableau[100];

    // Initialisation de la graine pour la génération aléatoire
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires (incluant des négatifs)
    for (int i = 0; i < taille; i++) {
        tableau[i] = (rand() % 200) - 50; // Valeurs entre -50 et 149
    }

    // Affichage du tableau non trié
    printf("Tableau non trié :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("... (%d entiers au total)\n\n", taille);

    // Algorithme du tri à bulles pour trier par ordre croissant
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    // Affichage du tableau trié par ordre croissant[cite: 21]
    printf("Tableau trié par ordre croissant :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("... (%d entiers au total)\n", taille);

    return 0;
}
