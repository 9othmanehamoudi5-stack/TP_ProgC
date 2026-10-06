#include "repertoire.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>

// --- Exercice 5.1 : Liste simple ---
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

// --- Exercice 5.2 : Liste récursive ---
void lire_dossier_recursif(const char *nom_de_dossier) {
    DIR *dir = opendir(nom_de_dossier);
    if (dir == NULL) return;

    struct dirent *entry;
    char chemin[1024];

    while ((entry = readdir(dir)) != NULL) {
        // Ignorer les dossiers spéciaux "." et ".."
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0)
            continue;

        printf("%s/%s\n", nom_de_dossier, entry->d_name);

        // Construire le chemin complet
        snprintf(chemin, sizeof(chemin), "%s/%s", nom_de_dossier, entry->d_name);
        
        struct stat s;
        if (stat(chemin, &s) == 0 && S_ISDIR(s.st_mode)) {
            lire_dossier_recursif(chemin); // Appel récursif pour les sous-dossiers
        }
    }
    closedir(dir);
}

// --- Exercice 5.3 : Liste itérative ---
void lire_dossier_iteratif(const char *nom_de_dossier) {
    // Approche itérative simple avec une file d'attente de dossiers à traiter
    char file_dossiers[100][1024];
    int debut = 0, fin = 0;

    // Ajouter le dossier initial à la file
    snprintf(file_dossiers[fin++], 1024, "%s", nom_de_dossier);

    while (debut < fin) {
        char courant[1024];
        snprintf(courant, 1024, "%s", file_dossiers[debut++]);

        DIR *dir = opendir(courant);
        if (dir == NULL) continue;

        struct dirent *entry;
        while ((entry = readdir(dir)) != NULL) {
            if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0)
                continue;

            char chemin[1024];
            snprintf(chemin, sizeof(chemin), "%s/%s", courant, entry->d_name);
            printf("%s\n", chemin);

            struct stat s;
            if (stat(chemin, &s) == 0 && S_ISDIR(s.st_mode)) {
                if (fin < 100) { // Sécurité pour éviter de dépasser la taille de la file
                    snprintf(file_dossiers[fin++], 1024, "%s", chemin);
                }
            }
        }
        closedir(dir);
    }
}
