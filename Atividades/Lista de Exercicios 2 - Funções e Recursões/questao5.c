#include <stdio.h>

int contagem_caudal(int n, int soma) {
    if (n == 0) {
        return soma;
    }
    return contagem_caudal(n - 1, soma + 1);
}

int main(void) {
    printf("Resultado: %d\n", contagem_caudal(4, 0));
    return 0;
}