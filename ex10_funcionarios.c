#include <stdio.h>

int main() {
    int N;
    int ids[10];
    double salarios[10];
    int opcao;
    
    printf("Digite N (1 a 10):\n");
    scanf("%d", &N);
    printf("Cadastre os %d funcionários (id e salário):\n", N);
    for (int i = 0; i < N; i++) {
        printf("Funcionário %d - ID: ", i+1);
        scanf("%d", &ids[i]);
        printf("Funcionário %d - Salário: ", i+1);
        scanf("%lf", &salarios[i]);
    }
    
    do {
        printf("\nMenu:\n");
        printf("1) Listar todos (id e salário)\n");
        printf("2) Mostrar o maior salário e seu id\n");
        printf("0) Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        if (opcao == 1) {
            printf("Funcionários:\n");
            for (int i = 0; i < N; i++) {
                printf("ID: %d, Salário: R$ %.2f\n", ids[i], salarios[i]);
            }
        } else if (opcao == 2) {
            double maiorSalario = salarios[0];
            int idMaior = ids[0];
            for (int i = 1; i < N; i++) {
                if (salarios[i] > maiorSalario) {
                    maiorSalario = salarios[i];
                    idMaior = ids[i];
                }
            }
            printf("Maior salário: ID %d, R$ %.2f\n", idMaior, maiorSalario);
        } else if (opcao != 0) {
            printf("Opção inválida.\n");
        }
    } while (opcao != 0);
    
    return 0;
}
