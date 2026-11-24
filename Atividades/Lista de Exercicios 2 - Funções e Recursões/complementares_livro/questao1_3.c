#include <stdio.h>

int fibonacci(int n) {
    if (n <= 2) {
        return 1;
    }
    int ant1 = 1;
    int ant2 = 1;
    int atual = 0;
    int i;

    for (i = 3; i <= n; i++) {
        atual = ant1 + ant2;
        ant1 = ant2;
        ant2 = atual;
    }
    return atual;
}

int main(void) {
    printf("6o termo: %d\n", fibonacci(6));
    return 0;
}