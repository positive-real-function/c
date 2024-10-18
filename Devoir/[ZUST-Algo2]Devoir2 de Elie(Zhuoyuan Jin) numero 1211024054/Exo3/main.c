#include <stdio.h>
#include "Infix_Postfix.h"
int main() {
    char str[]="1+(2/3-(4*5^6)+7)*8";
    char output[20];
    printf("L'expression infixe est :\n");
    printf("%s\n",str);
    Infix_Postfix(str,output);
    printf("L'expression postfixe est :\n");
    printf("%s",output);
    return 0;
}
