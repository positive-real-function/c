//
// Created by 小金 on 2023/6/23.
//

#ifndef ARBRE_BINAIRE_PARCOURS_PRÉFIXE_INFIXE_POST_FIXE_H
#define ARBRE_BINAIRE_PARCOURS_PRÉFIXE_INFIXE_POST_FIXE_H

#include<stdio.h>
typedef int TElement;
struct node {
    struct node *left;
    char data;
    struct node *right;
};

//préfixe
void preOrderTraversal(struct node *node)
{
    if (node == NULL)
        return;
    printf("\t%d\t", node->data);
    preOrderTraversal(node->left);
    preOrderTraversal(node->right);
}

//infixe
void inOrderTraversal(struct node *node)
{
    if (node == NULL)
        return;
    inOrderTraversal(node->left);
    printf("\t%d\t", node->data);
    inOrderTraversal(node->right);
}

//postfix
void postOrderTraversal(struct node *node)
{
    if (node == NULL)
        return;
    postOrderTraversal(node->left);
    postOrderTraversal(node->right);
    printf("\t%d\t", node->data);
}









#endif //ARBRE_BINAIRE_PARCOURS_PRÉFIXE_INFIXE_POST_FIXE_H
