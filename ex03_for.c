#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero inteiro para ver sua tabuada: ");
    scanf("%d", &N);

    printf("\nTabuada de %d:\n", N);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
