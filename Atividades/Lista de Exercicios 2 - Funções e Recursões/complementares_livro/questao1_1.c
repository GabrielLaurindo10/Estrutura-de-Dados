#include <stdio.h>

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y) {
    if (x >= x0 && x <= x1 && y >= y0 && y <= y1) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    printf("Dentro: %d\n", dentro_ret(0, 0, 10, 10, 5, 5));
    printf("Fora: %d\n", dentro_ret(0, 0, 10, 10, 15, 5));
    return 0;
}