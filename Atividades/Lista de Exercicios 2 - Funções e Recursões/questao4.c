#include <stdio.h>

int nota_valida(float nota);
float calcular_media(float n1, float n2, float n3);
void situacao(float media);

int main(void) {
    float n1, n2, n3, media;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    if (nota_valida(n1) == 1 && nota_valida(n2) == 1 && nota_valida(n3) == 1) {
        media = calcular_media(n1, n2, n3);
        printf("Media: %.1f\n", media);
        situacao(media);
    } else {
        printf("Erro: nota invalida digitada.\n");
    }

    return 0;
}

int nota_valida(float nota) {
    if (nota >= 0.0 && nota <= 10.0) {
        return 1;
    } else {
        return 0;
    }
}

float calcular_media(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0;
}

void situacao(float media) {
    if (media >= 7.0) {
        printf("Situacao: Aprovado\n");
    } else if (media >= 4.0) {
        printf("Situacao: Recuperacao\n");
    } else {
        printf("Situacao: Reprovado\n");
    }
}