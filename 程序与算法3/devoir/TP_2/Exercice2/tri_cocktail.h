#include <stdio.h>

void afficher(int T[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", T[i]);
    }
    printf("\n");
}

void triCocktail(int liste[], int taille)
{
    int debut = 0;
    int fin = taille - 1;
    int permutation = 1;

    while (permutation)
    {
        permutation = 0;

        for (int i = debut; i < fin; i++)
        {
            if (liste[i] > liste[i + 1])
            {
                int temp = liste[i];
                liste[i] = liste[i + 1];
                liste[i + 1] = temp;
                permutation = 1;
            }
        }

        if (!permutation)
        {
            break;
        }

        permutation = 0;

        for (int i = fin - 1; i >= debut; i--)
        {
            if (liste[i] > liste[i + 1])
            {
                int temp = liste[i];
                liste[i] = liste[i + 1];
                liste[i + 1] = temp;
                permutation = 1;
            }
        }

        debut++;
        fin--;
    }
}

