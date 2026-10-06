#include "fichier.h"
#include <stdio.h>
#include <stdlib.h>

void lire_fichier(const char *nom_de_fichier) {
    FILE *f = fopen(nom_de_fichier, "r");
    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", nom_de_fichier);
        return;
    }
    char buffer[256];
    printf("Contenu du fichier %s :\n", nom_de_fichier);
    while (fgets(buffer, sizeof(buffer), f) != NULL) {
        printf("%s", buffer);
    }
    fclose(f);
}

void ecrire_dans_fichier(const char *nom_de_fichier, const char *message) {
    FILE *f = fopen(nom_de_fichier, "w");
    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s pour écriture\n", nom_de_fichier);
        return;
    }
    fprintf(f, "%s\n", message);
    fclose(f);
    printf("Le message a été écrit dans le fichier %s.\n", nom_de_fichier);
}
