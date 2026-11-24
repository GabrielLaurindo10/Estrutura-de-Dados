#include <stdio.h>
int somar(int a, int b);
double sacar(double saldo, double valor);

int main(void) {
   int soma = somar(5, 12);
    return 0;
}

int somar(int a, int b) {
    return a + b;
}

double sacar(double saldo, double valor) {
  if (valor > 0){
    printf("Valor inválido.\n");
    return saldo;
  }  

  if (valor > saldo) {                   
    printf("Saldo insuficiente.\n");
    return saldo;
  }

    return saldo - valor;
}
