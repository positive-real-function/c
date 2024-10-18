//
// Created by 小金 on 2023/12/17.
//

#ifndef TD5_EX4_H
#define TD5_EX4_H
#include "Operation_de_base.h"

// 定义栈节点结构
struct StackNode {
    struct TreeNode* node;
    struct StackNode* next;
};

// 定义栈结构
struct Stack {
    struct StackNode* top;
};

// 初始化栈
void initStack(struct Stack* stack) {
    stack->top = NULL;
}

// 判断栈是否为空
int isStackEmpty(struct Stack* stack) {
    return stack->top == NULL;
}

// 入栈
void push(struct Stack* stack, struct TreeNode* node) {
    struct StackNode* newNode = (struct StackNode*)malloc(sizeof(struct StackNode));
    newNode->node = node;
    newNode->next = stack->top;
    stack->top = newNode;
}

// 出栈
struct TreeNode* pop(struct Stack* stack) {
    if (isStackEmpty(stack)) {
        return NULL;
    }
    struct StackNode* temp = stack->top;
    struct TreeNode* node = temp->node;
    stack->top = temp->next;
    free(temp);
    return node;
}

// 根据前序和中序数组构建二叉树
struct TreeNode* buildTree_pre_in(int* preorder, int preorderSize, int* inorder,int inorderSize) {
    if (preorderSize == 0) {
        return NULL;
    }

    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->value = preorder[0];
    root->left = NULL;
    root->right = NULL;

    struct Stack stack;
    initStack(&stack);
    push(&stack, root);

    int inorderIndex = 0;

    for (int i = 1; i < preorderSize; ++i) {
        int preorderVal = preorder[i];
        struct TreeNode* node = stack.top;

        if (node->value != inorder[inorderIndex]) {
            node->left = (struct TreeNode*)malloc(sizeof(struct TreeNode));
            node->left->value = preorderVal;
            node->left->left = NULL;
            node->left->right = NULL;
            push(&stack, node->left);
        } else {
            while (!isStackEmpty(&stack) && stack.top->node->value == inorder[inorderIndex]) {
                node = pop(&stack);
                ++inorderIndex;
            }
            node->right = (struct TreeNode*)malloc(sizeof(struct TreeNode));
            node->right->value = preorderVal;
            node->right->left = NULL;
            node->right->right = NULL;
            push(&stack, node->right);
        }
    }

    return root;
}
#endif //TD5_EX4_H
