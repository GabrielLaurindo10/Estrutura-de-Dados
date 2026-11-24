#include <stdio.h>

int main(void)
{
    float salario, novo_salario;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    novo_salario = salario * 1.05;   /* reajuste de 5% */

    if (salario <= 750) {
        novo_salario = novo_salario + 100;   /* abono */
    }

    printf("Novo salario: R$ %.2f\n", novo_salario);
    return 0;
}