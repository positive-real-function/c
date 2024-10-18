#include <stdio.h>
#include "OperationDeFile.h"
#include "F1F2.h"
#include "CopierLesNombresPairs.h"
int main() {

    printf("Creer une file:\n");
    File F1=Initialiser();
    Enfiler(&F1,1);
    Enfiler(&F1,4);
    Enfiler(&F1,6);
    Enfiler(&F1,3);
    Enfiler(&F1,8);
    printf("F1: ");
    Affichage(&F1);

    printf("La question 5.1 :\n");
    File F2=Initialiser();
    ImpairAvantPair(&F1,&F2);
    printf("F2: ");
    Affichage(&F2);

    printf("------------------------\n");

    printf("La question 5.2 :\n");
    printf("F2: ");
    File F3=Initialiser();
    CopierPair(&F1,&F3);
    Affichage(&F3);
    return 0;
}
