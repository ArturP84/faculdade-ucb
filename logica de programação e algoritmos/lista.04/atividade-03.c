#include <stdio.h>

int main() {
    int idade;
    int i;

    int otimo = 0;
    int bom = 0;
    int regular = 0;
    int ruim = 0;
    int pessimo = 0;

    int somaIdadeRuim = 0;
    int maiorIdadePessimo = 0;
    int maiorIdadeOtimo = 0;
    int maiorIdadeRuim = 0;

    char opiniao;

    for (i = 1; i <= 100; i++) {

        printf("\nPessoa %d\n", i);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Opiniao (A/B/C/D/E): ");
        scanf(" %c", &opiniao);

        if (opiniao == 'A') {
            otimo++;

            if (idade > maiorIdadeOtimo) {
                maiorIdadeOtimo = idade;
            }

        } else if (opiniao == 'B') {
            bom++;

        } else if (opiniao == 'C') {
            regular++;

        } else if (opiniao == 'D') {
            ruim++;
            somaIdadeRuim += idade;

            if (idade > maiorIdadeRuim) {
                maiorIdadeRuim = idade;
            }

        } else if (opiniao == 'E') {
            pessimo++;

            if (idade > maiorIdadePessimo) {
                maiorIdadePessimo = idade;
            }
        }
    }

    printf("\nQuantidade de respostas OTIMO: %d\n", otimo);

    printf("Diferenca percentual entre BOM e REGULAR: %.2f%%\n",
           ((bom - regular) * 100.0) / 100);

    if (ruim > 0) {
        printf("Media de idade dos que responderam RUIM: %.2f\n",
               (float)somaIdadeRuim / ruim);
    } else {
        printf("Ninguem respondeu RUIM.\n");
    }

    printf("Porcentagem de respostas PESSIMO: %.2f%%\n",
           pessimo);

    printf("Maior idade que respondeu PESSIMO: %d\n",
           maiorIdadePessimo);

    printf("Diferenca de idade entre maior OTIMO e maior RUIM: %d\n",
           maiorIdadeOtimo - maiorIdadeRuim);

    return 0;
}