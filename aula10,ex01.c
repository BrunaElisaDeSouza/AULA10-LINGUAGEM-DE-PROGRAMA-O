#include <stdio.h>

int main() {
    char nome_aluno[50];
    char disciplina[50];
    float n1, n2, n3, media;

    // Entrada de dados
    printf("Digite o primeiro nome do aluno: ");
    scanf("%s", nome_aluno);

    printf("Digite o nome da disciplina (sem espacos): ");
    scanf("%s", disciplina);

    printf("Digite as 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    // Cálculo da média
    media = (n1 + n2 + n3) / 3;

    // Exibição dos resultados
    printf("\n--- Resultado ---\n");
    printf("o aluno(a) %s na disciplina %s tem média: %.2f\n", nome_aluno, disciplina, media);

    return 0;
}