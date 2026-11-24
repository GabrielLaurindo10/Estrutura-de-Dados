#include <stdio.h>

int fibonacci_rec(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci_rec(n - 1) + fibonacci_rec(n - 2);
}

// Versao iterativa com tipo maior (itens c e d)
unsigned long long int fibonacci_iter(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    unsigned long long int anterior = 0;
    unsigned long long int atual = 1;
    unsigned long long int proximo;
    int i;

    for (i = 2; i <= n; i++) {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    return atual;
}

int main(void) {
    int n = 47;

    printf("Iterativo para n = %d: %llu\n", n, fibonacci_iter(n));
    printf("Calculando recursivo para n = %d (aguarde)...\n", n);
    printf("Recursivo para n = %d: %d\n", n, fibonacci_rec(n));

    return 0;
}