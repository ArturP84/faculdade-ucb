#include <stdio.h>

int main() {
    float  pesokg, pesog, diario, total, restante, racao;

    printf("Digite o peso do saco de racao (em kg): ");
    scanf("%f", &pesokg);

    printf("Digite a quantidade de racao fornecida a cada gato por dia (em gramas): ");
    scanf("%f", &racao);

    pesog = pesokg * 1000;
    diario = 2 * racao;
    total = diario * 5;
    restante = pesog - total;

    printf("\nApos 5 dias, restarao %.2f gramas de racao no saco.\n", restante);

    if (restante < 0) {
        printf("Atencao: a racao acabou antes do quinto dia!");
    }

    return 0;
}