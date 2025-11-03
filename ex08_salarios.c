#include <stdio.h>

int main() {
    int N;
    double salarios[10];
    int opcao;
    
    printf("Digite N (1 a 10):\n");
    scanf("%d", &N);
    printf("Digite os %d salários:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%lf", &salarios[i]);
    }
    
    do {
        printf("\nMenu:\n");
        printf("1) Listar salários\n");
        printf("2) Média dos salários\n");
        printf("0) Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        if (opcao == 1) {
            printf("Salários:\n");
            for (int i = 0; i < N; i++) {
                printf("R$ %.2f\n", salarios[i]);
            }
        } else if (opcao == 2) {
            double soma = 0.0;
            for (int i = 0; i < N; i++) {
                soma += salarios[i];
            }
            double media = soma / N;
            printf("Média dos salários: R$ %.2f\n", media);
        } else if (opcao != 0) {
            printf("Opção inválida.\n");
        }
    } while (opcao != 0);
    
    return 0;
}
