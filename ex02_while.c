#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int quantidade = 0;

    printf("Digite um numero inteiro (-1 para encerrar): ");
    scanf("%d", &numero);

    while (numero != -1) {
        soma += numero;
        quantidade++;

        printf("Digite outro numero inteiro (-1 para encerrar): ");
        scanf("%d", &numero);
    }

    if (quantidade > 0) {
        float media = (float)soma / quantidade;
        printf("\nQuantidade: %d", quantidade);
        printf("\nSoma: %d", soma);
        printf("\nMedia: %.2f\n", media);
    } else {
        printf("\nNenhum numero valido foi digitado.\n");
    }

    return 0;
}
