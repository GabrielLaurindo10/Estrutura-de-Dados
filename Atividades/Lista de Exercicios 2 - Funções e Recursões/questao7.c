#include <stdio.h>

long long int fatorial_rec(int n) {
    if (n < 0) {
        return -1; // Entrada invalida
    }
    if (n == 0) {
        return 1;
    }
    return n * fatorial_rec(n - 1);
}

long long int fatorial_iter(int n) {
    if (n < 0) {
        return -1; // Entrada invalida
    }
    long long int fat = 1;
    int i;
    for (i = 1; i <= n; i++) {
        fat = fat * i;
    }
    return fat;
}

int main(void) {
    printf("Fatorial recursivo: %lld\n", fatorial_rec(4));
    printf("Fatorial iterativo: %lld\n", fatorial_iter(4));
    return 0;
}