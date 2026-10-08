#include <stdio.h>

int main() {
    char nome[50];
    char sexo;

    float altura, peso;

    int homens = 0;
    int mulheres = 0;

    float somaAlturaHomens = 0;
    float somaAlturaMulheres = 0;

    float somaPesoHomens = 0;
    float somaPesoMulheres = 0;

    float somaAlturaGrupo = 0;
    float somaPesoGrupo = 0;

    int i;

    for (i = 1; i <= 10; i++) {

        printf("\nPessoa %d\n", i);

        printf("Nome: ");
        scanf(" %[^\n]", nome);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        while (sexo != 'M' && sexo != 'm' &&
               sexo != 'F' && sexo != 'f') {

            printf("Sexo invalido! Digite M ou F: ");
            scanf(" %c", &sexo);
        }

        printf("Altura: ");
        scanf("%f", &altura);

        printf("Peso: ");
        scanf("%f", &peso);

        somaAlturaGrupo += altura;
        somaPesoGrupo += peso;

        if (sexo == 'M' || sexo == 'm') {

            homens++;

            somaAlturaHomens += altura;
            somaPesoHomens += peso;

        } else {

            mulheres++;

            somaAlturaMulheres += altura;
            somaPesoMulheres += peso;
        }
    }

    printf("\n--- RESULTADOS ---\n");

    printf("Numero de homens: %d\n", homens);
    printf("Numero de mulheres: %d\n", mulheres);

    if (homens > 0) {
        printf("Altura media dos homens: %.2f\n",
               somaAlturaHomens / homens);

        printf("Peso medio dos homens: %.2f\n",
               somaPesoHomens / homens);
    }

    if (mulheres > 0) {
        printf("Altura media das mulheres: %.2f\n",
               somaAlturaMulheres / mulheres);

        printf("Peso medio das mulheres: %.2f\n",
               somaPesoMulheres / mulheres);
    }

    printf("Altura media do grupo: %.2f\n",
           somaAlturaGrupo / 10);

    printf("Peso medio do grupo: %.2f\n",
           somaPesoGrupo / 10);

    return 0;
}