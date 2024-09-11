#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int qtdCriancas = 50;
    int notas[qtdCriancas];
    int contagem[5] = {0}; //erro

    srand(time(NULL));

    for (int i = 0; i < qtdCriancas; i++) {
        notas[i] = (rand() % 5) + 1;
    }

    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < qtdCriancas; j++) {
            if (notas[j] == i) {
                contagem[i - 1]++;
            }
        }
    }

    printf("Resultados da pesquisa:\n\n");
    for (int i = 1; i <= 5; i++) {
        printf("Nota %d: %d vezes\n", i, contagem[i - 1]);
    }
    return 0;
}
