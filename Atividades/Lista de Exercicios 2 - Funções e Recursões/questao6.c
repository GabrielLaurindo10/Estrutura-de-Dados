#include <stdio.h>

int soma_ate_rec(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + soma_ate_rec(n - 1);
}

int soma_ate_iter(int n) {
    int soma = 0;
    int i;
    for (i = 1; i <= n; i++) {
        soma = soma + i;
    }
    return soma;
}

int main(void) {
    printf("Recursivo: %d\n", soma_ate_rec(4));
    printf("Iterativo: %d\n", soma_ate_iter(4));
    return 0;
}