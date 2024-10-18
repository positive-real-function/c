#include <stdio.h>
#include <stdbool.h>

void afficher(int T[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",T[i]);
    }
    printf("\n");
}

void tri_a_bulles_optimise(int T[], int taille) {
    bool tableau_trie = true;

    for (int i = taille - 1; i >= 1; i--) {
        
        tableau_trie = true;

        for (int j = 0; j < i; j++) {
            if (T[j+1] < T[j]) {
                int temp = T[j+1];
                T[j+1] = T[j];
                T[j] = temp;
                tableau_trie = false;
            }
        }

        if (tableau_trie) {
            break;
        }
    }
}

/**
 * Le programme introduit une variable tableau_trie en interne pour indiquer，
 * si le tableau a été entièrement trié et si c'est le cas, pour mettre fin au tri.
 * L'algorithme est optimisé en vérifiant la valeur de tableau_trie à la fin de chaque boucle interne. 
 * Si elle est vraie, cela signifie que le tableau a été entièrement trié et qu'il n'est pas nécessaire de poursuivre le tri，
 * ce qui permet de sortir directement de la boucle.
 * Cela évite les comparaisons et les échanges inutiles et améliore l'efficacité de l'algorithme.
 */

/**
 *  la complexite：
 * 1.Dans le pire des cas (ordre inverse des tableaux)，
 *  la complexité temporelle du tri à bulles optimisé est toujours O(n^2).
 * 2.Mais dans le meilleur des cas (lorsque le tableau est déjà trié)，
 *  le tri à bulles optimisé a une complexité en temps de O(n). 
 * 
 */
