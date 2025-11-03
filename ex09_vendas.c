#include <stdio.h>

int main() {
    double vendas[2][2];
    int opcao;
    
    printf("Digite os valores de vendas (2 filiais x 2 meses):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Filial %d, Mês %d: ", i+1, j+1);
            scanf("%lf", &vendas[i][j]);
        }
    }
    
    do {
        printf("\nMenu:\n");
        printf("1) Total por filial (linha)\n");
        printf("2) Total por mês (coluna)\n");
        printf("3) Total geral\n");
        printf("0) Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        if (opcao == 1) {
            for (int i = 0; i < 2; i++) {
                double total = vendas[i][0] + vendas[i][1];
                printf("Total Filial %d: R$ %.2f\n", i+1, total);
            }
        } else if (opcao == 2) {
            for (int j = 0; j < 2; j++) {
                double total = vendas[0][j] + vendas[1][j];
                printf("Total Mês %d: R$ %.2f\n", j+1, total);
            }
        } else if (opcao == 3) {
            double totalGeral = 0.0;
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    totalGeral += vendas[i][j];
                }
            }
            printf("Total geral: R$ %.2f\n", totalGeral);
        } else if (opcao != 0) {
            printf("Opção inválida.\n");
        }
    } while (opcao != 0);
    
    return 0;
}
