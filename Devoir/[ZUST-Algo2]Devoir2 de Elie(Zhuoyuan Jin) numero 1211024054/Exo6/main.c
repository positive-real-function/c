#include <stdio.h>
#include "OperationDeDeque.h"
int main() {

    printf("Ajouter 1 a la tete de la file : \n");
    Deque d=Initialiser_Deque();
    EnfilerTete_Deque(1,d);
    Afficher_Deque(d);
    printf("Ajouter 2 a la tete de la file : \n");
    EnfilerTete_Deque(2,d);
    Afficher_Deque(d);
    printf("Ajouter 3 a la tete de la file : \n");
    EnfilerTete_Deque(3,d);
    Afficher_Deque(d);

    printf("--------------------------------\n");
    printf("supprime le début de la file : \n");
    DefilerTete_Deque(d);
    Afficher_Deque(d);

    printf("ajouter un élément 3 à la queue de la file : \n");
    EnfilerQueue_Deque(3,d);
    Afficher_Deque(d);
    printf("ajouter un élément 3 à la queue de la file : \n");
    EnfilerQueue_Deque(4,d);
    Afficher_Deque(d);
    printf("supprime l’élément se trouvant à la fin de la file : \n");
    DefilerQueue_Deque(d);
    Afficher_Deque(d);
    return 0;
}
