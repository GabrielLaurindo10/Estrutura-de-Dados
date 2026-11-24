#include "../include/geometria.h"

// Questão 1
int dentroRet(Ponto* v1, Ponto* v2, Ponto* p) {
    if (p->x >= v1->x && p->x <= v2->x && p->y >= v1->y && p->y <= v2->y) {
        return 1;
    } else {
        return 0;
    }
}

// Questão 2
float dot(Vetor* v1, Vetor* v2) {
    return (v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z);
}