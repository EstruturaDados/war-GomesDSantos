#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//CRIACAO DE CONSTRUTOR DE TERRITORIOS
#define TERRITORIOS_TOTAL 5
#define TAM_STRINGS 50
struct Territorio {
    char nome[TAM_STRINGS];
    char corExercito[TAM_STRINGS];
    int numTropas;
};

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void) {

    struct Territorio pecas[TERRITORIOS_TOTAL];
    int totalPecas = 0;

    do {
        printf("ADICIONE UM NOVO TERRITORIO\n");
        printf("NOME DO TERRITORIO:");
        fgets(pecas[totalPecas].nome, TAM_STRINGS, stdin);
        printf("COR DO EXERCITO DO TERRITORIO:");
        fgets(pecas[totalPecas].corExercito, TAM_STRINGS, stdin);
        printf("NUMERO DE TROPAS DO TERRITORIO:");
        scanf("%d", &pecas[totalPecas].numTropas, TAM_STRINGS, stdin);
        limparBufferEntrada();

        totalPecas++;
        printf("\n");

    } while (totalPecas < TERRITORIOS_TOTAL);

    printf("==============================\n");
    printf("    TERRITORIOS ADICIONADOS   \n");
    printf("==============================\n");

    for (int i = 0; i < totalPecas; i++) {
        printf("%d. %s - %s - %d tropas\n", i + 1,
               pecas[i].nome,
               pecas[i].corExercito,
               pecas[i].numTropas);
        printf("\n");
    }

    return 0;
}
