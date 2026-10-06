#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Utilisation : %s <nom_du_fichier>\n", argv[0]);
        return 1;
    }

    FILE *f = fopen(argv[1], "r");
    if (f == NULL) {
        printf("Erreur d'ouverture du fichier.\n");
        return 1;
    }

    char phrase[256];
    printf("Entrez la phrase que vous souhaitez rechercher : ");
    scanf(" %[^\n]", phrase);

    char ligne[512];
    int num_ligne = 1;
    printf("\nRésultats de la recherche :\n");

    while (fgets(ligne, sizeof(ligne), f) != NULL) {
        // Enlever le saut de ligne éventuel à la fin
        ligne[strcspn(ligne, "\r\n")] = 0;

        if (strstr(ligne, phrase) != NULL) {
            printf("Ligne %d, 1 fois\n", num_ligne);
        }
        num_ligne++;
    }

    fclose(f);
    return 0;
}
