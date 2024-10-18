//
// Created by 小金 on 2023/4/23.
//

#ifndef DEVOIR1_AFFICHER_H
#define DEVOIR1_AFFICHER_H

#include <stdio.h>
#include "ListesChainees.h"
#include "ListesChaineesCirculaires.h"
#include "ListesDoublementChainees.h"

//Affichage d’une liste chainée
void afficherApartirDebut(Liste *liste) {
    Element *p;
    p = liste->premier;
    while (p) {
        printf("%d->", p->nombre);
        p = p->suivant;
    }
    printf("NUll\n");
}

//Affichage d’une liste chainée circulaire
void afficherApartirDebutCir(ListeCir *liste) {
    ElementCir *p;
    int cnt=0;
    p=liste->premier;
    while (cnt!=liste->cnt) {
        printf("%d->", p->nombre);
        p = p->suivant;
        cnt++;
    }
    printf("(%d)\n",liste->premier->nombre);
}

//Affichage d’une liste doublement chainée
void afficherApartirDebutDou(ListeDou *liste) {
    ElementDou *p;
    p = liste->premier;
    while (p) {
        printf("%d->", p->nombre);
        p = p->suivant;
    }
    printf("NUll\n");
}

#endif //DEVOIR1_AFFICHER_H
