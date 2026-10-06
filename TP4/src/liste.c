#include "liste.h"
#include <stdio.h>
#include <stdlib.h>

void init_liste(struct liste_couleurs *liste) {
    liste->tete = NULL;
}

void insertion(struct couleur *c, struct liste_couleurs *liste) {
    struct maillon *nouveau = (struct maillon *)malloc(sizeof(struct maillon));
    if (nouveau == NULL) return;
    nouveau->c = *c;
    nouveau->suivant = liste->tete;
    liste->tete = nouveau;
}

void parcours(struct liste_couleurs *liste) {
    struct maillon *courant = liste->tete;
    int i = 1;
    while (courant != NULL) {
        printf("Couleur %d -> R: 0x%02x, G: 0x%02x, B: 0x%02x, A: 0x%02x\n", 
               i, courant->c.r, courant->c.g, courant->c.b, courant->c.a);
        courant = courant->suivant;
        i++;
    }
}
