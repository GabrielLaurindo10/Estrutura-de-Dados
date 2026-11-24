#include <stdio.h>

int negativos(int n, float* vet) {
    int cont = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (vet[i] < 0) {
            cont++;
        }
    }
    return cont;
}

int main(void) {
    float v[4] = {-2.5, 4.0, -1.0, 0.0};
    printf("Negativos: %d\n", negativos(4, v));
    return 0;
}