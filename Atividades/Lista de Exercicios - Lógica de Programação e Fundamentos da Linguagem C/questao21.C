#include <stdio.h>

int main(void)
{
    int n, i;
    long long fatorial = 1;

    printf("Digite n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fatorial = fatorial * i;
    }

    printf("%d! = %lld\n", n, fatorial);
    return 0;
}