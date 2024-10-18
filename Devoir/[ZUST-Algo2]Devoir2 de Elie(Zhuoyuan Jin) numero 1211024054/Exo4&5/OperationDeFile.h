//
// Created by 小金 on 2023/5/16.
//

#ifndef FILE_OPERATIONDEFILE_H
#define FILE_OPERATIONDEFILE_H

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef int TypeDonnee;
typedef struct Cell{
    TypeDonnee donnee;
    struct Cell *suivant;
}TypeCellule;

typedef struct {
    TypeCellule *tete,*queue;
}File;


//初始化队列
File Initialiser(){
    File filevide;
    filevide.tete=NULL;
    return filevide;
}

//判断队列是否为空
int EstVide(File F){
    return (F.tete==NULL)?1:0;
}

//在队列尾部插入元素
void Enfiler(File *pF,TypeDonnee elem){
    TypeCellule *nouveau;
    nouveau=(TypeCellule*)malloc(sizeof(TypeCellule));
    nouveau->donnee=elem;
    nouveau->suivant=NULL;
    if(EstVide(*pF)){
        pF->queue=pF->tete=nouveau;
    } else{
        pF->queue->suivant=nouveau;
        pF->queue=nouveau;
    }
}

//删除队列头部元素
TypeDonnee Defiler(File *pF){
    TypeCellule *suppE;
    if(EstVide(*pF)){
        printf("la file est vide!");
        exit(0);
    }
    TypeDonnee pelem=pF->tete->donnee;
    suppE=pF->tete; //记录队列头的地址
    pF->tete=pF->tete->suivant; //队列tete指向下一个元素
    free(suppE);
    return pelem; //返回被删除的元素值
}

//清空队列
void Detruire(File *pF){
    TypeCellule *suppE,*actuel;
    actuel=pF->tete;
    while (actuel!=NULL){
        suppE=actuel;
        actuel=actuel->suivant;
        free(suppE);
    }
    pF->tete=pF->queue=NULL;
}

//
void Vider(File*pF){
    Detruire(pF);
    pF->tete=NULL;
}

//打印函数
void Affichage(File*pF){
    TypeCellule *actuel;
    actuel= pF->tete;
    while(actuel!=NULL){
        printf("%d <- ",actuel->donnee);
        actuel=actuel->suivant;
    }
    printf("\n");
}
#endif //FILE_OPERATIONDEFILE_H
