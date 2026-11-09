#include <stdio.h>

int main() {
    int numero, i;
    int pares = 0, impares = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %do número: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            printf("%d é par.\n", numero);
            pares++;
        } else {
            printf("%d é ímpar.\n", numero);
            impares++;
        }
    }

    printf("\nQuantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}1
