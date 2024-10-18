#include "ListesChainees.h"
#include "ListesChaineesCirculaires.h"
#include "ListesDoublementChainees.h"
#include "Supprimer.h"
#include "Afficher.h"

int main() {
    ///测试普通链表
    printf("//测试普通链表:\n");
    //初始化链表
    Liste *liste=initialisation();

    //在头、尾、第i位插入
    printf("在链表头插入1:\n");
    inserTete(liste,1);
    afficherApartirDebut(liste);
    printf("在链表尾部插入2:\n");
    inserQueue(liste,2);
    afficherApartirDebut(liste);
    printf("在链表第二个位置插入元素2:\n");
    inserPos(liste,2,1);
    afficherApartirDebut(liste);
    inserQueue(liste,3);
    inserQueue(liste,3);
    inserQueue(liste,4);
    inserQueue(liste,4);

    //打印链表
    printf("插入元素后，打印链表:\n");
    afficherApartirDebut(liste);

    //在头、尾、第i位删除
    printf("删除链表头元素:\n");
    suppTete(liste);
    afficherApartirDebut(liste);
    printf("删除链表尾元素:\n");
    suppQueue(liste);
    afficherApartirDebut(liste);
    printf("删除链表第2个元素:\n");
    suppElemPos(liste,1);
    afficherApartirDebut(liste);

    free(liste);

    //重置链表
    printf("重置链表:\n");
    Liste *liste1=initialisation();

    inserTete(liste1,1);
    inserQueue(liste1,2);
    inserQueue(liste1,2);
    inserQueue(liste1,3);
    inserQueue(liste1,3);
    inserQueue(liste1,4);
    inserQueue(liste1,4);
    afficherApartirDebut(liste1);

//    删除普通链表中重复元素
    suppElemDouble(liste1);
    afficherApartirDebut(liste1);

    free(liste1);

    //删除链表中所有的元素n
//    afficherApartirDebut(liste);
//    supprimer_n(liste,1);
//    afficherApartirDebut(liste);
//    supprimer_n(liste,3);
//    afficherApartirDebut(liste);

    printf("-------------------------------\n");


    ///测试循环链表
    printf("//测试循环链表:\n");

    //初始化链表
    ListeCir *listeCir=initialisationCir();

    //在头、尾、第i位插入
    printf("在链表头插入1:\n");
    inserTeteCir(listeCir,1);
    afficherApartirDebutCir(listeCir);
    printf("在链表尾部插入2:\n");
    inserQueueCir(listeCir,2);
    afficherApartirDebutCir(listeCir);
    printf("在链表第二个位置插入元素2:\n");
    inserPosCir(listeCir,2,1);
    afficherApartirDebutCir(listeCir);
    inserQueueCir(listeCir,3);
    inserQueueCir(listeCir,3);
    inserQueueCir(listeCir,4);
    inserQueueCir(listeCir,4);

    //打印链表
    printf("插入元素后，打印链表:\n");
    afficherApartirDebutCir(listeCir);

    //在头、尾、第i位删除
    printf("删除链表头元素:\n");
    suppTeteCir(listeCir);
    afficherApartirDebutCir(listeCir);
    printf("删除链表尾元素:\n");
    suppQueueCir(listeCir);
    afficherApartirDebutCir(listeCir);
    printf("删除链表第2个元素:\n");
    suppElemPosCir(listeCir,1);
    afficherApartirDebutCir(listeCir);

    //重置链表
    printf("重置链表:\n");
    ListeCir *listeCir2=initialisationCir();
    //在头、尾、第i位插入
    inserTeteCir(listeCir2,1);
    inserQueueCir(listeCir2,2);
    inserQueueCir(listeCir2,3);
    inserPosCir(listeCir2,2,2);
    inserQueueCir(listeCir2,3);
    inserQueueCir(listeCir2,4);
    inserQueueCir(listeCir2,4);
    afficherApartirDebutCir(listeCir2);

    //删除循环链表中重复元素
    printf("删除链表中重复元素:\n");
    suppElemDouble_Cir(listeCir2);
    afficherApartirDebutCir(listeCir2);

    printf("-------------------------------\n");

    //删除链表中所有匹配的n
//    afficherApartirDebutCir(listeCir);
//    supprimer_n_Cir(listeCir,1);
//    afficherApartirDebutCir(listeCir);
//    supprimer_n_Cir(listeCir,4);
//    afficherApartirDebutCir(listeCir);

    ///测试双链表
    printf("测试双链表:\n");
    //初始化链表
    ListeDou *listeDou=initialisationDou();

    //在头、尾、第i位插入
    printf("在链表头插入1:\n");
    inserTeteDou(listeDou,1);
    afficherApartirDebutDou(listeDou);
    printf("在链表尾部插入2:\n");
    inserQueueDou(listeDou,2);
    afficherApartirDebutDou(listeDou);
    printf("在链表第二个位置插入元素2:\n");
    inserPosDou(listeDou,2,1);
    afficherApartirDebutDou(listeDou);
    inserQueueDou(listeDou,3);
    inserQueueDou(listeDou,3);
    inserQueueDou(listeDou,4);
    inserQueueDou(listeDou,4);

    //打印链表
    printf("插入元素后，打印链表:\n");
    afficherApartirDebutDou(listeDou);

    //在头、尾、第i位删除
    printf("删除链表头元素:\n");
    suppTeteDou(listeDou);
    afficherApartirDebutDou(listeDou);
    printf("删除链表尾元素:\n");
    suppQueueDou(listeDou);
    afficherApartirDebutDou(listeDou);
    printf("删除链表第3个元素:\n");
    suppElemPosDou(listeDou,2);
    afficherApartirDebutDou(listeDou);

    //重置链表
    printf("重置链表:\n");
    ListeDou *listeDou1=initialisationDou();

    inserTeteDou(listeDou1,1);
    inserPosDou(listeDou1,2,1);
    inserQueueDou(listeDou1,2);
    inserQueueDou(listeDou1,3);
    inserQueueDou(listeDou1,3);
    inserQueueDou(listeDou1,4);
    inserQueueDou(listeDou1,4);
    afficherApartirDebutDou(listeDou1);

    //删除双链表中重复元素
    printf("删除链表中重复元素:\n");
    suppElemDouble_Dou(listeDou1);
    afficherApartirDebutDou(listeDou1);

    //删除链表中所有匹配的n
//    afficherApartirDebutDou(listeDou);
//    supprimer_n_Dou(listeDou,1);
//    afficherApartirDebutDou(listeDou);
//    supprimer_n_Dou(listeDou,3);
//    afficherApartirDebutDou(listeDou);

}
