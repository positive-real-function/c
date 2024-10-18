#include"rechercher.h"

// int main() {
//     int arr[] = {22, 14, 6, 1, 5};
//     int elem = 1;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int res = recherche_lin(arr, n, elem);
    
//     if (res != -1) {
//         printf("L'index d'élément %d est %d.\n", elem, res);
//     } else {
//         printf("L'élément %d n'existe pas dans la liste.\n", elem);
//     }
    
//     return 0;
// }

//La recherche dicothomie 
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int x = 8;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    
    // Testing binary search
    int res_dic = recherche_dicoth(arr, 0, n - 1, x);
    if (res_dic != -1) {
        printf("L'index d'élément %d est %d.\n", x, res_dic);
        } else {
        printf("L'élément %d n'existe pas dans la liste.\n", x);
    }
    
    return 0;
}