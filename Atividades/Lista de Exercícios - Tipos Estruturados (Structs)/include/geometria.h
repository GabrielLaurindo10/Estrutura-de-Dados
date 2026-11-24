#ifndef GEOMETRIA_H
#define GEOMETRIA_H

typedef struct ponto {
    float x;
    float y;
} Ponto;

typedef struct vetor {
    float x;
    float y;
    float z;
} Vetor;

int dentroRet(Ponto* v1, Ponto* v2, Ponto* p);
float dot(Vetor* v1, Vetor* v2);

#endif