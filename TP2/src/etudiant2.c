#include <stdio.h>
#include <string.h>

// Définition de la structure pour un étudiant
struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
};

int main() {
    // Création d'un tableau de 5 structures d'étudiants[cite: 16]
    struct Etudiant etudiants[5];

    // Étudiant 1[cite: 16]
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note1 = 16.5;
    etudiants[0].note2 = 12.1;

    // Étudiant 2[cite: 16]
    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note1 = 14.0;
    etudiants[1].note2 = 14.1;

    // Étudiant 3
    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Thomas");
    strcpy(etudiants[2].adresse, "3, rue de la Republique, Paris");
    etudiants[2].note1 = 13.5;
    etudiants[2].note2 = 15.0;

    // Étudiant 4
    strcpy(etudiants[3].nom, "Bernard");
    strcpy(etudiants[3].prenom, "Lucie");
    strcpy(etudiants[3].adresse, "12, avenue Jean Jaures, Marseille");
    etudiants[3].note1 = 11.0;
    etudiants[3].note2 = 10.5;

    // Étudiant 5
    strcpy(etudiants[4].nom, "Petit");
    strcpy(etudiants[4].prenom, "Marc");
    strcpy(etudiants[4].adresse, "8, place Bellecour, Lyon");
    etudiants[4].note1 = 15.0;
    etudiants[4].note2 = 13.2;

    // Affichage des informations de tous les étudiants[cite: 16]
    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1 : %.1f\n", etudiants[i].note1);
        printf("Note 2 : %.1f\n", etudiants[i].note2);
        printf("\n");
    }

    return 0;
}
