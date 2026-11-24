#include <stdio.h>

int main(void)
{
    int numero, menor, maior;

    printf("Digite um numero (0 para parar): ");
    scanf("%d", &numero);

    menor = numero;
    maior = numero;

    while (numero != 0) {
        if (numero < menor) {
            menor = numero;
        }
        if (numero > maior) {
            maior = numero;
        }
        printf("Digite um numero (0 para parar): ");
        scanf("%d", &numero);
    }

    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);
    return 0;
}