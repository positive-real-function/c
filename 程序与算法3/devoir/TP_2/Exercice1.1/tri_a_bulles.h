#include<stdio.h>
#include <stdbool.h>

void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

void afficher(int T[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",T[i]);
    }
    printf("\n");
}



void tri_a_bulles(int T[], int taille) {
    for (int i = taille - 1; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            if (T[j+1] < T[j]) {
                int temp = T[j+1];
                T[j+1] = T[j];
                T[j] = temp;
            }
        }
    }
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
