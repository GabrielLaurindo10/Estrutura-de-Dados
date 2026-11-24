#include <stdio.h>

int pares(int n, int* vet) {
    int cont = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (vet[i] % 2 == 0) {
            cont++;
        }
    }
    return cont;
}

int main(void) {
    int v[5] = {1, 2, 3, 4, 6};
    printf("Pares: %d\n", pares(5, v));
    return 0;
}