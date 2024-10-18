//
// Created by 小金 on 2023/6/28.
//

#ifndef ARBRE_BINAIRE_DEVOIR3_2_H
#define ARBRE_BINAIRE_DEVOIR3_2_H

//a) 编写一个AddNode函数，向二进制搜索树添加一个元素。
//b) 写一个DeleteNode函数来删除二进制搜索树中的一个元素。
//c) 编写显示二进制树的函数，如下图所示
//d) 编写主函数main，对一个叶子节点、一个有一个子节点、然后是一个有两个子节点进行删除操作，并显示每个操作的结果。
//e) 定义函数AB2ABR，从经典二叉树（AB）返回二叉搜索树（ABR）。该函数遍历经典二叉树（AB）的宽度，然后将访问过的每个节点插入二叉搜索树（ABR）中。
//itératif

#include <malloc.h>
#include <stdio.h>
#include "struct_tree.h"
#include <string.h>
//typedef struct node {
//    unsigned int value;
//    struct node *left;
//    struct node *right;
//} node, *tree;


int searchNode(tree T, int key) {
    while (T) {
        if (key == T->value)
            return 1;

        if (key > T->value)
            T = T->right;
        else T = T->left;
    }
    return 0;
}

void AddNode(tree *pR, int key) {
    tree tmpNode;
    tree tmpTree = *pR;

    //céer un noeud feuille
    Node *elem = malloc(sizeof(Node));
    elem->value = key;
    elem->left = NULL;
    elem->right = NULL;

    if (tmpTree)
        do {
            tmpNode = tmpTree;
            if (key > tmpTree->value) {
                tmpTree = tmpTree->right;
                if (!tmpTree) tmpNode->right = elem;
            } else {
                tmpTree = tmpTree->left;
                if (!tmpTree) tmpNode->left = elem;
            }
        } while (tmpTree);
    else *pR = elem;
}


//找树中的最小值
tree findMin(tree T) {
    if (!T) {
        return NULL;
    }
    if (!T->left) {
        return T;
    } else {
        findMin(T->left);
    }
}

//找树中的最大值
tree findMax(tree T) {
    if (!T) {
        return NULL;
    }
    if (!T->right) {
        return T;
    } else {
        findMax(T->right);
    }
}

//删除节点
tree DeleteNode(tree T, unsigned int num) {
    tree temp = NULL;

    //判空
    if (!T) {
        return NULL;
    } else {
        //找num存在的节点
        if (num < T->value) {
            T->left = DeleteNode(T->left, num);
        } else if (num > T->value) {
            T->right = DeleteNode(T->right, num);
        } else {
            /*
                如果一个结点是叶子结点，则直接删除；
                如果一个结点的左子树不为空, 则将该结点的值设置为其左子树上各结点中的最大值，并
                继续删除其左子树上拥有最大值的结点；

                如果一个结点的左子树为空但右子树不为空，则将该结点的值设置为其右子树上各结点中
                的最小值，并继续删除其右子树上拥有最小值的结点。
            */
            //此时可知只要左子树存在就将左子树的最大值放进当前节点
            //向下找最大值节点
            if ((T->left && T->right) || T->left) {

                temp = findMax(T->left);
                T->value = temp->value;
                T->left = DeleteNode(T->left, T->value);

            }
                //此时可知左子树为空右子树存在就将右子树的最小值放进当前节点
                //向下找最小值节点
            else if (T->right) {

                temp = findMin(T->right);
                T->value = temp->value;
                T->right = DeleteNode(T->right, T->value);

            }
                //删除free掉
            else {
                temp = T;
                T = NULL;
                free(temp);
            }
        }
    }
    return T;
}


void printTree(tree n) {
    static int level = -1; //记录是第几层次
    int i;

    if (NULL == n)
        return;

    level++;
    printTree(n->right);
    level--;

    level++;
    for (i = 0; i < level; i++)
        printf("\t");
    printf("%2d\n", n->value);
    printTree(n->left);
    level--;
}

//void printPrefix(char prefix[]){
//    for(int i=0;i< strlen(prefix);i++){
//        printf("%c",prefix[i]);
//    }
//}


void show(tree parent,tree root, char prefix[]) {
    strcat(prefix,"|");
    if (root) {

        printf("%s->%d\n",prefix,root->value);

        if (root == parent || root == parent->right) {
            strcat(prefix,"");
            strcat(prefix," ");
        }
        show(root, root->left, strcat(prefix,"  "));
        show(root, root->right, strcat(prefix,"  "));
    } else {
        if (parent->left || parent->right) //有一个孩子节点不空就打印，以区分左右孩子
            printf("%s->{}\n", prefix);
    }
}

#endif //ARBRE_BINAIRE_DEVOIR3_2_H


