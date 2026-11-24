#include <stdio.h>

int main(void)
{
    int total, horas, minutos, segundos;

    printf("Digite os segundos: ");
    scanf("%d", &total);

    horas = total / 3600;
    minutos = (total % 3600) / 60;
    segundos = total % 60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s)\n", horas, minutos, segundos);
    return 0;
}