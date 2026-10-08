#include <stdio.h>

int main() {
    char elevador, periodo;
    int i;

    int A = 0, B = 0, C = 0;
    int M = 0, V = 0, N = 0;

    int matriz[3][3] = {0};

    for (i = 1; i <= 50; i++) {

        printf("\nMorador %d\n", i);

        printf("Elevador (A/B/C): ");
        scanf(" %c", &elevador);

        while (elevador != 'A' && elevador != 'B' && elevador != 'C') {
            printf("Elevador invalido! Digite A, B ou C: ");
            scanf(" %c", &elevador);
        }

        printf("Periodo (M/V/N): ");
        scanf(" %c", &periodo);

        while (periodo != 'M' && periodo != 'V' && periodo != 'N') {
            printf("Periodo invalido! Digite M, V ou N: ");
            scanf(" %c", &periodo);
        }

        if (elevador == 'A') {
            A++;

            if (periodo == 'M')
                matriz[0][0]++;
            else if (periodo == 'V')
                matriz[0][1]++;
            else
                matriz[0][2]++;

        } else if (elevador == 'B') {
            B++;

            if (periodo == 'M')
                matriz[1][0]++;
            else if (periodo == 'V')
                matriz[1][1]++;
            else
                matriz[1][2]++;

        } else {
            C++;

            if (periodo == 'M')
                matriz[2][0]++;
            else if (periodo == 'V')
                matriz[2][1]++;
            else
                matriz[2][2]++;
        }

        if (periodo == 'M')
            M++;
        else if (periodo == 'V')
            V++;
        else
            N++;
    }

    int maiorPeriodo = M;
    char periodoMaior = 'M';

    if (V > maiorPeriodo) {
        maiorPeriodo = V;
        periodoMaior = 'V';
    }

    if (N > maiorPeriodo) {
        maiorPeriodo = N;
        periodoMaior = 'N';
    }

    printf("\nPeriodo mais usado: %c\n", periodoMaior);

    if (periodoMaior == 'M')
        printf("Quantidade: %d\n", M);
    else if (periodoMaior == 'V')
        printf("Quantidade: %d\n", V);
    else
        printf("Quantidade: %d\n", N);

    int maiorElevador = A;
    char elevadorMaior = 'A';

    if (B > maiorElevador) {
        maiorElevador = B;
        elevadorMaior = 'B';
    }

    if (C > maiorElevador) {
        maiorElevador = C;
        elevadorMaior = 'C';
    }

    printf("Elevador mais frequentado: %c\n", elevadorMaior);

    int menorPeriodo = M;

    if (V < menorPeriodo)
        menorPeriodo = V;

    if (N < menorPeriodo)
        menorPeriodo = N;

    printf("Diferenca percentual entre maior e menor periodo: %.2f%%\n",
           ((maiorPeriodo - menorPeriodo) * 100.0) / 50);

    int media = (A + B + C) / 3;

    printf("Elevador de media utilizacao: aproximadamente %d servicos\n",
           media);

    printf("Percentual sobre o total: %.2f%%\n",
           (media * 100.0) / 50);

    return 0;
}