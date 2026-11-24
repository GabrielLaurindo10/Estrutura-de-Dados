#include <stdio.h>

int somatorio(int n, int acumulador);

int main(void)
{
    int valor = 5;
    int resultado = somatorio(valor); 
    printf("O somatório de %d com seus antecessores é: %d\n", valor, resultado);

    return 0;   
}

int somatorio(int n, int acumulador){
    if (n < 0){
    printf("Valor inválido\n");
    return -1;}

    // Tratamento do caso base de recursão
    if(n == 0){
        return 0;
    }
    // passo recursivo 
    return n + somatorio(n - 1);}