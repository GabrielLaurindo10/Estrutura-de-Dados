#include <stdio.h>

int main(void)
{
    float numero;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    if (numero < 0) {
        numero = -numero;
    }

    printf("Valor absoluto: %.2f\n", numero);
    return 0;
}