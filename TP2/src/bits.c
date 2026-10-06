#include <stdio.h>

int main() {
    // Déclaration et initialisation de la variable entière d
    unsigned int d = 0x10001000; // Tu peux modifier cette valeur pour tester
    
    // Extraction du 4ème bit de gauche (sur 32 bits, position 28)
    int bit4 = (d >> 28) & 1;
    
    // Extraction du 20ème bit de gauche (sur 32 bits, position 12)
    int bit20 = (d >> 12) & 1;
    
    // Vérification si les deux bits sont à 1
    if (bit4 == 1 && bit20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}
