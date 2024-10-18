//
// Created by 小金 on 2023/5/16.
//

#ifndef MAIN_C_INFIX_POSTFIX_H
#define MAIN_C_INFIX_POSTFIX_H

#include <ctype.h>
#include "OperationDePileL.h"

//判断优先级
int precedence(char x)
{
    if (x == '(')
        return(0);
    if (x == '+' || x == '-')
        return(1);
    if (x == '*' || x == '/' || x == '%')
        return(2);
    if (x == '^')
        return(3);
    return(4);
}

//中缀表达式转后缀表达式
void Infix_Postfix(const char *expn,char *output){
    Pile pile=Initialiser();
    char ch,op;  //ch:用来遍历字符串 op:用来记录删除的字符
    int i=0;
    int index = 0; //index:用于输出字符串长度增加
    int digit; //digit(1/0):用于判断是否是数字

    while ((ch=expn[i++])!='\0'){
        if(isdigit(ch)){ //如果是数字则放入output
            output[index++]=ch;
            digit=1;
            continue;
        } else{ //用来判断两位数
            if(digit){//如果不是数字，且上一个是数字，则空格
                output[index++]=' ';
                digit=0;
            }
        }
        switch (ch) {
            case '+':
            case '-':
            case '*':
            case '/':
            case '%':
            case '^':
                while(!EstVide(pile) && precedence(ch)<= precedence(Sommet(pile))){
                    //判断符号优先级，如果符号ch优先级小于等于栈顶符号，则把栈顶元素放入output，再把ch入栈
                    op= Depiler(&pile);
                    output[index++]=op;
                    output[index++]=' ';
                }
                Empiler(&pile,ch);  //符号入栈
                break;
            case '(':  //如果ch是左括号，则入栈
                Empiler(&pile,ch);
                break;
            case ')':
                while (!EstVide(pile) && (op= Depiler(&pile))!='('){
                    //把栈内符号出栈，放到output中，直到遇到'('
                    output[index++]=op;
                    output[index++]=' ';
                }
                break;
        }
    }
    while (!EstVide(pile)){ //把剩下的符号依次放到output中
        output[index++]=' ';
        op= Depiler(&pile);
        output[index++]=op;

    }
    output[index++]='\0';
}
#endif //MAIN_C_INFIX_POSTFIX_H
