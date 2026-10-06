#include <stdio.h>
#include "fichier.h"

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
};

int main() {
    struct Etudiant etudiants[5];
    char ligne[256];

    for (int i = 0; i < 5; i++) {
        printf("Entrez les détails de l'étudiant %d :\n", i + 1);
        printf("Nom : ");
        scanf("%s", etudiants[i].nom);
        printf("Prénom : ");
        scanf("%s", etudiants[i].prenom);
        printf("Adresse : ");
        scanf(" %[^\n]", etudiants[i].adresse);
        printf("Note 1 : ");
        scanf("%f", &etudiants[i].note1);
        printf("Note 2 : ");
        scanf("%f", &etudiants[i].note2);
        printf("\n");
    }

    FILE *f = fopen("etudiant.txt", "w");
    if (f == NULL) {
        printf("Erreur lors de l'ouverture du fichier etudiant.txt\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        fprintf(f, "Nom : %s, Prénom : %s, Adresse : %s, Note 1 : %.1f, Note 2 : %.1f\n",
                etudiants[i].nom, etudiants[i].prenom, etudiants[i].adresse,
                etudiants[i].note1, etudiants[i].note2);
    }
    fclose(f);

    printf("Les détails des étudiants ont été enregistrés dans le fichier etudiant.txt.\n");
    return 0;
}
