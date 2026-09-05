#include <stdio.h>
#include <math.h>

int main(){
    float peso, altura, imc;

    printf("Escreva seu peso: ");
    scanf("%f", &peso);

    printf("Escreva sua altura: ");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);

    if(imc < 18.5){
        printf("De acordo com seu peso e sua altura vc esta abaixo do recomendado");
    }
    else if(imc >= 18.5 && imc < 25){
        printf("De acordo com seu peso e sua altura vc esta com peso recomendado");
    }
    else if(imc >= 25 && imc < 30){
        printf("De acordo com seu peso e sua altura vc esta acima do peso");
    }
    else{
        printf("De acordo com seu peso e sua altura vc esta com obesidade");
    }

    return 0;
}