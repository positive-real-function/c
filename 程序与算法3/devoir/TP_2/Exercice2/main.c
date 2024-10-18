#include "tri_cocktail.h"

int main()
{
    int liste[] = {2, 5, 8, 2, 1, 9, 4, 6};
    int taille = sizeof(liste) / sizeof(liste[0]);

    afficher(liste, taille);

    triCocktail(liste, taille);

    afficher(liste, taille);

    return 0;
}
