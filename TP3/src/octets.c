#include <stdio.h>

// Fonction générique pour afficher les octets d'une variable en hexadécimale
void afficher_octets(unsigned char *ptr, size_t taille) {
    for (size_t i = 0; i < taille; i++) {
        printf("%02x ", ptr[i]);
    }
    printf("\n");
}

int main() {
    // Déclaration des variables de chaque type requis
    short s = 0x0203;
    int i = 0x01020304;
    long int li = 0x0102030405060708L;
    float f = 1.2345f;
    double d = 1.23456789;
    long double ld = 1.23456789L;

    // Affichage des octets pour chaque type en utilisant l'adresse et les pointeurs
    printf("Octets de short :\n");
    afficher_octets((unsigned char *)&s, sizeof(s));

    printf("\nOctets de int :\n");
    afficher_octets((unsigned char *)&i, sizeof(i));

    printf("\nOctets de long int :\n");
    afficher_octets((unsigned char *)&li, sizeof(li));

    printf("\nOctets de float :\n");
    afficher_octets((unsigned char *)&f, sizeof(f));

    printf("\nOctets de double :\n");
    afficher_octets((unsigned char *)&d, sizeof(d));

    printf("\nOctets de long double :\n");
    afficher_octets((unsigned char *)&ld, sizeof(ld));

    return 0;
}
