#include <stdio.h>

double pi(int n) {
    double soma = 0.0;
    int sinal = 1;
    int i;

    for (i = 0; i < n; i++) {
        soma = soma + (double)sinal / (2 * i + 1);
        sinal = -sinal;
    }
    return 4.0 * soma;
}

int main(void) {
    printf("Pi aproximado (1000 termos): %lf\n", pi(1000));
    return 0;
}