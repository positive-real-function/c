//
// Created by 小金 on 2023/4/12.
//

#ifndef DEVOIR1_SUPPRIMER_H
#define DEVOIR1_SUPPRIMER_H

#include "Afficher.h"
#include "ListesChainees.h"
#include "ListesChaineesCirculaires.h"
#include "ListesDoublementChainees.h"
#include <stdio.h>
#include <stdlib.h>

///链表去重
//普通链表去重
void suppElemDouble(Liste *liste) {

    if(liste->premier==NULL){
        printf("链表为空");
        exit(0);
    }
    Element *actuel=liste->premier;
    while(actuel->suivant!=NULL){
        if(actuel->nombre==actuel->suivant->nombre){
            actuel->suivant=actuel->suivant->suivant;
            liste->cnt-=1;
        }else{
            actuel=actuel->suivant;
        }
    }
}

//循环链表去重
void suppElemDouble_Cir(ListeCir *liste){
    if(liste->premier==NULL){
        printf("链表为空");
        exit(0);
    }
    ElementCir *actuel=liste->premier;
    while(actuel->suivant!=liste->premier){
        if(actuel->nombre==actuel->suivant->nombre){
            actuel->suivant=actuel->suivant->suivant;
            liste->cnt-=1;
        }else{
            actuel=actuel->suivant;
        }
    }
}

//双链表去重
void suppElemDouble_Dou(ListeDou *liste){
    if(liste->premier==NULL){
        printf("链表为空");
        exit(0);
    }
    ElementDou *actuel=liste->premier;
    while(actuel->suivant!=NULL){
        if(actuel->nombre==actuel->suivant->nombre){
            actuel->suivant=actuel->suivant->suivant;
            liste->cnt-=1;
        }else{
            actuel=actuel->suivant;
        }
    }
}






///下面的代码开始理解错题目的意思了，写成是删除链表中所有的元素n了

//删除普通链表所有的n
void supprimer_n(Liste *liste, int key) {
    Element *actuel = liste->premier;
    for (int i = 0; i < liste->cnt; i++) {
        if (actuel->nombre == key && i == 0) {
            Element *supp = actuel->suivant;
            suppTete(liste);
            actuel = supp;
            i--;
        } else if (actuel->nombre == key) {
            Element *supp = actuel->suivant;
            suppElemPos(liste, i);
            actuel = supp;
            i--;
        } else {
            actuel = actuel->suivant;
        }
    }
}

//删除循环链表所有的n
void supprimer_n_Cir(ListeCir *liste, int key) {
    ElementCir *actuel = liste->premier;
    for (int i = 0; i < liste->cnt; i++) {
        if (actuel->nombre == key && i == 0) {
            ElementCir *supp = actuel->suivant;
            suppTeteCir(liste);
            actuel = supp;
            i--;
        } else if (actuel->nombre == key) {
            ElementCir *supp = actuel->suivant;
            suppElemPosCir(liste, i);
            actuel = supp;
            i--;
        } else {
            actuel = actuel->suivant;
        }
    }
}

//删除双链表所有的n
void supprimer_n_Dou(ListeDou *liste, int key) {
    ElementDou *actuel = liste->premier;
    for (int i = 0; i < liste->cnt; i++) {
        if (actuel->nombre == key && i == 0) {
            ElementDou *supp = actuel->suivant;
            suppTeteDou(liste);
            actuel = supp;
            i--;
        } else if (actuel->nombre == key) {
            ElementDou *supp = actuel->suivant;
            suppElemPosDou(liste, i);
            actuel = supp;
            i--;
        } else {
            actuel = actuel->suivant;
        }
    }
}

#endif //DEVOIR1_SUPPRIMER_H
