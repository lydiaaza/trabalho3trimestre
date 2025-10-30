#include <stdio.h>

int main() {
    int n;
    int ehPrimo = 1;
    int menorDivisor = -1;
    
    printf("Digite um inteiro n >= 2:\n");
    scanf("%d", &n);
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            ehPrimo = 0;
            menorDivisor = i;
            break;
        }
    }
    
    if (ehPrimo) {
        printf("%d é primo.\n", n);
    } else {
        printf("%d não é primo. Menor divisor (>1): %d\n", n, menorDivisor);
    }
    
    return 0;
}
