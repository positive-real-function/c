//
// Created by 小金 on 2023/5/31.
//

#ifndef EXO8_QUEUE_H
#define EXO8_QUEUE_H

#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define INTERVALLE_MAX 180
#define DUREE_TRAITEMENT_MAX 600

typedef struct {
    int numero;
    int datearrivee;
    int dureetraitement;
} TypeClient;
typedef struct Cell {
    TypeClient donnee;
    struct Cell * suivant;
} TypeCellule;
typedef struct {
    TypeCellule * tete, * queue;
} File;

File Initialiser(){
    File filevide;
    filevide.tete=NULL;
    return filevide;
}


void Enfiler(File *pF,TypeClient C){
    TypeCellule *q=(TypeCellule *)malloc(sizeof(TypeCellule));
    q->donnee=C;
    q->suivant=NULL;
    if(pF->tete==NULL){
        pF->queue=pF->tete=q;
    } else{
        pF->queue->suivant=q;
        pF->queue=q; //尾标签移到q
    }
}

void CreateCustomerList(File *pF){
    printf("Veuillez saisir le nombre de clients:\n");
    int nb_Customer;
    scanf("%d",&nb_Customer);
    srand(time(0));
    TypeClient C;
    for (int i = 0; i < nb_Customer; i++) {
        C.numero=i+1;
        C.datearrivee=rand()%INTERVALLE_MAX; //两个顾客到达的间隔时间
        C.dureetraitement=rand()%DUREE_TRAITEMENT_MAX;
        Enfiler(pF,C);
    }
}

void Afficher(File F){
    int time=8*60*60; //时间以秒计算
    int arrTime=time,finTime=0;
    TypeCellule *indice=F.tete;
    while(indice!=NULL) {

        arrTime =time+ indice->donnee.datearrivee;
        int h = (arrTime) / 3600;
        int m = (arrTime - h * 3600) / 60;
        int s = (arrTime - h * 3600 - m * 60);

        finTime = arrTime + indice->donnee.dureetraitement;
        int hf = (finTime) / 3600;
        int mf = (finTime - hf * 3600) / 60;
        int sf = (finTime - hf * 3600 - mf * 60);
        printf("Customer : %d , datearrivee : %dh %dmin %ds , dureetraitement : %dh %dmin %ds \n",
               indice->donnee.numero, h, m, s, hf, mf, sf);

        time=finTime;
        indice = indice->suivant;
    }
}
#endif //EXO8_QUEUE_H
