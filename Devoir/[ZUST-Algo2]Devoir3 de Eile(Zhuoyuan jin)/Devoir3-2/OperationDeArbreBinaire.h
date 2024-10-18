//
// Created by 小金 on 2023/6/23.
//

#ifndef ARBRE_BINAIRE_OPERATIONDEARBREBINAIRE_H
#define ARBRE_BINAIRE_OPERATIONDEARBREBINAIRE_H

#include <malloc.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include "OperationDeFile.h"
#include "struct_tree.h"



/// Proposer un type tree basé sur une structure pour représenter un arbre binaire avec un type générique TElement.
/// Ecrire le code en C qui permet de réaliser les opérations suivantes (privilégier un algorithme récursif quand c’est possible) :
bool IsEmpty(tree T); // cette fonction définie si l’arbre T est vide ou pas
tree Left(tree T); // cette fonction retourne le fils gauche de T
tree Right(tree T); // cette fonction retourne le fils droit de T
bool IsLeave(tree T); // cette fonction détermine si T est une feuille
bool IsInternalNode(
        tree T); // cette fonction détermine si T est un nœud interne (un nœud interne est un nœud qui n’est pas une feuille)
unsigned Height(tree T); // cette fonction retourne la profondeur de T
unsigned NbNode(tree T); // cette fonction retourne le nombre de nœud de T
unsigned NbLeaves(tree T); // cette fonction détermine le nombre de feuilles de T
unsigned NbInternalNode(tree T); // cette fonction détermine le nombre de nœuds internes de T
void DFS_prefix(tree T); // cette fonction effectue un parcours préfixe de T
void DFS_infix(tree T); // cette fonction effectue un parcours infixe de T
void DFS_postfix(tree T); // cette fonction effectue un parcours postfixe de T
void BFS(tree T); // cette fonction effectue un parcours en largeur (BFS) de T
tree Create(TElement val, tree ls, tree rs); // cette fonction crée un arbre binaire (nœud).
void AddElt(tree src,
            TElement elt); //cette fonction permet d’ajouter un élément dans l’arbre binaire selon les règles suivantes :
///Les éléments sont ajoutés de gauche à droite dans un même niveau
///Un élément ne peut être rajouté dans un niveau sauf si le niveau précédant est rempli
bool Exist(tree src, TElement elt); // cette fonction détermine si elt existe dans T
void Erase(tree *src); // cette fonction supprime src et libère l’espace mémoire occupé

/*
1- 提出一个基于结构的树型，用一个通用的TElement类型来表示二叉树。
2- 用C语言编写执行下列操作的代码（尽可能使用递归算法）：
a. bool IsEmpty( tree T); // 这个函数定义了树T是否为空。
b. tree Left( tree T); // 这个函数返回T的左边的孩子
c. tree Right(tree T); // 此函数返回T的右侧子节点
d. bool IsLeave(tree T); // 此函数决定T是否为叶子
e. bool IsInternalNode(tree T); // 这个函数决定T是否是一个内部节点（内部节点是指非叶子的节点）。
f. unsigned Height (tree T); // 此函数返回T的深度
g. unsigned NbNode(tree T); // 此函数返回T中的节点数
h. 无符号 NbLeaves(tree T); // 此函数决定了T中的叶子数量
i. unsigned NbInternalNode(tree T); // 此函数决定了T中内部节点的数量
j. void DFS_prefix(tree T); // 此函数对T进行前缀遍历。
k. void DFS_infix(tree T); // 此函数对T进行infix遍历。
l. void DFS_postfix(tree T); // 此函数执行对T的后缀遍历。
m. void BFS(tree T); // 此函数执行对T的BFS遍历。
n. tree Create(TElement val,tree ls, tree rs); //此函数创建一个二叉树（节点）。
o. void AddElt(tree src, TElement elt); //此函数根据以下规则向二叉树添加一个元素：
   a.在同一层次中，从左到右添加元素
   b.	除非前面的层被填满，否则一个元素不能被添加到一个层中。
p. bool Exist(tree src , TElement elt); // 这个函数决定elt在T中是否存在。
q. void Erase(tree * src); // 此函数将删除src并释放占用的内存空间。

 */

tree Create(TElement val, tree ls, tree rs) {
    tree res;
    res = malloc(sizeof(*res));
    if (res == NULL) {
        printf((const char *) stderr, "Impossible d'allouer le noeud");
        return NULL;
    }
    res->value = val;
    res->left = ls;
    res->right = rs;
    return res;
}

bool IsEmpty(tree T) {
    return T == NULL;
}

tree Left(tree T) {
    if (IsEmpty(T))
        return NULL;
    else
        return T->left;
}

tree Right(tree T) {
    if (IsEmpty(T))
        return NULL;
    else
        return T->right;
}

bool IsLeave(tree T) {
    if (IsEmpty(T))
        return false;
    else if (IsEmpty(Left(T)) && IsEmpty(Right(T)))
        return true;
    else
        return false;
}

bool IsInternalNode(tree T) {
    if (IsEmpty(T))
        return false;
    else
        return (!IsLeave(T));
}

void DFS_prefix(tree node) {
    if (node == NULL)
        return;
    printf("\t%d\t", node->value);
    DFS_prefix(node->left);
    DFS_prefix(node->right);
}

void DFS_infix(tree node) {
    if (node == NULL)
        return;
    DFS_infix(node->left);
    printf("\t%d\t", node->value);
    DFS_infix(node->right);
}

void DFS_postfix(struct node *node) {
    if (node == NULL)
        return;
    DFS_postfix(node->left);
    DFS_postfix(node->right);
    printf("\t%d\t", node->value);
}

void BFS(tree T) {
    tree Temp;
    File F;
    if (!IsEmpty(T)) {
        Enfiler(&F, T);
        while (!EstVide(F)) {
            Defiler(&F, &Temp);
            /* Traiter la racine */ //printf
            if (!IsEmpty(Left(Temp)))
                Enfiler(&F, Left(Temp));
            if (!IsEmpty(Right(Temp)))
                Enfiler(&F, Right(Temp));
        }
    }
}


int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

unsigned Height(tree T) {
    if (IsEmpty(T))
        return 0;
    else
        return 1 + max(Height(Left(T)), Height(Right(T)));
}

//返回节点数
unsigned NbNode(tree T) {
    if (IsEmpty(T))
        return 0;
    else
        return 1 + NbNode(Left(T)) + NbNode(Right(T));
}


void AddElt(tree src, TElement elt) {
    tree Temp;
    File F;
    if (src == NULL) {
        src = Create(elt, NULL, NULL);
    } else { //utiliser le parcours BFS avec file
        Enfiler(&F, src);
        while (!EstVide(F)) {
            Defiler(&F, &Temp);
            if (!IsEmpty(Left(Temp)))
                Enfiler(&F, Left(Temp));
            else {
                Temp->left = Create(elt, NULL, NULL);
                break;
            }
            if (!IsEmpty(Right(Temp)))
                Enfiler(&F, Right(Temp));
            else {
                Temp->right = Create(elt, NULL, NULL);
                break;
            }
        }
    }
}

bool Exist(tree src, TElement elt) {
    if (IsEmpty(src))
        return false;
    else if (src->value == elt)
        return true;
    else
        return Exist(Left(src), elt) || Exist(Right(src), elt);
}


void Erase(tree *src) {
    tree ls = Left(*src);
    tree rs = Right(*src);

    if (!IsEmpty(*src)) {
        Erase(&ls);
        Erase(&rs);

        free(*src);
        *src = NULL;
    }
}


#endif //ARBRE_BINAIRE_OPERATIONDEARBREBINAIRE_H
