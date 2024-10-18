//
// Created by 小金 on 2023/5/21.
//

#ifndef DEVOIR2_EXO1_H
#define DEVOIR2_EXO1_H
#include <stdio.h>
#include <stdlib.h>

typedef float Element;
struct SCellule {
    Element info;
    struct SCellule *psuiv;
};

typedef struct SCellule *Cellule;

struct SPile{
    struct SCellule *sommet;
    int nbElements;
};

typedef struct SPile *Pile;

Pile pileVide(); 	// creer une pile vide (initialiser)
Pile pileAjouter(Pile p, Element e); //ajouter un élément au sommet de la pile
Pile pileSupprimer(Pile p);	//supprimer l’élément au sommet de la pile
Element pileSommet(Pile p);	//renvoyer l’élément au sommet de la pile

//判断栈是否为空
int EstVide(Pile P) {
    return (P->sommet == NULL) ? 1 : 0;
}

Pile pileVide(){
    Pile p;
    p= malloc(sizeof(Pile));
    p->sommet=NULL;
    p->nbElements=0;
    return p;
}

Pile pileAjouter(Pile p, Element elem){
    Cellule q; //新建一个结点
    q=malloc(sizeof(Cellule));
    q->info=elem;
    q->psuiv=p->sommet;
    p->nbElements++;
    p->sommet=q;
    return p;
}

Pile pileSupprimer(Pile p){
    Cellule q;
    if(EstVide(p)){
        printf("la pile est vide!\n");
        exit(0);
    }
    Element suppE=p->sommet->info;
    q=p->sommet;
    p->sommet=p->sommet->psuiv;
    free(q);
    return p;
}

Element pileSommet(Pile p){
    return p->sommet->info;
}

void afficher(Pile p){
    Cellule q;
    q=p->sommet;
    while(q!=NULL){
        printf("%.2f <- ",q->info);
        q=q->psuiv;
    }
    printf("NULL\n");
}
#endif //DEVOIR2_EXO1_H
