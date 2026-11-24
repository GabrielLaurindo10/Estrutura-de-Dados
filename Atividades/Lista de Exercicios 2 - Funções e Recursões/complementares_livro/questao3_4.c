#include <stdio.h>

double avalia(double* poli, int grau, double x) {
    double resultado = 0.0;
    double potencia_x = 1.0;
    int i;

    for (i = 0; i <= grau; i++) {
        resultado = resultado + (poli[i] * potencia_x);
        potencia_x = potencia_x * x;
    }
    return resultado;
}

int main(void) {
    // 3x^2 + 2x + 12 para x = 2 -> 3(4) + 2(2) + 12 = 28
    double p[3] = {12.0, 2.0, 3.0};
    printf("Resultado: %.2lf\n", avalia(p, 2, 2.0));
    return 0;
}