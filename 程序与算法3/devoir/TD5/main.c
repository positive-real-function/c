#include "Operation_de_base.h"
#include "Ex2.h"
#include "EX3.h"
#include "Ex4.h"

///Ex1 Preparation
void Ex1() {

    int root_f2[] = {5, 1, 4, -1, -1, 3, 6}; // 使用-1表示null
    int size = sizeof(root_f2) / sizeof(root_f2[0]);
    TreeNode *Arbre_F2 = createTreeFromArray(root_f2, 0, size);
    prefixe(Arbre_F2);
    /**
     * result: 5 1 null null 4 3 null null 6 null null
     */

}

///Ex2 Valider un arbre binaire de recherche (ABR)
void Ex2() {
    int root_f1[] = {2, 1, 3};
    int size1 = sizeof(root_f1) / sizeof(root_f1[0]);
    TreeNode *F1=createTreeFromArray(root_f1,0,size1);

    printArr(root_f1,size1);
    if (isValidBST(F1))
        printf("Sortie: true\n");
    else
        printf("Sortie: false\n");

    printf("------------------------------\n");

    int root_f2[] = {5, 1, 4, -1, -1, 3, 6}; // 使用-1表示null
    int size2 = sizeof(root_f2) / sizeof(root_f2[0]);
    TreeNode *F2=createTreeFromArray(root_f2,0,size2);

    printArr(root_f2,size2);
    if (isValidBST(F2))
        printf("Sortie: true\n");
    else
        printf("Sortie: false\n");
}

///Ex3
void Ex3(){
    int root_f3[] = {1, 3, -1, -1, 2};
    int size3 = sizeof(root_f3) / sizeof(root_f3[0]);
    TreeNode *F3 = createTreeFromArray(root_f3, 0, size3);

    int root_f4[] = {3, 1, 4, -1, -1, 2}; // 使用-1表示null
    int size4 = sizeof(root_f4) / sizeof(root_f4[0]);
    TreeNode *F4= createTreeFromArray(root_f4, 0, size4);

    //3.1
    printf("(1)\n");
    printf("Input: root = [ ");
    BFS(F3);
    printf("]\n");
    recoverTree(F3);
    printf("Output: [ ");
    BFS(F3);
    printf("]\n");

    printf("--------------------------\n");

    printf("(2)\n");
    printf("Input: root = [ ");
    BFS(F4);
    printf("]\n");
    recoverTree(F4);
    printf("Output: [ ");
    BFS(F4);
    printf("]\n");
}

void Ex4(){
    int preorder[]={3,9,20,15,7};
    int inorder[]={9,3,15,20,7};
    int preorderSize=sizeof(preorder)/ sizeof(preorder[0]);
    int inorderSize= sizeof(inorder)/ sizeof(inorder[0]);

    TreeNode *root=buildTree_pre_in(preorder,preorderSize,inorder,inorderSize);

    BFS(root);
    infix(root);


}

int main() {

//    Ex1();

//    Ex2();

    Ex3();

//    Ex4();
}
