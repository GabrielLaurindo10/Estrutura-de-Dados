#include <stdio.h>
#include <math.h>

int main(void)
{
    float x, resultado = 1;
    int n, i;

    printf("Digite x: ");
    scanf("%f", &x);
    printf("Digite n: ");
    scanf("%d", &n);

    /* Parte 1: multiplicacoes sucessivas */
    for (i = 1; i <= n; i++) {
        resultado = resultado * x;
    }
    printf("Com repeticao: %.2f\n", resultado);

    /* Parte 2: usando pow() da math.h */
    printf("Com pow(): %.2f\n", pow(x, n));
    return 0;
}