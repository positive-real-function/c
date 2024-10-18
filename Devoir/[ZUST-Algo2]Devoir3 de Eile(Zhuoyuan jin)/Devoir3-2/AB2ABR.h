//
// Created by 小金 on 2023/6/30.
//

#ifndef ARBRE_BINAIRE_AB2ABR_H
#define ARBRE_BINAIRE_AB2ABR_H

#include <stdio.h>
#include <stdlib.h>
#include "struct_tree.h"

// 创建一个新节点
tree createNode(int data) {
    tree newNode = (struct TreeNode *) malloc(sizeof(tree));
    if (newNode == NULL) {
        printf("内存分配失败\n");
        exit(1);
    }
    newNode->value = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// 中序遍历打印二叉树
void inorderTraversal(tree node) {
    if (node != NULL) {
        inorderTraversal(node->left);
        printf("%d ", node->value);
        inorderTraversal(node->right);
    }
}

// 将二叉树节点的值存储到一个数组中
void storeInorder(tree node, int inorderArray[], int *index) {
    if (node != NULL) {
        storeInorder(node->left, inorderArray, index);
        inorderArray[*index] = node->value;
        (*index)++;
        storeInorder(node->right, inorderArray, index);
    }
}

// 给二叉树节点赋新的值
void assignInorder(tree node, int inorderArray[], int *index) {
    if (node != NULL) {
        assignInorder(node->left, inorderArray, index);
        node->value = inorderArray[*index];
        (*index)++;
        assignInorder(node->right, inorderArray, index);
    }
}

// 将数组中的值按照升序排序
void sortArray(int inorderArray[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (inorderArray[j] > inorderArray[j + 1]) {
                temp = inorderArray[j];
                inorderArray[j] = inorderArray[j + 1];
                inorderArray[j + 1] = temp;
            }
        }
    }
}

// 将普通二叉树转化为二叉搜索树
void BSTConvert(tree node) {
    if (node == NULL) {
        return;
    }

    int size = 0;
    storeInorder(node, NULL, &size);

    int *inorderArray = (int *) malloc(size * sizeof(int));
    if (inorderArray == NULL) {
        printf("内存分配失败\n");
        exit(1);
    }

    int index = 0;
    storeInorder(node, inorderArray, &index);
    sortArray(inorderArray, size);

    index = 0;
    assignInorder(node, inorderArray, &index);

    free(inorderArray);
}


#endif //ARBRE_BINAIRE_AB2ABR_H
