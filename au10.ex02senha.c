#include <stdio.h>
#include <string.h>

int main() {
    char senha[50];
    int tamanho;

    printf("Digite a sua senha: ");
    scanf("%s", senha);

    // Guardamos o comprimento em uma variável inteira
    tamanho = strlen(senha);

    if (tamanho >= 8) {
        printf("Sucesso! Senha com %d caracteres.\n", tamanho);
    } else {
        printf("Erro: A senha precisa de 8 caracteres, voce digitou apenas %d.\n", tamanho);
    }

    return 0;
}