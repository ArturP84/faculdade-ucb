#include <stdio.h>

int main() {
    char sexo, olhos, cabelos;
    int idade;
    float salario;

    int total = 0;
    int quantidade = 0;

    while (1) {

        printf("\nDigite a idade (-1 para encerrar): ");
        scanf("%d", &idade);

        if (idade == -1) {
            break;
        }

        while (idade < 10 || idade > 100) {
            printf("Idade invalida! Digite entre 10 e 100: ");
            scanf("%d", &idade);
        }

        printf("Sexo (m/f): ");
        scanf(" %c", &sexo);

        while (sexo != 'm' && sexo != 'f') {
            printf("Sexo invalido! Digite m ou f: ");
            scanf(" %c", &sexo);
        }

        printf("Cor dos olhos (a/v/c/p): ");
        scanf(" %c", &olhos);

        while (olhos != 'a' && olhos != 'v' &&
               olhos != 'c' && olhos != 'p') {
            printf("Cor dos olhos invalida! Digite a, v, c ou p: ");
            scanf(" %c", &olhos);
        }

        printf("Cor dos cabelos (l/c/p/r): ");
        scanf(" %c", &cabelos);

        while (cabelos != 'l' && cabelos != 'c' &&
               cabelos != 'p' && cabelos != 'r') {
            printf("Cor dos cabelos invalida! Digite l, c, p ou r: ");
            scanf(" %c", &cabelos);
        }

        printf("Salario: R$ ");
        scanf("%f", &salario);

        while (salario < 0) {
            printf("Salario invalido! Digite novamente: R$ ");
            scanf("%f", &salario);
        }

        total++;

        if (sexo == 'f' && idade >= 18 && idade <= 35 &&
            olhos == 'c' && cabelos == 'c') {
            quantidade++;
        }
    }

    if (total > 0) {
        float porcentagem = (quantidade * 100.0) / total;

        printf("\nPorcentagem: %.2f%%\n", porcentagem);
    } else {
        printf("\nNenhum habitante foi cadastrado.\n");
    }

    return 0;
}