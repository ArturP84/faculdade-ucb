#include <stdio.h>

int main(){
    float distancia, litros, consumo;

    printf("Escreva a distancia percorrida em km: ");
    scanf("%f", &distancia);

    printf("Escreva a quantidade de combustivel usada em litros: ");
    scanf("%f", &litros);

    consumo = distancia / litros;

    printf("Consumo medio do veiculo em km/L foi: %.2f", consumo);
    
    return 0;
}