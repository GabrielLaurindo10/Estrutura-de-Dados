#ifndef PONTO_H
#define PONTO_H

typedef struct ponto {
  int x;
  int y;
} ponto;

float calcular_distancia(ponto p1, ponto p2);

#endif