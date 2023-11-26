


#include <stdio.h>
#include <string.h>

int main() {
    // Criação de cabeçalho
    printf("%-10s%-10s%-10s%-10s%-10s%-10s\n", "Peso", "Impureza", "Região","Valor", "Frete", "Total");
    printf("------------------------------------------------------------\n");
    // Variáveis
    float frete, valor;
    int varPeso[] = {1, 2, 3, 4};
    int varImpureza[] = {1, 3, 5};
    char varRegiao[][3] = {"S", "SE", "N", "NE"};

    // Loop para cada combinação de variáveis
    for (int i = 0; i < sizeof(varPeso) / sizeof(varPeso[0]); i++) {
        for (int j = 0; j < sizeof(varImpureza) / sizeof(varImpureza[0]); j++) {
            for (int k = 0; k < sizeof(varRegiao) / sizeof(varRegiao[0]); k++) {
                float peso = varPeso[i];
                float impureza = varImpureza[j];
                char *regiao = varRegiao[k];

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
                float valor = peso - impureza * peso / 100;
                float total = valor + frete;

                // Saída de dados
                // Saída dos resultados
                printf("%-10.2f%-10.2f%-10s%-10.2f%-10.2f%-10.2f\n", peso, impureza, regiao,valor, frete, total);
                printf("------------------------------------------------------------\n");
            }
        }
    }

    return 0;
}