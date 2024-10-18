//
// Created by 小金 on 2023/5/29.
//

#ifndef EXO6_OPERATIONDEDEQUE_H
#define EXO6_OPERATIONDEDEQUE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int TypeDonnee;
typedef enum { push, pop, inject, eject, end } Operation;

struct noeud {
    TypeDonnee donnee;
    struct noeud *suivent, *prev;
};
typedef struct noeud *Noeud;

struct DequeRecord {
    Noeud tete;
    Noeud queue;
    int nb_elem;
};
typedef struct DequeRecord *Deque;


Deque Initialiser_Deque()
{
    Deque p;
    p = malloc(sizeof(Deque));
    //队列开空间
    p->tete = malloc(sizeof(Noeud));
    //队列头部指向一个新地址
    p->queue = malloc(sizeof(Noeud));
    //队列尾部也指向一个新地址
    p->tete->suivent = p->queue;//头尾相等
    p->queue->prev = p->tete;
    p->tete->prev = NULL;
    p->queue->suivent = NULL;
    p->nb_elem=0;
    return p;

}


//push,pop,inject,enject4种操作的具体形式
void EnfilerTete_Deque(TypeDonnee elem, Deque D){//在头插入
    Noeud tmp;
    tmp = malloc(sizeof(Noeud));//开新的节点
    if (!tmp) exit(0);
    tmp->donnee = elem;//赋值
    D->nb_elem++;
    tmp->prev = D->tete;
    tmp->suivent = D->tete->suivent;
    D->tete->suivent->prev = tmp;
    D->tete->suivent = tmp;
}


TypeDonnee DefilerTete_Deque(Deque D)
{
    //队列为空
    if (D->nb_elem==0){
        printf("la Deque est vide!\n");
        exit(0);
    }

    TypeDonnee suppE= D->tete->suivent->donnee;
    Noeud tmp = D->tete->suivent; //新建一个结点指向第一个元素
    D->tete->suivent = tmp->suivent; //头结点指向第二个元素
    tmp->suivent->prev = D->tete; //第二个元素的prev域指向tete
    free(tmp);
    D->nb_elem--;
    return suppE;
}


void EnfilerQueue_Deque(TypeDonnee elem, Deque D)
{
    Noeud tmp;
    tmp = malloc(sizeof(Noeud));//开新的节点
    if (!tmp) exit(0);
    tmp->donnee= elem;//赋值
    tmp->suivent = D->queue; //新结点的suivant指向尾结点
    tmp->prev = D->queue->prev; //新结点的prev指向最后一个结点
    D->queue->prev->suivent = tmp; //最后一个结点的suivant指向新结点
    D->queue->prev = tmp; //尾结点的prev指向新结点
    D->nb_elem++;
}

TypeDonnee DefilerQueue_Deque(Deque D)
{
    if (D->nb_elem==0){
        printf("la Deque est vide!\n");
        exit(0);
    }
    TypeDonnee suppE = D->queue->prev->donnee;
    Noeud tmp = D->queue->prev;
    D->tete->prev = tmp->prev;
    tmp->prev->suivent = D->queue;
    free(tmp);
    D->nb_elem--;
    return suppE;
}

void Afficher_Deque(Deque D)
{
    int cnt=D->nb_elem;
    Noeud q=D->tete->suivent;
    while (cnt!=0)
    {
        printf("%d -> ",q->donnee);
        q=q->suivent;
        cnt--;
    }
    printf("\n");
}

#endif //EXO6_OPERATIONDEDEQUE_H