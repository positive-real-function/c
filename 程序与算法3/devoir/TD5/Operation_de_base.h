//
// Created by 小金 on 2023/11/28.
//

#ifndef TD5_OPERATION_DE_BASE_H
#define TD5_OPERATION_DE_BASE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef int typeElem;

typedef struct TreeNode {
    typeElem value;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

typedef TreeNode *arbre;

// Création d'un nouveau nœud
TreeNode *consa(typeElem value, arbre leftTree, arbre rightTree) {
    TreeNode newNode;
    newNode.value = value;
    newNode.left = leftTree;
    newNode.right = rightTree;
    return &newNode;
}

// Accès au sous-arbre gauche
TreeNode *left(arbre tree) {
    return tree->left;
}

// Accès au sous-arbre droit
TreeNode *right(arbre tree) {
    return tree->right;
}

// 判断树是否为空
bool isEmptyTree(arbre tree) {
    if (tree == NULL) {
        return true;
    } else {
        return false;
    }

}

// Récupère la racine de l'arbre
typeElem root(arbre tree) {
    return tree->value;
}

// Affichage en préfixe
void prefixe(arbre tree) {
    if (!isEmptyTree(tree)) {
        printf("%d ", tree->value);
        prefixe(tree->left);
        prefixe(tree->right);
    } else {
        printf("null ");
    }
}

// Affichage en infixetoArr
void infix(arbre tree) {
    if (!isEmptyTree(tree)) {
        infix(tree->left);
        printf("%d ", tree->value);
        infix(tree->right);
    } else {
        printf("null ");
    }
}

// Affichage en postfixe
void postfixe(arbre tree) {
    if (!isEmptyTree(tree)) {
        postfixe(tree->left);
        postfixe(tree->right);
        printf("%d ", tree->value);
    } else {
        printf("null ");
    }
}

bool EnfantsVide(TreeNode* root){
    if(root->left==NULL || root->right==NULL)
        return true;
    else
        printf("null\n");return true;
}


//---------------------------------------------------------


/// 创建树节点
TreeNode *createTreeNode(int value) {
    TreeNode *newNode = (TreeNode *) malloc(sizeof(TreeNode));
    newNode->value = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

/// 通过数组创建二叉树
///index 初始值输入0
TreeNode *createTreeFromArray(int arr[], int index, int size) {
    TreeNode *root = NULL;

    // 判断当前索引是否在数组范围内
    if (index < size) {
        // 使用-1表示null
        if (arr[index] == -1) {
            return NULL;
        }

        root = createTreeNode(arr[index]);

        // 递归创建左子树
        root->left = createTreeFromArray(arr, 2 * index + 1, size);

        // 递归创建右子树
        root->right = createTreeFromArray(arr, 2 * index + 2, size);
    }

    return root;
}


/// 递归打印树的结构
///level 初始值为0
void printTree(TreeNode *root, int level) {
    if (root == NULL) {
        return;
    }

    printTree(root->right, level + 1);

    for (int i = 0; i < level; i++) {
        printf("    ");
    }

    printf("%d\n", root->value);

    printTree(root->left, level + 1);
}


///----------------------------------
//Queue

// 定义队列结构
typedef struct QueueNode {
    struct TreeNode *data;
    struct QueueNode *next;
} QueueNode;

typedef struct Queue {
    struct QueueNode *front;
    struct QueueNode *rear;
} Queue;

// 初始化队列
void initQueue(Queue *q) {
    q->front = NULL;
    q->rear = NULL;
}

// 入队操作
void enqueue(Queue *q, TreeNode *node) {
    QueueNode *newNode = (QueueNode *) malloc(sizeof(QueueNode));
    newNode->data = node;
    newNode->next = NULL;

    if (q->rear == NULL) {
        q->front = newNode;
        q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

// 出队操作
TreeNode *dequeue(Queue *q) {
    if (q->front == NULL) {
        return NULL;
    }

    QueueNode *temp = q->front;
    TreeNode *data = temp->data;

    q->front = q->front->next;

    if (q->front == NULL) {
        q->rear = NULL;
    }

    free(temp);
    return data;
}


// 判断队列里的值是否全是NULL
bool areAllValuesNull(struct Queue* q) {
    struct QueueNode* current = q->front;

    while (current != NULL) {
        if (current->data != NULL) {
            // 如果当前节点的数据不是NULL，则队列中存在非NULL值
            return false;
        }
        current = current->next;
    }

    // 遍历完成，所有值都是NULL
    return true;
}

// 主函数：广度优先搜索二叉树
void BFS(TreeNode *root) {
    if (root == NULL) {
        printf("null");
        return;
    }

    Queue q;
    initQueue(&q);

    enqueue(&q, root);

    while (q.front!=NULL) {
        struct TreeNode* current = dequeue(&q);

        if (current == NULL) {
            // 如果当前节点为 "null"，但队列中还有未处理的非 "null" 节点，继续打印
            if(!areAllValuesNull(&q))
                printf("null ");
        } else {
            printf("%d ", current->value);
            enqueue(&q, current->left);
            enqueue(&q, current->right);
        }
    }
}



#endif //TD5_OPERATION_DE_BASE_H
