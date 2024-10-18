#include <stdio.h>
#include "Queue.h"
int main() {
    File F=Initialiser();
    CreateCustomerList(&F);
    Afficher(F);
    return 0;
}
/**
 * 运行结果（以10个人为例）：
Veuillez saisir le nombre de clients:
10
Customer : 1 , datearrivee : 8h 1min 38s , dureetraitement : 8h 4min 19s
Customer : 2 , datearrivee : 8h 6min 12s , dureetraitement : 8h 7min 10s
Customer : 3 , datearrivee : 8h 8min 53s , dureetraitement : 8h 9min 58s
Customer : 4 , datearrivee : 8h 11min 26s , dureetraitement : 8h 17min 0s
Customer : 5 , datearrivee : 8h 19min 0s , dureetraitement : 8h 19min 39s
Customer : 6 , datearrivee : 8h 20min 14s , dureetraitement : 8h 27min 10s
Customer : 7 , datearrivee : 8h 28min 18s , dureetraitement : 8h 30min 20s
Customer : 8 , datearrivee : 8h 31min 29s , dureetraitement : 8h 39min 30s
Customer : 9 , datearrivee : 8h 39min 44s , dureetraitement : 8h 49min 39s
Customer : 10 , datearrivee : 8h 51min 50s , dureetraitement : 9h 0min 47s
 */
