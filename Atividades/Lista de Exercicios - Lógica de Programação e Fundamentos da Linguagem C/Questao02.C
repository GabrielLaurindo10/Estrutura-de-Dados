#include <stdio.h>

int main(void)
{
    float distancia, litros, consumo;

    printf("Distancia percorrida (km): ");
    scanf("%f", &distancia);
    printf("Litros consumidos: ");
    scanf("%f", &litros);

    consumo = distancia / litros;

    printf("Consumo medio: %.2f km/l\n", consumo);
    return 0;
}