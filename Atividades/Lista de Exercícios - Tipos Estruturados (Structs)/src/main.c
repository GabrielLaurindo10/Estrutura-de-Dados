#include <stdio.h>
#include "../include/geometria.h"
#include "../include/aluno.h"

int main() {
    // --- Teste Questão 1 ---
    Ponto v1 = {0, 0};
    Ponto v2 = {10, 10};
    Ponto p = {5, 5};
    
    printf("Questao 1 (1 = dentro, 0 = fora): %d\n\n", dentroRet(&v1, &v2, &p));

    // --- Teste Questão 2 ---
    Vetor vet1 = {1, 2, 3};
    Vetor vet2 = {4, 5, 6};
    
    printf("Questao 2 (Produto escalar): %.2f\n\n", dot(&vet1, &vet2));

    // --- Teste Questões 3 e 4 ---
    Aluno a1 = {"Joao Silva", "202601", 'A', 7.0, 8.0, 9.0};
    Aluno a2 = {"Maria Souza", "202602", 'A', 4.0, 5.0, 5.0};
    Aluno a3 = {"Pedro Alves", "202603", 'B', 8.0, 8.5, 9.0};

    // Vetor simples com os endereços dos alunos
    Aluno* lista[3] = {&a1, &a2, &a3};

    printf("Questao 3 (Aprovados):\n");
    imprime_aprovados(3, lista);
    printf("\n");

    printf("Questao 4 (Media Turma A): %.2f\n", media_turma(3, lista, 'A'));
    printf("Questao 4 (Media Turma B): %.2f\n", media_turma(3, lista, 'B'));

    return 0;
}