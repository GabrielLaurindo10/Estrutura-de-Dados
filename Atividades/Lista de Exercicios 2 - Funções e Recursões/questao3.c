#include <stdio.h>

// Prototipo
int maior_de_tres(int a, int b, int c);

int main(void) {
    printf("Teste 1: %d\n", maior_de_tres(3, 9, 5));
    printf("Teste 2: %d\n", maior_de_tres(7, 7, 2));
    printf("Teste 3: %d\n", maior_de_tres(-4, -9, -1));

    return 0;
}

// Definicao
int maior_de_tres(int a, int b, int c) {
    int maior = a;

    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    return maior;
}