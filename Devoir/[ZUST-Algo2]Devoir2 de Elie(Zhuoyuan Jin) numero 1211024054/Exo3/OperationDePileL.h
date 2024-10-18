//
// Created by 小金 on 2023/5/15.
//

///Pile的链表实现

#ifndef MAIN_C_OPERATIONDEPILEL_H
#define MAIN_C_OPERATIONDEPILEL_H

#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

typedef char TypeDonnee;
typedef struct Cell {
    TypeDonnee donnee;
    struct Cell *suivant;
} TypeCellule, *Pile;

//创建一个空栈
Pile Initialiser() {
    return NULL;
}

//判断栈是否为空
int EstVide(Pile P) {
    return (P == NULL) ? 1 : 0;
}

//转到栈顶
int AccederSommet(Pile P, TypeDonnee *pelem) {
    if (EstVide(P))
        return 1;
    *pelem = P->donnee;
    return 0;
}

//返回栈顶元素
TypeDonnee Sommet(Pile P){
    return P->donnee;
}

//插入元素
void Empiler(Pile *pP, TypeDonnee elem) { //pP指向p的指针
    Pile q;
    q = (TypeCellule *) malloc(sizeof(TypeCellule));
    q->donnee = elem;
    q->suivant = *pP; //在链表头部插入元素
    *pP = q; //跟新链表顶部
}

//删除元素
TypeDonnee Depiler(Pile *pP) {
    TypeCellule *q;
    if (EstVide(*pP)) {
        printf("Pile est vide!\n");
        exit(0);
    }
    TypeDonnee pelem = (*pP)->donnee;
    q = *pP; //记住第一个元素的地址
    *pP = (*pP)->suivant; //头移到下一个
    free(q);
    return pelem;
}

//清空栈内元素
void Detruire(Pile *pP) {
    TypeCellule *q;//(=Pile q)
    while (*pP != NULL) {
        q = *pP;
        *pP = (*pP)->suivant;
        free(q);
    }
    *pP = NULL;
}

//删除栈
void Vider(Pile *pP) {
    Detruire(pP); /* destruction de la liste */
    *pP = NULL; /* liste vide */
}

//打印栈
void Affichierpile(Pile P) {
    Pile q;
    q = P;
    while (q != NULL) {
        printf("%d\t", q->donnee);
        q = q->suivant;
    }
    puts("");
}

//在栈底插入元素
void inserEnbas(Pile *pPile, TypeDonnee v) {//pPile为Pile的指针，*pPile=Pile，pPile是Pile的地址
    if (EstVide(*pPile))
        Empiler(pPile, v);
    else {
        TypeDonnee temp = Depiler(pPile);
        inserEnbas(pPile, v);
        Empiler(pPile, temp);
    }
}

//反转栈
void inverserPile(Pile* pPile)
{
    TypeDonnee d;
    if (EstVide(*pPile))
        return;
    d = Depiler(pPile);
    inverserPile(pPile);
    inserEnbas(pPile, d);
}

#endif //MAIN_C_OPERATIONDEPILEL_H
