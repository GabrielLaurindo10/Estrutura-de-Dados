#include <stdio.h>

int main(void)
{
    int classe = 0, opcao;
    float valor;

    while (classe != 4) {
        printf("\n===== MENU =====\n");
        printf("1. Peso\n");
        printf("2. Volume\n");
        printf("3. Comprimento\n");
        printf("4. Sair\n");
        printf("Escolha: ");
        scanf("%d", &classe);

        if (classe == 1) {
            printf("\n1. Libra -> Quilograma\n");
            printf("2. Quilograma -> Libra\n");
            printf("3. Onca -> Grama\n");
            printf("4. Grama -> Onca\n");
            printf("Escolha: ");
            scanf("%d", &opcao);
            if (opcao >= 1 && opcao <= 4) {
                printf("Valor a converter: ");
                scanf("%f", &valor);
            }
            switch (opcao) {
                case 1: printf("Resultado: %.4f kg\n", valor * 0.4536); break;
                case 2: printf("Resultado: %.4f lb\n", valor / 0.4536); break;
                case 3: printf("Resultado: %.4f g\n", valor * 28.3495); break;
                case 4: printf("Resultado: %.4f oz\n", valor / 28.3495); break;
                default: printf("Opcao invalida!\n");
            }
        } else if (classe == 2) {
            printf("\n1. Galao -> Litro\n");
            printf("2. Litro -> Galao\n");
            printf("3. Onca Liquida -> Mililitro\n");
            printf("4. Mililitro -> Onca Liquida\n");
            printf("Escolha: ");
            scanf("%d", &opcao);
            if (opcao >= 1 && opcao <= 4) {
                printf("Valor a converter: ");
                scanf("%f", &valor);
            }
            switch (opcao) {
                case 1: printf("Resultado: %.4f L\n", valor * 3.7854); break;
                case 2: printf("Resultado: %.4f galoes\n", valor / 3.7854); break;
                case 3: printf("Resultado: %.4f mL\n", valor * 29.5735); break;
                case 4: printf("Resultado: %.4f fl oz\n", valor / 29.5735); break;
                default: printf("Opcao invalida!\n");
            }
        } else if (classe == 3) {
            printf("\n1. Milha -> Quilometro\n");
            printf("2. Quilometro -> Milha\n");
            printf("3. Jarda -> Metro\n");
            printf("4. Metro -> Jarda\n");
            printf("Escolha: ");
            scanf("%d", &opcao);
            if (opcao >= 1 && opcao <= 4) {
                printf("Valor a converter: ");
                scanf("%f", &valor);
            }
            switch (opcao) {
                case 1: printf("Resultado: %.4f km\n", valor * 1.6093); break;
                case 2: printf("Resultado: %.4f milhas\n", valor / 1.6093); break;
                case 3: printf("Resultado: %.4f m\n", valor * 0.9144); break;
                case 4: printf("Resultado: %.4f jardas\n", valor / 0.9144); break;
                default: printf("Opcao invalida!\n");
            }
        } else if (classe == 4) {
            printf("Saindo...\n");
        } else {
            printf("Opcao invalida!\n");
        }
    }
    return 0;
}