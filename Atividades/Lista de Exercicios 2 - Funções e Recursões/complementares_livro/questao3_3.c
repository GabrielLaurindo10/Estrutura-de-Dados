#include <stdio.h>

void inverte(int n, int* vet) {
    int i, temp;
    for (i = 0; i < n / 2; i++) {
        temp = vet[i];
        vet[i] = vet[n - 1 - i];
        vet[n - 1 - i] = temp;
    }
}

int main(void) {
    int v[4] = {10, 20, 30, 40};
    int i;
    inverte(4, v);
    for (i = 0; i < 4; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}