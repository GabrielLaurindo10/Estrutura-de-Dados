#include <stdio.h>

void calc_esfera(float r, float* area, float* volume) {
    float pi = 3.14159;
    *area = 4.0 * pi * r * r;
    *volume = (4.0 * pi * r * r * r) / 3.0;
}

int main(void) {
    float a, v;
    calc_esfera(3.0, &a, &v);
    printf("Area: %.2f | Volume: %.2f\n", a, v);
    return 0;
}