#include <stdio.h>

int main() {
    int numero, i;
    long long fatorial = 1;

    do {
        printf("Digite um número inteiro entre 0 e 10: ");
        scanf("%d", &numero);

        if (numero < 0 || numero > 10) {
            printf("Valor inválido! Tente novamente.\n");
        }
    } while (numero < 0 || numero > 10);

    for (i = 2; i <= numero; i++) {
        fatorial *= i;
    }

    printf("%d! = %lld\n", numero, fatorial);

    return 0;
}
