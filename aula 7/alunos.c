#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    int aprovados = 0, recuperacao = 0, reprovados = 0;
    char continuar;

    do {
        printf("Digite a 1a nota: ");
        scanf("%f", &nota1);
        printf("Digite a 2a nota: ");
        scanf("%f", &nota2);
        printf("Digite a 3a nota: ");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3;
        printf("Média: %.2f - ", media);

        if (media >= 7) {
            printf("Aprovado\n");
            aprovados++;
        } else if (media >= 5) {
            printf("Recuperação\n");
            recuperacao++;
        } else {
            printf("Reprovado\n");
            reprovados++;
        }

        printf("Deseja cadastrar outro aluno? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("\nAprovados: %d\n", aprovados);
    printf("Recuperação: %d\n", recuperacao);
    printf("Reprovados: %d\n", reprovados);

    return 0;
}
