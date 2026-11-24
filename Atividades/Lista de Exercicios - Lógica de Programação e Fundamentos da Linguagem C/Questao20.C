#include <stdio.h>

int main(void)
{
    int i;
    float polegadas, centimetros;

    printf("Polegadas   Centimetros\n");

    for (i = 0; i <= 20; i++) {
        polegadas = i * 0.5;
        centimetros = polegadas * 2.54;
        printf("%.1f         %.2f\n", polegadas, centimetros);
    }
    return 0;
}