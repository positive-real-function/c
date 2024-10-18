#include <stdio.h>
#include "ParenthesesCorrespondent.h"



int main() {
     char s1[]="({)}";
     char s2[]="{(())}";
    printf("la resultat correspondant de la premiere expression \"({)}\":\n");
    ResultatDeParenthesesCor(s1);
    printf("la resultat correspondant de la deuxieme expression \"{(())}\":\n");
    ResultatDeParenthesesCor(s2);
    return 0;
}
