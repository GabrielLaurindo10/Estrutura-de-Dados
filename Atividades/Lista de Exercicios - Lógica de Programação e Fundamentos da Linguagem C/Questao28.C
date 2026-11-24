#include <stdio.h>

int main(void)
{
    int numero, digito, soma = 0;

    printf("Digite um numero natural: ");
    scanf("%d", &numero);

    while (numero > 0) {
        digito = numero % 10;   /* pega o ultimo digito */
        soma = soma + digito;
        numero = numero / 10;   /* remove o ultimo digito */
    }

    printf("Soma dos digitos: %d\n", soma);
    return 0;
}