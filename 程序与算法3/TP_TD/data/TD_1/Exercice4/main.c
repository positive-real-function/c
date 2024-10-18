#include"Hanoi.h"

int main() {
    int n = 3; // Nombre de disques
    char piquet_init = 'A', piquet_supp = 'B', piquet_final = 'C';
    printf("Étapes pour résoudre la Tour d'Hanoï avec %d pièces :\n", n);
    tourHanoi(n, piquet_init, piquet_supp, piquet_final);
    return 0;
}