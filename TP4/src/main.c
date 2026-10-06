#include <stdio.h>
#include "operator.h"
#include "fichier.h"
#include "liste.h"

void executer_exercice_4_1() {
    int n1, n2;
    char op;
    printf("\n--- Exercice 4.1 : Calcul avec opérateurs ---\n");
    printf("Entrez num1 : ");
    scanf("%d", &n1);
    printf("Entrez num2 : ");
    scanf("%d", &n2);
    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    int resultat = 0;
    switch (op) {
        case '+': resultat = somme(n1, n2); break;
        case '-': resultat = difference(n1, n2); break;
        case '*': resultat = produit(n1, n2); break;
        case '/': resultat = quotient(n1, n2); break;
        case '%': resultat = modulo(n1, n2); break;
        case '&': resultat = et_logique(n1, n2); break;
        case '|': resultat = ou_logique(n1, n2); break;
        case '~': resultat = negation(n1, n2); break;
        default: printf("Opérateur inconnu.\n"); return;
    }
    printf("Résultat : %d\n", resultat);
}

void executer_exercice_4_2() {
    int choix;
    char nom_fichier[100];
    char message[256];

    printf("\n--- Exercice 4.2 : Gestion de fichiers ---\n");
    printf("Que souhaitez-vous faire ?\n1. Lire un fichier\n2. Écrire dans un fichier\nVotre choix : ");
    scanf("%d", &choix);

    if (choix == 1) {
        printf("Entrez le nom du fichier à lire : ");
        scanf("%s", nom_fichier);
        lire_fichier(nom_fichier);
    } else if (choix == 2) {
        printf("Entrez le nom du fichier dans lequel vous souhaitez écrire : ");
        scanf("%s", nom_fichier);
        printf("Entrez le message à écrire : ");
        scanf(" %[^\n]", message);
        ecrire_dans_fichier(nom_fichier, message);
    } else {
        printf("Choix invalide.\n");
    }
}

void executer_exercice_4_7() {
    printf("\n--- Exercice 4.7 : Gestion d'une liste de couleurs ---\n");
    struct liste_couleurs ma_liste;
    init_liste(&ma_liste);

    struct couleur couleur1 = {0xFF, 0x00, 0x00, 0xFF};
    struct couleur couleur2 = {0x00, 0xFF, 0x00, 0xFF};

    insertion(&couleur1, &ma_liste);
    insertion(&couleur2, &ma_liste);

    printf("Liste des couleurs :\n");
    parcours(&ma_liste);
}

int main() {
    int exercice;
    printf("===================================\n");
    printf("        TP4 - MENU PRINCIPAL       \n");
    printf("===================================\n");
    printf("1. Exercice 4.1\n");
    printf("2. Exercice 4.2\n");
    printf("3. Exercice 4.7\n");
    printf("Choisissez l'exercice à exécuter (1, 2 ou 3) : ");
    
    if (scanf("%d", &exercice) != 1) {
        printf("Entrée invalide.\n");
        return 1;
    }

    switch (exercice) {
        case 1: executer_exercice_4_1(); break;
        case 2: executer_exercice_4_2(); break;
        case 3: executer_exercice_4_7(); break;
        default: printf("Exercice inconnu.\n"); break;
    }

    return 0;
}
