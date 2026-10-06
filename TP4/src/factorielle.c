#include <stdio.h>

int factorielle(int num) {
    if (num == 0) {
        printf("fact(0): 1\n");
        return 1;
    } else {
        int valeur = num * factorielle(num - 1);
        printf("fact(%d): %d\n", num, valeur);
        return valeur;
    }
}

int main() {
    int n = 5;
    printf("Calcul de la factorielle de %d :\n", n);
    factorielle(n);
    return 0;
}
