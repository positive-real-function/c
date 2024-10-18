//
// Created by 小金 on 2023/5/29.
//

#ifndef EXO4_COPIERLESNOMBRESPAIRS_H
#define EXO4_COPIERLESNOMBRESPAIRS_H
#include "OperationDeFile.h"

void CopierPair(File *F1, File *F2) {
    TypeCellule *indice_impair,*indice_pair;
    indice_impair = F1->tete;
    while (indice_impair!=NULL) {
        if((indice_impair->donnee)%2==0){
            Enfiler(F2,indice_impair->donnee);
        }
        indice_impair=indice_impair->suivant;
    }
    indice_pair=F1->tete;
}

#endif //EXO4_COPIERLESNOMBRESPAIRS_H
