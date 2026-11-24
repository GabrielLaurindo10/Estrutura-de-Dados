#include <stdio.h>

int main(void)
{
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("Media: %.2f\n", media);

    if (media >= 7.0) {
        printf("Aprovado\n");
    } else if (media < 3.0) {
        printf("Reprovado\n");
    } else {
        printf("Recuperacao\n");
    }
    return 0;
}