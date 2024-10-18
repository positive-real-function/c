//
// Created by 小金 on 2023/12/15.
//

#ifndef TD5_EX3_TT_H
#define TD5_EX3_TT_H
#include <stdio.h>
#include <stdlib.h>
#include "Operation_de_base.h"

// 恢复错误的二叉搜索树
void recoverTree(TreeNode* root) {
    // 创建一个数组用于存放两个错误交换的节点
    TreeNode* err[2] = {NULL, NULL};
    // 如果根节点为空，直接返回
    if (root == NULL) return;
    // 用于迭代的前一个节点
    TreeNode* pre = NULL;
    // 定义一个栈结构
    struct Stack {
        TreeNode* data[1000]; // 假设树最多有1000个节点
        int top;
    } stack;
    // 初始化栈
    stack.top = -1;
    // 中序遍历二叉树
    while (stack.top != -1 || root != NULL) {
        if (root != NULL) {
            // 将当前节点入栈，并移至左子树
            stack.data[++stack.top] = root;
//            root = root->left;
            root=left(root);
        } else {
            // 弹出栈顶节点，并检查是否存在错误
            root = stack.data[stack.top--];
            if (pre != NULL && pre->value > root->value) {
                // 记录第一个错误的节点
                err[0] = (err[0] == NULL) ? pre : err[0];
                // 记录第二个错误的节点
                err[1] = root;
            }
            // 更新前一个节点为当前节点
            pre = root;
            // 移至右子树
//            root = root->right;
            root=right(root);
        }
    }
    // 交换错误的节点值
    int tmp = err[0]->value;
    err[0]->value = err[1]->value;
    err[1]->value = tmp;
}
#endif //TD5_EX3_TT_H
