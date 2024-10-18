#include<stdio.h>

// Fonctionne de la recherche linéaire
int recherche_lin(int arr[], int n, int elem) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == elem) {
            return i; // élément trouvé, retourne index
        }
    }
    return -1; // élément non pas trouvé
}

//La recherche dicothomie 
int recherche_dicoth(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        
        if (arr[m] == x) {
            return m;
        }
        if (arr[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return -1;
}
