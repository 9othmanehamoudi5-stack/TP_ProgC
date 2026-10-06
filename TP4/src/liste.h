#ifndef LISTE_H
#define LISTE_H

struct couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct maillon {
    struct couleur c;
    struct maillon *suivant;
};

struct liste_couleurs {
    struct maillon *tete;
};

void init_liste(struct liste_couleurs *liste);
void insertion(struct couleur *c, struct liste_couleurs *liste);
void parcours(struct liste_couleurs *liste);

#endif
