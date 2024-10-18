//
// Created by 小金 on 2023/12/5.
//

#ifndef TD5_EX2_H
#define TD5_EX2_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include "Operation_de_base.h"



// 中序遍历二叉树
void infixetoArr(struct TreeNode* node, int* res, int* index) {
    if (node == NULL) return;

    infixetoArr(node->left, res, index);
    res[(*index)++] = node->value;
    infixetoArr(node->right, res, index);
}

// 验证二叉搜索树
bool isValidBST(struct TreeNode* root) {
    if (root == NULL) return true;

    // 获取树的节点数量
    int nodeCount = 0;
    int* result = (int*)malloc(sizeof(int) * 1000); // 假设树最多有1000个节点

    // 中序遍历树并将结果存入数组
    infixetoArr(root, result, &nodeCount);

    // 验证数组是否有序
    for (int i = 1; i < nodeCount; i++) {
        if (result[i] <= result[i - 1]) {
            free(result);
            return false;
        }
    }

    free(result);
    return true;
}


//afficher le tab
void printArr(int arr[],int size){
    printf("Entreé: [");
    for (int i = 0; i < size; i++) {
        if (arr[i] == -1)
            printf("null,");
        else
            printf("%d,", arr[i]);
    }
    printf("\b]\n");
}

#endif //TD5_EX2_H




