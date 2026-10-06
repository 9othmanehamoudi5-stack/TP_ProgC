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

    // 1. Remplissage du tableau avec des valeurs aléatoires
    for (int i = 0; i < taille; i++) {
        tableau[i] = (rand() % 200) - 50;
    }

    // Tri du tableau par ordre croissant (nécessaire pour la recherche dichotomique)
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    // 2. Affichage du tableau trié
    printf("Tableau trié :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("... (%d entiers au total)\n\n", taille);

    // 3. Demander à l'utilisateur d'entrer l'entier à chercher[cite: 23]
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeurRecherchee);

    // 4. Implémentation de l'algorithme de recherche dichotomique[cite: 23]
    int debut = 0;
    int fin = taille - 1;

    while (debut <= fin) {
        int milieu = debut + (fin - debut) / 2;

        if (tableau[milieu] == valeurRecherchee) {
            trouve = 1;
            break;
        }
        if (tableau[milieu] < valeurRecherchee) {
            debut = milieu + 1; // Chercher dans la moitié droite
        } else {
            fin = milieu - 1;   // Chercher dans la moitié gauche
        }
    }

    // 5. Affichage du résultat[cite: 23]
    if (trouve) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
