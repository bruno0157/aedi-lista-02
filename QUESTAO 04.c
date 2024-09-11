#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int primos[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int qtdPrimos = 25;

    int numero;

    printf("Informe um número de 1 a 100: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 100) {
        printf("\nNúmero fora do intervalo de 1 a 100.\n");
    }
    else {
        int encontrado = 0;
        int inicio = 0, fim = qtdPrimos - 1;

        while (inicio <= fim) {
            int meio = inicio + (fim - inicio) / 2;
            if (primos[meio] == numero) {
                encontrado = 1;
                break;
            }
            if (primos[meio] < numero) {
                inicio = meio + 1;
            } else {
                fim = meio - 1;
            }
        }

        if (encontrado) {
            printf("\nO número %d está na lista de números primos.\n", numero);
        }
        else {
            printf("\nO número %d não é um número primo.\n", numero);
        }
    }
    return 0;
}
