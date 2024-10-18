//
// Created by 小金 on 2023/4/12.
//

#ifndef DEVOIR1_LISTESCHAINEESCIRCULAIRES_H
#define DEVOIR1_LISTESCHAINEESCIRCULAIRES_H

#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct ElementCir ElementCir;
struct ElementCir {
    int nombre;
    ElementCir *suivant;
};

typedef struct ListeCir ListeCir;
struct ListeCir {
    ElementCir *premier; // pointeur vers le premier élément de la liste
    int cnt;   // compteur des éléments de la liste
};


//initialisation
ListeCir *initialisationCir() {
    ListeCir *liste = (ListeCir *) malloc(sizeof(ListeCir));

    if (liste == NULL) {
        exit(EXIT_FAILURE);
    }

    liste->premier = NULL;
    liste->cnt = 0;

    return liste;
}

//ajout au debut de la liste
void inserTeteCir(ListeCir *liste, int nvNombre) {
    ElementCir *nouveau = malloc(sizeof(*nouveau));
    if (nouveau == NULL) {
        exit(EXIT_FAILURE);
    }

    if (liste->premier == NULL) {
        nouveau->suivant = nouveau;
        nouveau->nombre = nvNombre;
        liste->premier = nouveau;
        liste->cnt += 1;
    } else {
        nouveau->suivant = liste->premier;
        nouveau->nombre = nvNombre;
        ElementCir *actuel = liste->premier;
        while (actuel->suivant != liste->premier) {
            actuel = actuel->suivant;
        }
        liste->premier = nouveau;
        actuel->suivant = liste->premier;
        liste->cnt += 1;
    }
}


//ajout a la fin de la liste
void inserQueueCir(ListeCir *liste, int nvNombre) {
    if (liste->premier == NULL) {
        printf("\nLa liste est vide\n");
        inserTeteCir(liste, nvNombre);
    }

    ElementCir *nouveau = (ElementCir *) malloc(sizeof(ElementCir));
    if (nouveau == NULL) {
        printf("\nerreur d'allocation mémoire\n");
        exit(0);
    }
    nouveau->nombre = nvNombre;
    nouveau->suivant = liste->premier;

    ElementCir *actuel = liste->premier;
    while (actuel->suivant != liste->premier) {
        actuel = actuel->suivant;
    }
    actuel->suivant = nouveau;
    liste->cnt++;
}

//ajout a la Ième position
void inserPosCir(ListeCir *liste, int v, int i) {
    if (liste->premier == NULL || i == 0) {
        inserTeteCir(liste, v);
    } else {
        if (i < liste->cnt) {
            ElementCir *nouveau = (ElementCir *) malloc(sizeof(ElementCir));
            if (nouveau == NULL) {
                printf("\nerreur d'allocation mémoire\n");
                exit(0);
            }
            ElementCir *actuel = liste->premier;
            for (int x = 1; x < i; x++) {

                actuel = actuel->suivant;
            }
            nouveau->nombre = v;
            nouveau->suivant = actuel->suivant;
            actuel->suivant = nouveau;
            liste->cnt += 1;
        } else {
//            printf("la posisition est plus grand que le nombre des éléments --> inserQueue");
            inserQueueCir(liste, v);
        }
    }
}

//retrait au debut de la liste
void suppTeteCir(ListeCir *liste) {
    if (liste->premier == NULL) {
        printf("\nLa liste est vide \n");
        exit(0);
    }

    ElementCir *suppE = liste->premier;
    ElementCir *actuel = liste->premier;
    while (actuel->suivant != liste->premier) {
        actuel = actuel->suivant;
    }
    liste->premier = liste->premier->suivant;
    actuel->suivant = liste->premier;
    free(suppE);
    liste->cnt--;
}

//retrait a la fin de la liste
void suppQueueCir(ListeCir *liste) {
    /* verification que la liste n'est pas vide*/
    if (liste->premier == NULL) {
        printf("\nLa liste est vide\n");
        exit(0);
    }
    /* suppression de le dernier élément de la liste */
    if (liste->cnt == 1)
        suppTeteCir(liste);
    else {

        ElementCir *actuel = liste->premier;
        while (actuel->suivant->suivant != liste->premier) {
            actuel = actuel->suivant;
        }
        free(actuel->suivant);
        actuel->suivant = liste->premier;
        liste->cnt--;
    }
}

//retrait à la Ième retrait
void suppElemPosCir(ListeCir *liste, int i) {
    if (liste->premier == NULL && i < 1) {
        printf("\n La liste est vide\n");
        exit(0);
    }
    if (liste->cnt == 1)
        suppTeteCir(liste);
    ElementCir *avant = liste->premier;
    for (int x = 1; x < i; x++)
        avant = avant->suivant;
    ElementCir *suppElem = avant->suivant;
    avant->suivant = suppElem->suivant;
    free(suppElem);
    liste->cnt--;
}


#endif //DEVOIR1_LISTESCHAINEESCIRCULAIRES_H
