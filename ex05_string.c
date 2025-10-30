#include <stdio.h>
#include <ctype.h>

int main() {
    char linha[101];
    int contador = 0;
    

    printf("Digite uma linha (até 100 caracteres):\n");
    fgets(linha, sizeof(linha), stdin);
    

    for (int i = 0; linha[i] != '\0'; i++) {
        char c = tolower(linha[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }
    
    printf("Número de vogais: %d\n", contador);
    
    return 0;
}
