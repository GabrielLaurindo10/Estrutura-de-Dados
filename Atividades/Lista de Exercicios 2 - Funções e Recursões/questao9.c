#include <stdio.h>

// Prototipo da funcao recursiva
double calcular_divida(double S, double r, double P, int n);

int main(void) {
    double S, taxa_percentual, r, P, saldo_final;
    int n;

    printf("Digite o valor inicial da divida: ");
    scanf("%lf", &S);

    printf("Digite a taxa de juros mensal (em %%): ");
    scanf("%lf", &taxa_percentual);

    printf("Digite o valor do pagamento mensal: ");
    scanf("%lf", &P);

    printf("Digite o numero de meses: ");
    scanf("%d", &n);

    // Tratamento de entradas invalidas
    if (S < 0 || taxa_percentual < 0 || P < 0 || n < 0) {
        printf("Erro: Os valores nao podem ser negativos.\n");
        return 1;
    }

    // Converte a taxa de porcentagem para decimal (ex: 2% vira 0.02)
    r = taxa_percentual / 100.0;

    saldo_final = calcular_divida(S, r, P, n);

    printf("Saldo devedor apos %d meses: R$ %.2lf\n", n, saldo_final);

    return 0;
}

double calcular_divida(double S, double r, double P, int n) {
    if (S <= 0.0) {
        return 0.0;
    }

    if (n == 0) {
        return S;
    }

    double novo_saldo = S * (1.0 + r) - P;

    if (novo_saldo <= 0.0) {
        return 0.0;
    }

    return calcular_divida(novo_saldo, r, P, n - 1);
}