#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int qtdContas = 100;
    int contas[qtdContas];
    int contaProcurada, inicio, fim, meio, comparacoes;
    int resultado = -1;

    for (int i = 0; i < qtdContas; i++) {
        contas[i] = i + 1;
    }

    printf("Informe o número da conta a ser pesquisada (1 a 100): ");
    scanf("%d", &contaProcurada);

    inicio = 0;
    fim = qtdContas - 1;

    while (inicio <= fim) {
        comparacoes++;
        meio = (inicio + fim) / 2;

        if (contas[meio] == contaProcurada) {
            resultado = meio;
            break;
        } else if (contas[meio] < contaProcurada) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    if (resultado != -1) {
        printf("\nConta nº %d encontrada na posição %d.\n", contaProcurada, resultado);
    }
    else {
        printf("\nConta não encontrada.\n");
    }

    printf("Foram realizadas %d comparações para verificar a atividade desta conta.\n", comparacoes);

    return 0;
}
