//
// Created by 小金 on 2023/4/12.
//

#ifndef DEVOIR1_LISTESCHAINEES_H
#define DEVOIR1_LISTESCHAINEES_H

#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>

//TypeData
typedef struct Element {  //定义结点
    int nombre;  //数据域
    struct Element *suivant;  //指针域
} Element; //别名

//la structure de contrôle
typedef struct Liste {
    Element *premier;  //pointeur vers le premier element de la liste 指向第一个结点
    int cnt;   //compteur des element de la liste 计数器
} Liste;


//initialisation
Liste *initialisation() {
//    Liste *liste = (Liste*)malloc(sizeof(Liste));  //分配一个头结点
    Liste *liste = malloc(sizeof(*liste));

    if (liste == NULL) {  //判断内存是否分配成功
        exit(EXIT_FAILURE);
    }

    liste->premier = NULL;
    liste->cnt = 0;

    return liste;
}

//ajout au debut de la liste
void inserTete(Liste *liste, int nvNombre) {
    //Element *nouveau = (Element*) malloc(sizeof(Element));
    Element *nouveau = malloc(sizeof(*nouveau));
    if (liste == NULL || nouveau == NULL) {
        exit(EXIT_FAILURE);
    }

    nouveau->suivant = liste->premier;  //第一个元素的地址赋给新结点的指针域
    nouveau->nombre = nvNombre;  //需要插入的数据存入新节点的数据域
    liste->premier = nouveau;  //把新结点的地址赋给头结点
    liste->cnt += 1;  //计数器+1

}

//ajout a la fin de la liste
void inserQueue(Liste *liste, int nvNombre) {
    //如果链表是空的，则在开头添加结点
    if (liste->premier == NULL) {
        printf("la liste est vide\n");
        inserTete(liste, nvNombre);  //在开头添加结点
    }

    //创建一个新结点
    Element *nouveau = malloc(sizeof(*nouveau));
    if (nouveau == NULL) {
        printf("erreur d'allocation mémoire\n"); //分配内存失败
        exit(0);
    }

    nouveau->nombre = nvNombre;
    nouveau->suivant = NULL;

    //连接新结点和链表(actuel从首元结点开始一直往下走，直到最后一个结点）
    Element *actuel = liste->premier; //定义一个用于定位标
    while (actuel->suivant != NULL) { //如果actuel的地址域不为NULL（没到最后一个结点）
        actuel = actuel->suivant; //则往下移一个
    }
    actuel->suivant = nouveau;  //最后一个结点的地址域指向新结点
    liste->cnt += 1;  //计数器＋1
}

//ajout a la Ième position
void inserPos(Liste *liste, int nvNombre, int i) {
    if (liste->premier == NULL || i == 0) {  //如果链表为空，或者在第0个位置添加结点，则在开头插入结点
        inserTete(liste, nvNombre);
    } else {
        if (i < liste->cnt) {  //i小于结点数
            Element *nouveau = (Element *) malloc(sizeof(Element)); //创建新结点
            if (nouveau->suivant == NULL) { //判断内存是否分配成功
                printf("erreur d'allocation mémoire\n");
                exit(0);
            }
            Element *actuel = liste->premier; //创建定位标
            for (int t = 1; t < i; t++) {  //定位到第i-1个结点
                actuel = actuel->suivant;
            }
            nouveau->nombre = nvNombre;
            nouveau->suivant = actuel->suivant;  //把第i-1后一个结点的地址赋给新结点的地址域
            actuel->suivant = nouveau;  //把新结点的地址赋给第i-1个结点
            liste->cnt += 1;
        } else { //如果i>=结点数，则在最后添加结点
            inserQueue(liste, nvNombre);
        }
    }
}

//retrait au debut de la liste
void suppTete(Liste *liste) {
    if (liste->premier == NULL) {
        printf("la liste est vide\n");
        exit(0);
    }
    Element *suppE = liste->premier;  //新建一个指针指向第一个元素（以防第一个元素丢失）
    liste->premier = liste->premier->suivant;  //头结点指向第二个结点
    free(suppE);  //删除第一个结点（释放第一个结点的内存）
    liste->cnt--;  //计数器-1
}

//retrait a la fin de la liste
void suppQueue(Liste *liste) {
    if (liste->premier == NULL) {
        printf("la liste est vide\n");
        exit(0);
    }
    if (liste->cnt == 1) { //如果链表只有一个元素，则删除整个链表
        free(liste);
    } else {
        //找到最后一个结点
        Element *actuel = liste->premier;
        while (actuel->suivant->suivant != NULL) {
            actuel = actuel->suivant;
        }
        free(actuel->suivant);  //释放倒数最后一个结点的指针域
        actuel->suivant = NULL;  //将倒数第二个结点的指针域赋NULL值
        liste->cnt--;
    }
}

//retrait à la Ième retrait
void suppElemPos(Liste *liste, int i) {
    if (liste->premier == NULL && i < 1) {
        printf("la liste est vide");
        exit(0);
    }
    if (liste->cnt == 1) {
        suppTete(liste);
    } else {
        Element *avant = liste->premier;
        for (int t = 1; t < i; t++) { //找到第i-1个元素
            avant = avant->suivant;
        }
        Element *suppElem = avant->suivant; //储存要删除的结点的地址
        avant->suivant = suppElem->suivant; //将第i-1个结点和第i+1个结点相连
        free(suppElem);  //删除结点
        liste->cnt--;
    }
}


#endif //DEVOIR1_LISTESCHAINEES_H

