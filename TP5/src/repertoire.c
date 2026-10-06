#include "repertoire.h"
#include <stdio.h>
#include <dirent.h>

void lire_dossier(const char *nom_de_dossier) {
    DIR *dir = opendir(nom_de_dossier);
    if (dir == NULL) {
        printf("Erreur : impossible d'ouvrir le dossier %s\n", nom_de_dossier);
        return;
    }

    struct dirent *entry;
    printf("Contenu du dossier %s :\n", nom_de_dossier);
    while ((entry = readdir(dir)) != NULL) {
        printf("- %s\n", entry->d_name);
    }

    closedir(dir);
}
