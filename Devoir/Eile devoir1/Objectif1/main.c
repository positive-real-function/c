#include <stdio.h>
#include "Ensemble.h"

int main() {
    //初始化集合
    ///Exo2
    Ensemble *ensemble1 = (Ensemble *) malloc(sizeof(Ensemble));
    ensemble1->NbEMax = 10;
    ensemble1->NbE = 8;
    ///Exo1
    ensemble1->tab = malloc(ensemble1->NbEMax * sizeof(int));

    ///Exo3
//    freeEnsemble(ensemble1);

    ///Exo5
    int arr[8] = {1, 2, 3, 4, 3, 2, 8, 3};
    //将数组存入集合（去重后）
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("未去重前数组为:\n");
    afficherArr(arr,len);
    creerEnsemble(ensemble1, arr, len);

    ///Exo4.打印给定集合
    printf("将数组存入集合后:\n");
    afficherValue(ensemble1);

    ///Exo7.搜索给定元素，在有序集合内返回0，在无序集合内返回1
    printf("在集合中查找整数 3 : \n");
    if(rechercher(3,ensemble1)){
        printf("在无序集合中找到\n");
    }else{
        printf("在有序集合中找到\n");
    }

    printf("------------------------\n");

    //测试
    Ensemble *e1 = (Ensemble *) malloc(sizeof(Ensemble));
    e1->NbEMax = 10;
    int arr1[4] = {1, 3, 5, 7};
    e1->tab = malloc(ensemble1->NbEMax * sizeof(int));
    creerEnsemble(e1,arr1,4);
    printf("集合e1为:\n");
    afficherValue(e1);

    Ensemble *e2 = (Ensemble *) malloc(sizeof(Ensemble));
    e2->NbEMax = 10;
    int arr2[6] = {1,2,4,5,7, 15};
    e2->tab = malloc(ensemble1->NbEMax * sizeof(int));
    creerEnsemble(e2,arr2,6);
    printf("集合e2为:\n");
    afficherValue(e2);

    ///Exo6.测试插入元素
    printf("在集合e1中插入整数 6 后e1为:\n");
    inserElement(6, e1);
    afficherValue(e1);

    //新建一个e_res1集合用于储存交集结果
    Ensemble *e_res1 = (Ensemble *) malloc(sizeof(Ensemble));
    e_res1->NbEMax = e1->NbEMax + e2->NbEMax;
    e_res1->NbE = e1->NbE + e2->NbE;
    e_res1->tab = malloc(ensemble1->NbEMax * sizeof(int));

    ///Exo8.测试交集
    printf("e1与e2的交集为:\n");
    ensembleDeIntersection(e1,e2,e_res1);
    afficherValue(e_res1);

    //新建一个e_res2集合用于储存并集结果
    Ensemble *e_res2 = (Ensemble *) malloc(sizeof(Ensemble));
    e_res2->NbEMax = e1->NbEMax + e2->NbEMax;
    e_res2->NbE = e1->NbE + e2->NbE;
    e_res2->tab = malloc(ensemble1->NbEMax * sizeof(int));

    ///Exo9.测试并集
    printf("e1与e2的并集为:\n");
    ensembleDeUnion(e1, e2, e_res2);
    afficherValue(e_res2);

}

