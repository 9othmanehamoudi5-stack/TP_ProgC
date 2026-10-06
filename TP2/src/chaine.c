#include <stdio.h>

int main() {
    char s1[] = "Hello";
    char s2[] = "World!";
    
    // 1. Calculer le nombre de caractères (longueur de s1)
    int longueur = 0;
    while (s1[longueur] != '\0') {
        longueur++;
    }
    printf("Longueur de \"%s\" = %d\n", s1, longueur);
    
    // 2. Copier une chaîne de caractères dans une autre
    char copie[50];
    int i = 0;
    while (s1[i] != '\0') {
        copie[i] = s1[i];
        i++;
    }
    copie[i] = '\0'; // Ne pas oublier d'ajouter le caractère nul à la fin
    printf("Chaine copiee = \"%s\"\n", copie);
    
    // 3. Concaténer deux chaînes de caractères (s1 + s2)
    char concat[100];
    int j = 0;
    
    // Copier la première chaîne dans le tableau de concaténation
    while (s1[j] != '\0') {
        concat[j] = s1[j];
        j++;
    }
    
    // Ajouter un espace entre les deux mots (optionnel, selon l'exemple)
    concat[j] = ' ';
    j++;
    
    // Ajouter la deuxième chaîne à la suite
    int k = 0;
    while (s2[k] != '\0') {
        concat[j] = s2[k];
        j++;
        k++;
    }
    concat[j] = '\0'; // Caractère de fin de chaîne
    
    printf("Chaine concatenee = \"%s\"\n", concat);
    
    return 0;
}
