#include <stdio.h>
#include "ponto.h"

int main(void){
  ponto p1;
  ponto p2;

    ponto *pp = &p1; // Ponteiro para a estrutura do primeiro ponto
    (*pp).x = 15; // Acessando o campo interno via ponteiro
    (*pp).y = 20; // os () são necessários devido a precedência 

  // Leitura do primeiro ponto
  printf("Digite as coordenadas do primeiro ponto (x y): ");
  scanf("%d %d", &p1.x, &p1.y);

  // Leitura do segundo ponto
  printf("Digite as coordenadas do segundo ponto (x y): ");
  scanf("%d %d", &p2.x, &p2.y);

  printf("Ponto 1: (%d, %d)\n", p1.x, p1.y);
  printf("Ponto 2: (%d, %d)\n", p2.x, p2.y);

  printf("Distancia entre os pontos: %.2f\n",
           calcular_distancia(p1, p2));

  return 0;
}