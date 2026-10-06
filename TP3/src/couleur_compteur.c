#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Définition de la structure pour stocker les détails d'une couleur (R, G, B, A)
struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

int main() {
    int taille = 100;
    struct Couleur tableau[100];

    // Définition de quelques couleurs de référence pour alimenter le tableau avec des répétitions
    struct Couleur palette[4] = {
        {0xff, 0x23, 0x23, 0x45},
        {0xff, 0x00, 0x23, 0x12},
        {0x12, 0x34, 0x56, 0x78},
        {0xaa, 0xbb, 0xcc, 0xdd}
    };

    // Initialisation de la graine aléatoire et remplissage du tableau de 100 couleurs
    srand(time(NULL));
    for (int i = 0; i < taille; i++) {
        int index = rand() % 4; // On pioche dans la palette pour créer des occurrences multiples
        tableau[i] = palette[index];
    }

    // Tableaux pour stocker les couleurs distinctes et leur nombre d'occurrences
    struct Couleur distinctes[100];
    int occurrences[100];
    int nb_distinctes = 0;

    // Logique pour compter les couleurs distinctes et leurs occurrences[cite: 25]
    for (int i = 0; i < taille; i++) {
        int trouve = -1;
        for (int j = 0; j < nb_distinctes; j++) {
            if (distinctes[j].r == tableau[i].r &&
                distinctes[j].g == tableau[i].g &&
                distinctes[j].b == tableau[i].b &&
                distinctes[j].a == tableau[i].a) {
                trouve = j;
                break;
            }
        }

        if (trouve != -1) {
            occurrences[trouve]++;
        } else {
            distinctes[nb_distinctes] = tableau[i];
            occurrences[nb_distinctes] = 1;
            nb_distinctes++;
        }
    }

    // Affichage final des couleurs distinctes avec leur nombre d'occurrences[cite: 25]
    printf("Affichage des couleurs distinctes et de leurs occurrences :\n\n");
    for (int i = 0; i < nb_distinctes; i++) {
        printf("0x%02x 0x%02x 0x%02x 0x%02x : %d\n",
               distinctes[i].r,
               distinctes[i].g,
               distinctes[i].b,
               distinctes[i].a,
               occurrences[i]);
    }

    return 0;
}
