#include <stdio.h>

int main() {
    float limite, velocidade, percentual;

    printf("Digite a velocidade maxima permitida (km/h): ");
    scanf("%f", &limite);

    printf("Digite a velocidade registrada do veiculo (km/h): ");
    scanf("%f", &velocidade);

    if(velocidade <= limite){
        printf("Nao houve infracao.\n");
    }else{
        percentual = ((velocidade - limite) / limite) * 100;

        printf("Percentual excedido: %.2f%%\n", percentual);

        if (percentual <= 20) {
            printf("Classificacao: Infracao media.\n");

        } else if (percentual <= 50) {
            printf("Classificacao: Infracao grave.\n");

        } else {
            printf("Classificacao: Infracao gravissima.\n");
        }

    if (velocidade > 120) {
    printf("ALERTA: velocidade extremamente elevada!\n");
    }
    }

    return 0;
}