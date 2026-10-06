#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int taille = 11;
    int tab_int[11];
    float tab_float[11];

    // Initialisation de la graine pour la génération aléatoire
    srand(time(NULL));

    // Déclaration des pointeurs pour parcourir les tableaux
    int *ptr_int = tab_int;
    float *ptr_float = tab_float;

    // 1. Remplissage des tableaux avec des valeurs aléatoires en utilisant les pointeurs
    for (int i = 0; i < taille; i++) {
        *(ptr_int + i) = rand() % 150;                  // Entiers aléatoires
        *(ptr_float + i) = (float)(rand() % 1000) / 100.0f; // Flottants aléatoires
    }

    // 2. Affichage des tableaux AVANT la multiplication par 3
    printf("Tableau d'entiers (avant la multiplication par 3) :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d", *(ptr_int + i));
        if (i < taille - 1) printf(", ");
    }
    printf("\n\n");

    printf("Tableau de nombres à virgule flottante (avant la multiplication par 3) :\n");
    for (int i = 0; i < taille; i++) {
        printf("%.2f", *(ptr_float + i));
        if (i < taille - 1) printf(", ");
    }
    printf("\n\n");

    // 3. Multiplication par 3 pour les éléments dont l'indice est divisible par 2 (0, 2, 4...) via les pointeurs[cite: 18]
    for (int i = 0; i < taille; i++) {
        if (i % 2 == 0) {
            *(ptr_int + i) = *(ptr_int + i) * 3;
            *(ptr_float + i) = *(ptr_float + i) * 3.0f;
        }
    }

    // 4. Affichage des tableaux APRÈS la multiplication par 3[cite: 18]
    printf("Tableau d'entiers (après la multiplication par 3) :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d", *(ptr_int + i));
        if (i < taille - 1) printf(", ");
    }
    printf("\n\n");

    printf("Tableau de nombres à virgule flottante (après la multiplication par 3) :\n");
    for (int i = 0; i < taille; i++) {
        printf("%.2f", *(ptr_float + i));
        if (i < taille - 1) printf(", ");
    }
    printf("\n");

    return 0;
}
