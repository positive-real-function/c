#include "tri_a_bulles_optimise.h"

int main()
{
    int tableau[] = {2, 5, 8, 2, 1, 9, 4, 6};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    afficher(tableau, taille);

    tri_a_bulles_optimise(tableau, taille);

    afficher(tableau, taille);

    return 0;
}
