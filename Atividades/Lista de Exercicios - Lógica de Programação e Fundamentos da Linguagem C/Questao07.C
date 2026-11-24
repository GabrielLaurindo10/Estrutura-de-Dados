#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, h;

    printf("Digite o primeiro cateto: ");
    scanf("%f", &a);
    printf("Digite o segundo cateto: ");
    scanf("%f", &b);

    h = sqrt(a * a + b * b);

    printf("Hipotenusa: %.2f\n", h);
    return 0;
}