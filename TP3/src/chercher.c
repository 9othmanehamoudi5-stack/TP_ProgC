#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int taille = 100;
    int tableau[100];
    int valeurRecherchee;
    int trouve = 0;

    // Initialisation de la graine pour la génération aléatoire
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires
    for (int i = 0; i < taille; i++) {
        tableau[i] = (rand() % 200) - 50;
    }

    // Affichage du tableau initial
    printf("Tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("... (%d entiers au total)\n\n", taille);

    // Demander à l'utilisateur d'entrer l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeurRecherchee);

    // Logique de recherche dans le tableau
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == valeurRecherchee) {
            trouve = 1;
            break;
        }
    }

    // Affichage du résultat de la recherche[cite: 22]
    if (trouve) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
