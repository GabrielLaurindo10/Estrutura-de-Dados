#include <stdio.h>

void deriva(double* poli, int grau, double* out) {
    int i;
    for (i = 1; i <= grau; i++) {
        out[i - 1] = i * poli[i];
    }
}

int main(void) {
    double p[3] = {12.0, 2.0, 3.0};
    double d[2];
    int i;

    deriva(p, 2, d);
    for (i = 0; i < 2; i++) {
        printf("%.1lf ", d[i]);
    }
    printf("\n");
    return 0;
}