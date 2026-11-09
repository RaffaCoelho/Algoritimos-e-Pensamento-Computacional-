#include <stdio.h>

int main() {
    int numero, i;
    char resposta;

    do {
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);

        printf("\nTabuada do %d:\n", numero);
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        printf("\nDeseja calcular a tabuada de outro número? (S/N): ");
        scanf(" %c", &resposta);
        printf("\n");

    } while (resposta == 'S' || resposta == 's');

    return 0;
} 
