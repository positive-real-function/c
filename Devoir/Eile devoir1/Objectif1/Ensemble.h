//
// Created by 小金 on 2023/4/22.
//

#ifndef DEVOIR1_OBJECTF1_ENSEMBLE_H
#define DEVOIR1_OBJECTF1_ENSEMBLE_H
//
// Created by 小金 on 2023/4/20.
//

#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int NbEMax;    // nombre d'élément maximum de l'ensemble
    int NbE;    // nombre d'élément présents dans l'ensemble
    int *tab;        // conteneur des éléments de l'ensemble
} Ensemble;

//交换
void swap(int *a, int *b) {
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
//排序
void quickSort(int *arr, int low, int high) {
    int pivotKey, pivotLoc;
    int left = low;
    int right = high;
    if (low < high) {
        //保存枢轴点和枢轴值
        pivotLoc = (low + high) / 2;
        pivotKey = arr[pivotLoc];
        while (low < high) {
            while (low < pivotLoc && arr[low] <= pivotKey)low++;
            if (low < pivotLoc) {
                swap(arr + low, arr + pivotLoc);
                pivotLoc = low;
            }

            while (high > pivotLoc && arr[high] >= pivotKey)high--;
            if (high > pivotLoc) {
                swap(arr + high, arr + pivotLoc);
                pivotLoc = high;
            }
        }

        quickSort(arr, left, pivotLoc);
        quickSort(arr, pivotLoc + 1, right);
    }
}

//判断集合是否有序（只考虑正序，倒序暂不考虑）
int estOrdonne(Ensemble *ensemble) {
    // 冒泡的次数
    int count = 0;
    // 上一次交换的"气泡"
    int pop = ensemble->tab[0];
    // 利用单次冒泡检验数组需要冒泡的次数
    for (int j = 0; j < ensemble->NbE - 1; j++) {
        if (ensemble->tab[j] > ensemble->tab[j + 1]) {
            // 判断此次需要向上冒的气泡是否和上次的相同,不同为乱序
            if (pop != ensemble->tab[j]) {
                // 若气泡发生了变化,证明是无序的,停止遍历,返回 0
                return 0;
            }

            int temp = ensemble->tab[j];
            ensemble->tab[j] = ensemble->tab[j + 1];
            ensemble->tab[j + 1] = temp;
            // 两相邻元素交换一次值,count计数一次
            count++;
            pop = ensemble->tab[j + 1];
            //气泡向右移动，可能是逆序，对于逆序序列，还需保证气泡左侧所有的元素大于右侧
            //所以当左侧最小的元素小于右侧元素时，为无序序列
            if (j + 2 < ensemble->NbE) {
                if (ensemble->tab[j] < ensemble->tab[j + 2]) {
                    return 0;
                }
            }
        }
    }
    // 有序返回 1
    if (count == 0) {
        return 1;
    }
}

//合并有序数组
void combinerTabOrdonner(int *tab1, int taille1, int *tab2, int taille2, int *tab_res) {
    int t1=0;
    int t2=0;
    int i=0;
    //任何一个数组长度为 0 时跳出while循环
    while(t1<taille1 && t2<taille2)
    {
        //两个数组进行比较
        if(tab1[t1]<=tab2[t2])
        {
            //把小的元素放到数组tab_res中
            tab_res[i]=tab1[t1];
            //并跳到这个数组的下一个元素
            t1++;
        }
        else
        {
            tab_res[i]=tab2[t2];
            t2++;
        }
        i++;
    }
    //如果数组1还有元素，则把数组1剩余元素加到tab_res数组中
    while(t1<taille1)
    {
        tab_res[i++]=tab1[t1++];
    }
    //同理，如果数组2还有元素，则把数组2剩余元素加到tab_res数组中
    while(t2<taille2)
    {
        tab_res[i++]=tab2[t2++];
    }
}

//合并无序数组
void combinerTabNonOrdonner(int *tab1, int taille1, int *tab2, int taille2, int *tab_res) {
    int i;
    for (i = 0; i < taille1; i++) {
        tab_res[i] = tab1[i];
    }
    for (i = 0; i < taille2; i++) {
        tab_res[taille1 + i] = tab2[i];
    }
}

//打印数组
void afficherArr(int *arr,int len){
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

///Exo1.给由n个元素构成的数组动态分配内存空间
//tab = malloc(NbEMax * sizeof(int));

///Exo2.给集合动态分配内存空间
//Ensemble *ensemble = (Ensemble *) malloc(sizeof(Ensemble));

///Exo3.释放集合的内存
void freeEnsemble(Ensemble *ensemble) {
    free(ensemble);
}

///Exo4.打印给定集合的元素
void afficherValue(Ensemble *ensemble) {
    printf("( ");
    for (int i = 0; i < ensemble->NbE; i++) {
        printf("%d ", ensemble->tab[i]);
    }
    printf(")");
    printf("\n");
}

///Exo5.从数组创建集合
void creerEnsemble(Ensemble *ensemble, int *arr, int len) { //输入集合、数组及数组长度

    if (len > ensemble->NbEMax) {
        printf("数组长度过长，无法放入集合");
        exit(EXIT_FAILURE);
    }
    //初始化
    ensemble->NbE = len;
    //去重
    for (int i = 0; i < len; i++) {
        int k = arr[i];
        for (int j = i + 1; j < len; j++) {
            if (k == arr[j])//判断数组中是否有重的元素
            {
                for (int t = j; t < len - 1; t++) {
                    arr[t] = arr[t + 1];
                }
                len--;
                //集合元素数减1
                ensemble->NbE=ensemble->NbE-1;
                j--;
            }
        }
    }
    //复制数组到集合
    ensemble->tab = arr;
}

///Exo6.将给定元素插入给定集合
//（有序则插入相应位置，无序则插到最后）
void inserElement(int key, Ensemble *ensemble) {
    if (ensemble->NbE >= ensemble->NbEMax) {
        printf("集合元素数已达上限，无法插入！");
        exit(EXIT_FAILURE);
    }
    //如果集合有序
    if (estOrdonne(ensemble)) {
        int i, j;
        for (i = 0; i < ensemble->NbE; i++) {
            if (ensemble->tab[i] > key) {
                break;
            }
        }
        j = i;
        for (int k = ensemble->NbE - 1; k >= j; k--) {
            ensemble->tab[k + 1] = ensemble->tab[k];
        }
        ensemble->tab[j] = key;
        ensemble->NbE += 1;
    } else { //如果无序
        ensemble->tab[ensemble->NbE] = key;
        ensemble->NbE += 1;
    }
}

///Exo7.搜索给定元素，在有序集合内返回0，在无序集合内返回1
int rechercher(int key, Ensemble *ensemble) {
    for (int i = 0; i < ensemble->NbE; i++) {
        if (key == ensemble->tab[i]) {
            if (estOrdonne(ensemble)) {  //如果集合有序则返回0
                return 0;
            } else {  //如果集合无序则返回1
                return 1;
            }
        }
    }
    printf("在集合中未找到该元素！\n");
}

///Exo8.实现交集
void ensembleDeIntersection(Ensemble *ensemble1, Ensemble *ensemble2, Ensemble *ensemble_res) {
    //先去重
    creerEnsemble(ensemble1, ensemble1->tab, ensemble1->NbE);
    creerEnsemble(ensemble2, ensemble2->tab, ensemble2->NbE);
    //1.如果有序
    if (estOrdonne(ensemble1) && estOrdonne(ensemble2)) {
        for (int i = 0, j = 0, k = 0; i < ensemble1->NbE && j < ensemble2->NbE;) {
            if (ensemble1->tab[i] == ensemble2->tab[j]) {
                ensemble_res->tab[k] = ensemble1->tab[i];
                i++;
                j++;
                k++;
                ensemble_res->NbE=k;
            } else if (ensemble1->tab[i] < ensemble2->tab[j]) {
                i++;
            } else {
                j++;
            }
        }
    }else{  //如果无序(暂时想不到好办法，先排个序吧）
        quickSort(ensemble1->tab,0,ensemble1->NbE-1);
        quickSort(ensemble2->tab,0,ensemble2->NbE-1);
        for (int i = 0, j = 0, k = 0; i < ensemble1->NbE && j < ensemble2->NbE;) {
            if (ensemble1->tab[i] == ensemble2->tab[j]) {
                ensemble_res->tab[k] = ensemble1->tab[i];
                i++;
                j++;
                k++;
                ensemble_res->NbE=k;
            } else if (ensemble1->tab[i] < ensemble2->tab[j]) {
                i++;
            } else {
                j++;
            }
        }
    }
}

///Exo9.实现并集
void ensembleDeUnion(Ensemble *ensemble1, Ensemble *ensemble2,
                     Ensemble *ensemble_res) {
    //如果数组有序
    if (estOrdonne(ensemble1) && estOrdonne(ensemble2)) {
        ensemble_res->NbE = ensemble1->NbE + ensemble2->NbE;
        //合并两个数组
        combinerTabOrdonner(ensemble1->tab, ensemble1->NbE, ensemble2->tab,
                            ensemble2->NbE, ensemble_res->tab);
        //去重
        creerEnsemble(ensemble_res, ensemble_res->tab, ensemble_res->NbE);
    } else { //如果数组无序
        ensemble_res->NbE = ensemble1->NbE + ensemble2->NbE;
        //合并数组
        combinerTabNonOrdonner(ensemble1->tab, ensemble1->NbE, ensemble2->tab,
                               ensemble2->NbE, ensemble_res->tab);
        //去重
        creerEnsemble(ensemble_res, ensemble_res->tab, ensemble_res->NbE);
    }
}


#endif //DEVOIR1_OBJECTF1_ENSEMBLE_H
