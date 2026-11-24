#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Digite n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d -> %d\n", i, i * i);
    }
    return 0;
}