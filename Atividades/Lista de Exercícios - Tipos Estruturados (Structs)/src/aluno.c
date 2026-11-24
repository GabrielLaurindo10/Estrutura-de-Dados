#include <stdio.h>
#include "../include/aluno.h"

// Questão 3
void imprime_aprovados(int n, Aluno** turmas) {
    for (int i = 0; i < n; i++) {
        float media = (turmas[i]->p1 + turmas[i]->p2 + turmas[i]->p3) / 3.0;
        
        if (media >= 6.0) {
            printf("Matricula: %s | Nome: %s | Turma: %c | Media: %.2f\n", 
                   turmas[i]->matricula, turmas[i]->nome, turmas[i]->turma, media);
        }
    }
}

// Questão 4
float media_turma(int n, Aluno** turmas, char turma) {
    float soma = 0.0;
    int qtd = 0;

    for (int i = 0; i < n; i++) {
        if (turmas[i]->turma == turma) {
            float media = (turmas[i]->p1 + turmas[i]->p2 + turmas[i]->p3) / 3.0;
            soma = soma + media;
            qtd++;
        }
    }

    if (qtd == 0) {
        return 0.0;
    }

    return soma / qtd;
}