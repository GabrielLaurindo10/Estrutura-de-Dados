#include <stdio.h>

int main(void)
{
    float a, b, c, maior;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Digite o terceiro numero: ");
    scanf("%f", &c);

    maior = a;   

    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    printf("O maior e: %.2f\n", maior);
    return 0;
}