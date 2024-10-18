#include <stdio.h>
#include "FileDePriorite.h"

int main() {

    Priorite F=Initialiser_priorite();
    printf("ajouter une element(valuer=1,nombre de priorite=1) : \n");
    Enfiler_priorite(F,1,1);
    Afficher_priorite(F);
    printf("ajouter une element(valuer=2,nombre de priorite=2) : \n");
    Enfiler_priorite(F,2,2);
    Afficher_priorite(F);
    printf("ajouter une element(valuer=3,nombre de priorite=2) : \n");
    Enfiler_priorite(F,3,2);
    Afficher_priorite(F);
    printf("ajouter une element(valuer=4,nombre de priorite=3) : \n");
    Enfiler_priorite(F,4,3);
    Afficher_priorite(F);
    printf("ajouter une element(valuer=5,nombre de priorite=2) : \n");
    Enfiler_priorite(F,5,2);
    Afficher_priorite(F);

    printf("supprimer une element : \n");
    Defiler_priorite(F);
    Afficher_priorite(F);
//    printf("%d",F->nb_elem);



    return 0;
}
