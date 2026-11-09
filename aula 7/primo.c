#include <stdio.h>

int main() {
    int numero, i;
    int primo;
    char continuar;

    do {
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &numero);

        primo = 1;

        if (numero < 2) {
            primo = 0;
        } else {
            for (i = 2; i < numero; i++) {
                if (numero % i == 0) {
                    primo = 0;
                    break;
                }
            }
        }

        if (primo) {
            printf("%d é primo.\n", numero);
        } else {
            printf("%d não é primo.\n", numero);
        }

        printf("\nDeseja testar outro número? (S/N): ");
        scanf(" %c", &continuar);
        printf("\n");

    } while (continuar == 'S' || continuar == 's');

    return 0;
}
