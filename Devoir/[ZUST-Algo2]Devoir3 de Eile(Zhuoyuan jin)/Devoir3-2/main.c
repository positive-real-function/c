#include <stdio.h>
#include "OperationDeArbreBinaire.h"
#include "Devoir3-2.h"
#include "AB2ABR.h"

int main() {

    tree T = Create(4,NULL,NULL);
    tree T2= Create(6,NULL,NULL);
    tree root= Create(5,T,T2);
    AddNode(&root,8);
    AddNode(&root,7);
    AddNode(&root,9);
    AddNode(&root,2);
    AddNode(&root,3);

    printf("avant supprimer:\n");
    printTree(root);
    printf("supprimer un nœud feuille(3):\n");
    DeleteNode(root,3);
    printTree(root);

    printf("supprimer un nœud avec un fils(4):\n");
    DeleteNode(root,4);
    printTree(root);

    printf("supprimer un nœud avec 2 fils(8):\n");
    DeleteNode(root,8);
    printTree(root);

    return 0;
}
