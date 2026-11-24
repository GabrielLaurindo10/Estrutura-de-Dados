#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float preco;
} Produto;

int main() {
    Produto catalogo[3] = {
        {"Teclado Mecanico", 250.00},
        {"Mouse", 80.00},
        {"Monitor", 1200.00}
    };

    char termo_busca[50];
    int encontrado = 0;

    printf("> Digite o nome do produto para consulta: ");
    fgets(termo_busca, sizeof(termo_busca), stdin);
    
    termo_busca[strcspn(termo_busca, "\n")] = '\0';

    for (int i = 0; i < 3; i++) {
        if (strcmp(catalogo[i].nome, termo_busca) == 0) {
            printf("[Sucesso] Produto: %s | Preco: R$ %.2f\n", catalogo[i].nome, catalogo[i].preco);
            encontrado = 1;
            break; 
        }
    }
    
    if (encontrado == 0) {
        printf("[Aviso] O item \"%s\" nao consta no catalogo da loja.\n", termo_busca);
    }

    return 0;
}