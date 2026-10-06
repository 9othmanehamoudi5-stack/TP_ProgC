#include <stdio.h>

int main() {
    // Définition du nombre de termes n (par exemple 7)
    int n = 7;
    
    int u0 = 0;
    int u1 = 1;
    int un;
    
    printf("Suite de Fibonacci jusqu'a U%d :\n", n);
    
    // Affichage des premiers termes selon la valeur de n
    if (n >= 0) {
        printf("%d", u0);
    }
    if (n >= 1) {
        printf(", %d", u1);
    }
    
    // Boucle pour calculer et afficher les termes suivants
    int a = u0;
    int b = u1;
    
    for (int i = 2; i <= n; i++) {
        un = a + b;
        printf(", %d", un);
        a = b;
        b = un;
    }
    
    printf("\n");
    return 0;
}
