#include <stdio.h>

int main() {
    int numero, maior, menor, i;

    printf("Digite o 1o número: ");
    scanf("%d", &numero);

    maior = numero;
    menor = numero;

    for (i = 2; i <= 10; i++) {
        printf("Digite o %do número: ", i);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }
        else if (numero < menor) {
            menor = numero;
        }
    }

    printf("\nMaior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Diferença entre o maior e o menor: %d\n", maior - menor);

    return 0;
}
