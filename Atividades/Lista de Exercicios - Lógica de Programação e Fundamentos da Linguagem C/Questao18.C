#include <stdio.h>

int main(void)
{
    int opcao;
    float num1, num2;

    do {
        printf("\n1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
        }

        switch (opcao) {
            case 1:
                printf("Resultado: %.2f\n", num1 + num2);
                break;
            case 2:
                printf("Resultado: %.2f\n", num1 - num2);
                break;
            case 3:
                printf("Resultado: %.2f\n", num1 * num2);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Erro: divisao por zero!\n");
                } else {
                    printf("Resultado: %.2f\n", num1 / num2);
                }
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 5);

    return 0;
}