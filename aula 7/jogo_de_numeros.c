#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secreto, palpite;
    int tentativas = 0;
    int acertou = 0;

    srand(time(NULL));
    secreto = rand() % 100 + 1;

    printf("=== JOGO DO NÚMERO SECRETO ===\n");
    printf("Descubra o número entre 1 e 100. Você tem 10 tentativas.\n\n");

    while (tentativas < 10 && !acertou) {
        printf("Tentativa %d: ", tentativas + 1);
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < secreto) {
            printf("O número secreto é maior.\n");
        } else if (palpite > secreto) {
            printf("O número secreto é menor.\n");
        } else {
            printf("Parabéns! Você acertou!\n");
            acertou = 1;
        }
    }

    printf("\nTentativas realizadas: %d\n", tentativas);

    if (!acertou) {
        printf("Você usou todas as tentativas. O número secreto era %d.\n", secreto);
    }

    return 0;
}
