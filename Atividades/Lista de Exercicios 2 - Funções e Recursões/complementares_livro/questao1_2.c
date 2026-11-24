#include <stdio.h>

int primo(int n) {
    int i;
    if (n <= 1) {
        return 0;
    }
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    printf("7 eh primo? %d\n", primo(7));
    printf("8 eh primo? %d\n", primo(8));
    return 0;
}