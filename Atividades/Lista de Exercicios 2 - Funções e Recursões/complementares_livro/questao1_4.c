#include <stdio.h>

int soma_impares(int n) {
    int soma = 0;
    int impar = 1;
    int i;

    for (i = 0; i < n; i++) {
        soma = soma + impar;
        impar = impar + 2;
    }
    return soma;
}

int main(void) {
    printf("Soma dos 4 primeiros impares: %d\n", soma_impares(4));
    return 0;
}