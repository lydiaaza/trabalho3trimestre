#include <stdio.h>

int main() {
    int vetor[5];
    int i, soma = 0;
    float media;

    printf("Digite 5 números inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / 5.0;

    printf("\nElementos do vetor: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\nSoma = %d", soma);
    printf("\nMédia = %.2f\n", media);

    return 0;
}
