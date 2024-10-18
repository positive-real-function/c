#include <stdio.h>
#include "Exo1.h"


int main() {
    //插入元素
    printf("Tester la fonction: pileAjouter.\n");
    Pile p=pileVide();
    printf("Ajouter la element 1 :\n");
    pileAjouter(p,1);
    afficher(p);
    printf("Ajouter la element 2 :\n");
    pileAjouter(p,2);
    afficher(p);
    printf("Ajouter la element 3 :\n");
    pileAjouter(p,3);
    afficher(p);

    printf("---------------------------------\n");

    printf("Tester la fonction: pileSommet.\n");
    printf("renvoyer l’élément au sommet de la pile\n");
    float a=pileSommet(p);
    printf("%.2f\n",a);

    printf("---------------------------------\n");
    printf("Tester la fonction: pileSupprimer.\n");
    printf("Avant la suppression:\n");
    afficher(p);
    pileSupprimer(p);
    printf("Apres la suppression:\n");
    afficher(p);
    return 0;
}
