#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int i, tamanho;

    printf("Digite a palavra: ");
    scanf("%s", palavra);

    // Medimos o tamanho da string
    tamanho = (int)strlen(palavra);

    printf("Resultado: ");

    // O segredo está no espaço dentro do printf abaixo
    for (i = 0; i < tamanho; i++) {
        printf("%c    ", palavra[i]); 
    }

    printf("\n");

    return 0;
}