#include <stdio.h>

int main() {
    float pe, jarda, milha, polegada;

    printf("Escreva a medida em pes que deseja converter: ");
    scanf("%f", &pe);

    polegada = pe * 12;
    jarda = pe / 3;
    milha = jarda / 1760;

    printf("\nA medida em pes convertida fica:");
    printf("\nPolegadas: %.2f", polegada);
    printf("\nJardas: %.2f", jarda);
    printf("\nMilhas: %.2f", milha);

    return 0;
}