#include <stdio.h>

int main() {
    // 1. Déclaration des tableaux pour 5 étudiants
    char noms_prenoms[5][50] = {
        "Dupont Jean",
        "Martin Sophie",
        "Durand Thomas",
        "Bernard Lucie",
        "Petit Marc"
    };
    
    char adresses[5][100] = {
        "10 rue de Paris, 75001 Paris",
        "25 avenue Victor Hugo, 69002 Lyon",
        "3 boulevard Carnot, 31000 Toulouse",
        "12 impasse des Lilas, 44000 Nantes",
        "8 place Bellecour, 69002 Lyon"
    };
    
    float notes_c[5] = { 14.5, 12.0, 16.5, 10.0, 15.0 };
    float notes_se[5] = { 13.0, 15.5, 11.0, 9.5, 14.0 };
    
    // 2. Utilisation d'une boucle pour parcourir et afficher les informations
    printf("=== LISTE DES ETUDIANTS ===\n\n");
    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("  Nom et Prénom : %s\n", noms_prenoms[i]);
        printf("  Adresse       : %s\n", adresses[i]);
        printf("  Note en C     : %.2f\n", notes_c[i]);
        printf("  Note en SE    : %.2f\n", notes_se[i]);
        printf("-----------------------------------\n");
    }
    
    return 0;
}
