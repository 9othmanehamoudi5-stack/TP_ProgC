#include <stdio.h>

int main() {
    double pi = 3.14159;
    double rayon = 6.0;

    double aire = pi * rayon * rayon;
    double perimetre = 2 * pi * rayon;

    printf("L'aire du cercle = %f\n", aire);
    printf("Le perimetre du cercle = %f\n", perimetre);

    return 0;
}
