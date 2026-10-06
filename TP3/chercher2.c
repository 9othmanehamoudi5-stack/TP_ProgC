#include <stdio.h>

int main() {
    // 1. Déclaration du tableau de 10 phrases
    const char *phrases[10] = {
        "Bonjour, comment ca va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journee.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent etre deroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de donnees sont importantes.",
        "Programmer en C, c'est genial."
    };

    // Phrase que l'on souhaite rechercher (vous pouvez modifier cette variable pour tester)
    const char *phraseRecherchee = "La programmation en C est amusante.";
    // Essayez aussi avec : "Je prefere le Python." pour tester le cas "Phrase non trouvee"

    int trouve = 0;

    // 2. Parcourir chaque phrase du tableau[cite: 26]
    for (int i = 0; i < 10; i++) {
        int j = 0;

        // 3. Comparaison caractère par caractère sans fonction externe[cite: 26]
        while (phrases[i][j] != '\0' && phraseRecherchee[j] != '\0' && phrases[i][j] == phraseRecherchee[j]) {
            j++;
        }

        // Vérifier si la fin des deux chaînes a été atteinte simultanément (correspondance parfaite)[cite: 26]
        if (phrases[i][j] == '\0' && phraseRecherchee[j] == '\0') {
            trouve = 1;
            break;
        }
    }

    // 4. Affichage du résultat selon les consignes[cite: 26]
    if (trouve) {
        printf("Phrase trouvee\n");
    } else {
        printf("Phrase non trouvee\n");
    }

    return 0;
}
