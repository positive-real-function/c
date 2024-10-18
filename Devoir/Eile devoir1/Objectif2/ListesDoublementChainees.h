//
// Created by 小金 on 2023/4/12.
//

#ifndef DEVOIR1_LISTESDOUBLEMENTCHAINEES_H
#define DEVOIR1_LISTESDOUBLEMENTCHAINEES_H

#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>

//ElementDou
typedef struct ElementDou {
    int nombre;
    struct ElementDou *suivant;
    struct ElementDou *precedent;
} ElementDou;

//controle
typedef struct ListeDou {
    ElementDou *premier;
    ElementDou *dernier;
    int cnt;
} ListeDou;

//initialisation
ListeDou *initialisationDou() {
    ListeDou *liste = (ListeDou *) malloc(sizeof(ListeDou));
    if (liste == NULL) {
        exit(EXIT_FAILURE);
    }
    liste->premier = NULL;
    liste->dernier = NULL;
    liste->cnt = 0;

    return liste;
}

//1. Ajout au début de la liste
void inserTeteDou(ListeDou *liste, int nvNombre) {
    ElementDou *nouveau = (ElementDou *) malloc(sizeof(ElementDou));
    if (nouveau == NULL) {
        printf("erreur d'allocation mémoire\\n");
        exit(0);
    }
    nouveau->nombre = nvNombre;
    //如果此列表为空
    if (liste->premier == NULL && liste->dernier == NULL) {
        //我们将新元素指向 NULL（上一项）和 NULL（下一项）
        nouveau->suivant = NULL;
        nouveau->precedent = NULL;
        //我们将列表的头部和末尾指向我们的新项目
        liste->premier = nouveau;
        liste->dernier = nouveau;
    } else {
        //新结点后放第一个元素地址
        nouveau->suivant = liste->premier;
        //新结点前放NULL
        nouveau->precedent = NULL;
        //第一个结点前放新结点地址
        liste->premier->precedent = nouveau;
        //我们将列表的头部指向我们的新结点
        liste->premier = nouveau;
    }
    liste->cnt += 1;
}

//1. Ajout à la fin de la liste
void inserQueueDou(ListeDou *liste, int nvNombre) {
    ElementDou *nouveau = (ElementDou *) malloc(sizeof(ElementDou));
    if (nouveau == NULL) {
        printf("erreur d'allocation mémoire\\n");
        exit(0);
    }
    nouveau->nombre = nvNombre;
    if (liste->premier == NULL && liste->dernier == NULL) {
        nouveau->suivant = NULL;
        nouveau->precedent = NULL;
        liste->premier = nouveau;
        liste->dernier = nouveau;
    } else {
        nouveau->suivant = NULL; //新结点后放NULL
        nouveau->precedent = liste->dernier; //新结点前放上一个最后一个结点
        liste->dernier->suivant = nouveau;
        liste->dernier = nouveau; //头结点后放新结点
    }
    liste->cnt += 1;
}

//1. Ajout à la ième position depuis la tête de la liste
void inserPosDou(ListeDou *liste, int nvNombre, int i) {
    ElementDou *nouveau = (ElementDou *) malloc(sizeof(ElementDou));
    nouveau->nombre = nvNombre;
    if (liste->premier == NULL && liste->dernier == NULL) {
        nouveau->suivant = NULL;
        nouveau->precedent = NULL;
        liste->premier = nouveau;
        liste->dernier = nouveau;
    } else if (i == 0) {
        inserTeteDou(liste, nvNombre);
        return;
    } else if (i < liste->cnt) {
        ElementDou *actuel = liste->premier;
        for (int t = 1; t < i; t++) {
            actuel = actuel->suivant;
        }
        nouveau->suivant = actuel->suivant;
        nouveau->precedent = actuel;
        actuel->suivant->precedent = nouveau;
        actuel->suivant = nouveau;
    } else {
        inserQueueDou(liste, nvNombre);
        return;  ///????
    }
    liste->cnt += 1;
}

//2. Retrait au début de la liste
void suppTeteDou(ListeDou *liste) {
    if (liste) { //如果链表不为空 (liste->premier!=NULL && liste->dernier!=NULL)
        ElementDou *suppElem = liste->premier;
        if (liste->cnt == 1) { //只有一个结点
            liste->premier = NULL;
            liste->dernier = NULL;
            free(suppElem);
        } else {  //有多个结点
            liste->premier = liste->premier->suivant;
            liste->premier->precedent = NULL;
            free(suppElem);
        }
        liste->cnt--;
    }
}

//2. Retrait à la fin de la liste
void suppQueueDou(ListeDou *liste) {
    if (liste) {
        ElementDou *suppElem = liste->dernier;
        if (liste->cnt == 1) {
            liste->premier = NULL;
            liste->dernier = NULL;
            free(suppElem);
        } else {
            liste->dernier = liste->dernier->precedent;
            liste->dernier->suivant = NULL;
            free(suppElem);
        }
        liste->cnt--;
    }
}


//2. Retrait à la ième position depuis la tête de la liste
void suppElemPosDou(ListeDou *liste, int i) {
    if (liste || i > 0) {
        if (liste->cnt == 1) {
            free(liste->premier);
            liste->premier = NULL;
            liste->dernier = NULL;
        } else if (i == 0) {
            suppTeteDou(liste);
            return;
        } else if (i > 0 && i < liste->cnt - 1) {
            ElementDou *avant = liste->premier;
            for (int t = 1; t < i; t++) {
                avant = avant->suivant;
            }
            ElementDou *suppElem = avant->suivant;
            suppElem->suivant->precedent = suppElem->precedent; //要删除的下一个结点的前放要删除的前一个结点
            avant->suivant = suppElem->suivant; //要删的结点的前一个结点的后放后一个结点
            free(suppElem);
        } else {
            suppQueueDou(liste);
            return;
        }
        liste->cnt--;
    }
}

#endif //DEVOIR1_LISTESDOUBLEMENTCHAINEES_H
