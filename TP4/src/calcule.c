#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Utilisation : %s <operateur> <num1> <num2>\n", argv[0]);
        return 1;
    }

    char op = argv[1][0];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);
    int resultat = 0;

    switch (op) {
        case '+': resultat = somme(num1, num2); break;
        case '-': resultat = difference(num1, num2); break;
        case '*': resultat = produit(num1, num2); break;
        case '/': resultat = quotient(num1, num2); break;
        case '%': resultat = modulo(num1, num2); break;
        case '&': resultat = et_logique(num1, num2); break;
        case '|': resultat = ou_logique(num1, num2); break;
        case '~': resultat = negation(num1, num2); break;
        default:
            printf("Opérateur inconnu.\n");
            return 1;
    }

    printf("Résultat : %d\n", resultat);
    return 0;
}
