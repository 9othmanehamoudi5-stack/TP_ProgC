#include <stdio.h>

int main() {
    // Déclaration des variables a et b
    int a = 2;
    int b = 3;
    
    // Déclaration de la variable pour stocker le résultat
    int resultat = 1;
    
    // Boucle pour multiplier a par lui-même b fois
    for (int i = 0; i < b; i++) {
        resultat = resultat * a;
    }
    
    // Affichage du résultat
    printf("Le resultat de %d a la puissance %d est : %d\n", a, b, resultat);
    
    return 0;
}
