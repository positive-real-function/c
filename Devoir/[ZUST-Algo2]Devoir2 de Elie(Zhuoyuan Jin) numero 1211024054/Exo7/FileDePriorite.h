//
// Created by 小金 on 2023/5/31.
//

#ifndef EXO7_FILEDEPRIORITE_H
#define EXO7_FILEDEPRIORITE_H

#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

typedef int Typedonnee;
typedef struct noeud{
    Typedonnee donnee;
    int priorite;
    struct noeud *suivant;
}*Noeud;

typedef struct {
    Noeud premier;
    int nb_elem;
}*Priorite;

Priorite Initialiser_priorite(){
    Priorite videFile=malloc(sizeof(Priorite));
    videFile->nb_elem=0;
    videFile->premier=NULL;
    return videFile;
}


void Enfiler_priorite(Priorite F,Typedonnee elem,int pri){
    Noeud nouveau,indice;
    nouveau= malloc(sizeof(Noeud));
    nouveau->donnee=elem;
    nouveau->priorite=pri;
    if(F->nb_elem==0 || pri<F->premier->priorite){
        nouveau->suivant=F->premier; //如果优先级大于第一个结点，则新结点指向原第一个结点
        F->premier=nouveau; //头结点指向新结点
    }else{
        indice=F->premier;
        while(indice->suivant!=NULL && indice->suivant->priorite<=pri){
            indice=indice->suivant;
        }
        nouveau->suivant=indice->suivant;
        indice->suivant=nouveau;
    }
    F->nb_elem++;
}

Typedonnee Defiler_priorite(Priorite F){
    if(F->nb_elem==0){
        printf("la file de priorite est vide!");
        exit(0);
    }
    Typedonnee suppE=F->premier->donnee;
    Noeud p=F->premier;
    F->premier=p->suivant;
    free(p);
    F->nb_elem--;
    return suppE;
}



void Afficher_priorite(Priorite F){
    Noeud indice=F->premier;
    int cnt=F->nb_elem;
    while(cnt!=0){
        printf("%d <- ",indice->donnee);
        indice=indice->suivant;
        cnt--;
    }
    printf("\n");
}


#endif //EXO7_FILEDEPRIORITE_H
