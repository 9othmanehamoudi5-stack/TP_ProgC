#include <stdio.h>

// Définition de la structure pour une couleur RGBA
struct CouleurRGBA {
    unsigned char rouge;
    unsigned char vert;
    unsigned char bleu;
    unsigned char alpha;
};

int main() {
    // Création d'un tableau de 10 structures pour stocker 10 couleurs différentes
    struct CouleurRGBA couleurs[10];

    // Initialisation des couleurs en utilisant la notation hexadécimale
    // Couleur 1 (Exemple de l'énoncé)
    couleurs[0].rouge = 0xef; // 239
    couleurs[0].vert  = 0x78; // 120
    couleurs[0].bleu  = 0x12; // 18
    couleurs[0].alpha = 0xff; // 255

    // Couleur 2
    couleurs[1].rouge = 0x2c; // 44
    couleurs[1].vert  = 0xc8; // 200
    couleurs[1].bleu  = 0x64; // 100
    couleurs[1].alpha = 0xff; // 255

    // Couleur 3
    couleurs[2].rouge = 0xff;
    couleurs[2].vert  = 0x00;
    couleurs[2].bleu  = 0x00;
    couleurs[2].alpha = 0xff;

    // Couleur 4
    couleurs[3].rouge = 0x00;
    couleurs[3].vert  = 0xff;
    couleurs[3].bleu  = 0x00;
    couleurs[3].alpha = 0xff;

    // Couleur 5
    couleurs[4].rouge = 0x00;
    couleurs[4].vert  = 0x00;
    couleurs[4].bleu  = 0xff;
    couleurs[4].alpha = 0xff;

    // Couleur 6
    couleurs[5].rouge = 0xab;
    couleurs[5].vert  = 0xcd;
    couleurs[5].bleu  = 0xef;
    couleurs[5].alpha = 0x80;

    // Couleur 7
    couleurs[6].rouge = 0x11;
    couleurs[6].vert  = 0x22;
    couleurs[6].bleu  = 0x33;
    couleurs[6].alpha = 0xff;

    // Couleur 8
    couleurs[7].rouge = 0x55;
    couleurs[7].vert  = 0x66;
    couleurs[7].bleu  = 0x77;
    couleurs[7].alpha = 0x7f;

    // Couleur 9
    couleurs[8].rouge = 0x88;
    couleurs[8].vert  = 0x99;
    couleurs[8].bleu  = 0xaa;
    couleurs[8].alpha = 0xff;

    // Couleur 10
    couleurs[9].rouge = 0xbb;
    couleurs[9].vert  = 0xcc;
    couleurs[9].bleu  = 0xdd;
    couleurs[9].alpha = 0x3f;

    // Affichage des valeurs de chaque composant pour chaque couleur
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("  Rouge : %d\n", couleurs[i].rouge);
        printf("  Vert  : %d\n", couleurs[i].vert);
        printf("  Bleu  : %d\n", couleurs[i].bleu);
        printf("  Alpha : %d\n", couleurs[i].alpha);
        printf("\n");
    }

    return 0;
}
