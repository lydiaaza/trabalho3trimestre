#include <stdio.h>

int main() {
    double salario;
    int opcao;
    
    printf("Digite o salário mensal:\n");
    scanf("%lf", &salario);
    
    do {
        printf("\nMenu:\n");
        printf("1) Calcular INSS (8%% do salário)\n");
        printf("2) Calcular valor das horas extras\n");
        printf("0) Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        if (opcao == 1) {
            double inss = salario * 0.08;
            printf("INSS: R$ %.2f\n", inss);
        } else if (opcao == 2) {
            int horasExtras;
            printf("Digite o número de horas extras: ");
            scanf("%d", &horasExtras);
            double valorHora = salario / 220.0;
            double adicional = valorHora * 0.5;
            double totalHorasExtras = horasExtras * (valorHora + adicional);
            printf("Valor das horas extras: R$ %.2f\n", totalHorasExtras);
        } else if (opcao != 0) {
            printf("Opção inválida.\n");
        }
    } while (opcao != 0);
    
    return 0;
}
