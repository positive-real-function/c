#include <stdio.h>
// Fonction récursive pour résoudre la Tour d'Hanoï
void tourHanoi(int n, char piquet_init, char piquet_supp, char piquet_final) {
    if (n == 1) {
        printf("Déplacez le disque 1 du piquet %c vers le piquet %c\n", piquet_init, piquet_final);
        return;
    }
    // Déplacez n-1 disques du piquet inisial au piquet supplementaire en utilisant le piquet final 
    tourHanoi(n - 1, piquet_init, piquet_final, piquet_supp);
    // Déplacez le disque restant de l'initial au final
    printf("Déplacez le disque %d du piquet %c vers le piquet %c\n", n, piquet_init, piquet_final);
    // Déplacez les n-1 disques du suppmementaire vers la final en utilisant l'initial 
    tourHanoi(n - 1, piquet_supp, piquet_init, piquet_final);
}