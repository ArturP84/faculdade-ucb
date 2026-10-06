
#include <stdio.h>

int main(){
    float peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f\n", imc);

    if(imc < 18.5){
        printf("Abaixo do peso");
    }
    if(imc < 25.0){
        printf("Peso adequado");
    }
    if(imc < 30.0){
        printf("Sobrepeso");
    }
    else{
        printf("Obesidade");
    }

    return 0;
}