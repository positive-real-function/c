//
// Created by 小金 on 2023/5/16.
//

#ifndef MAIN_C_PARENTHESESCORRESPONDENT_H
#define MAIN_C_PARENTHESESCORRESPONDENT_H

#include "OperationDePileL.h"

//Ex1. 括号匹配
//Vérificateur de correspondance des parenthèses
int EstParenthesesEquilibrees(const char *expression){
    Pile pile;
    pile=Initialiser();

    int i=0;
    char ch;
    while((ch=expression[i++])!='\0'){
        switch (ch) {
            case '(':
            case '[':
            case '{':
                Empiler(&pile,ch);
                break;
            case ')':
                if(EstVide(pile)||Depiler(&pile)!='(')
                    return 0;
                break;
            case ']':
                if(EstVide(pile)|| Depiler(&pile)!='[')
                    return 0;
                break;
            case '}':
                if(EstVide(pile)||Depiler(&pile)!='{')
                    return 0;
                break;
        }
    }
    return EstVide(pile);
}

void ResultatDeParenthesesCor(char *expression){
    if(EstParenthesesEquilibrees(expression)){
        printf("la expression est convenable.\n");
    }else{
        printf("la expression n'est pas convenable!\n");
    }
}

#endif //MAIN_C_PARENTHESESCORRESPONDENT_H
