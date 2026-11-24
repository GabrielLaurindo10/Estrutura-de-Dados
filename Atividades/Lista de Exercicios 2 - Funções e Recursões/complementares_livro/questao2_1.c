#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, float* x1, float* x2) {
    float delta = (b * b) - (4 * a * c);

    if (delta < 0) {
        return 0;
    } else if (delta == 0) {
        *x1 = -b / (2 * a);
        *x2 = *x1;
        return 1;
    } else {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 2;
    }
}

int main(void) {
    float r1, r2;
    int qtd = raizes(1, -5, 6, &r1, &r2);
    printf("Qtd raizes: %d | x1 = %.2f, x2 = %.2f\n", qtd, r1, r2);
    return 0;
}