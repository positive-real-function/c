#include "tri_a_bulles.h"

int main()
{

    // Ex1
    int tableau[] = {2, 5, 8, 2, 1, 9, 4, 6};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    afficher(tableau, taille);

    tri_a_bulles(tableau, taille);

    afficher(tableau, taille);
}
