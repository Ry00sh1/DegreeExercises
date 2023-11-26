#include <stdio.h>

int main() {
    // Declaração de variáveis
    float peso, impureza, frete, valor, total;
    char regiao[3];  // O tamanho 3 inclui espaço para o caractere nulo '\0'

    // Entrada de dados
    printf("Informe o peso do minério em kg: ");
    scanf("%f", &peso);
    printf("Informe a impureza do minério em %%: ");
    scanf("%f", &impureza);
    printf("Informe a região de destino (S, SE, N, NE): ");
    scanf("%s", regiao);

    // Cálculo do frete
    if (peso > 2.0) {
        if (regiao[0] == 'S' || regiao[0] == 's') {
            frete = 50;
        } else if (regiao[0] == 'S' && regiao[1] == 'E' || regiao[0] == 's' && regiao[1] == 'e') {
            frete = 45;
        } else if (regiao[0] == 'N' || regiao[0] == 'n') {
            frete = 55;
        } else if (regiao[0] == 'N' && regiao[1] == 'E' || regiao[0] == 'n' && regiao[1] == 'e') {
            frete = 60;
        }
    } else {
        if (regiao[0] == 'S' || regiao[0] == 's') {
            frete = 30;
        } else if (regiao[0] == 'S' && regiao[1] == 'E' || regiao[0] == 's' && regiao[1] == 'e') {
            frete = 25;
        } else if (regiao[0] == 'N' || regiao[0] == 'n') {
            frete = 35;
        } else if (regiao[0] == 'N' && regiao[1] == 'E' || regiao[0] == 'n' && regiao[1] == 'e') {
            frete = 40;
        }
    }

    // Cálculo do valor
    valor = peso - impureza * peso / 100;
    total = valor + frete;

    // Saída de dados
    printf("Valor do minério: R$%.2f\n", valor);
    printf("Valor do frete: R$%.2f\n", frete);
    printf("Valor total: R$%.2f\n", total);

    return 0;
}
