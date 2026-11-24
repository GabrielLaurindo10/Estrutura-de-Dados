#include <stdio.h>

void draw_tower(int n);
void turbinar_tower(int *tower, int bonus);
void swap_torres(int *a, int *b);

int main() {
    int alfa, beta;
    printf("Digite o nivel inicial da Torre Alfa: ");
    scanf("%d", &alfa);
    printf("Digite o nivel inicial da Torre Beta: ");
    scanf("%d", &beta);

    if (alfa <= 0 || beta <= 0) {
        printf("Nivel invalido!\n");
        return 0;
    }

    printf("\n--- TORRES ORIGINAIS ---\n");
    draw_tower(alfa);
    printf("\n");
    draw_tower(beta);

    turbinar_tower(&alfa, 2);
    swap_torres(&alfa, &beta);

    printf("\n--- TORRES ATUALIZADAS ---\n");
    draw_tower(alfa);
    printf("\n");
    draw_tower(beta);

    return 0;
}

void draw_tower(int n) {
    if (n <= 0) {
        return; 
    }
    
    draw_tower(n - 1); 

    for (int i = 0; i < n; i++) {
        printf("#");
    }
    printf("\n");
}

void turbinar_tower(int *tower, int bonus) {
    *tower = *tower + bonus;
}

void swap_torres(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}