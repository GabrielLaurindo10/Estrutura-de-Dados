#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, NULL);

    printf("Ola Mundo!\n");
    
    char letra = 'A';
    printf("%c -> %d\n", letra, letra);
    
    return 0;
}

