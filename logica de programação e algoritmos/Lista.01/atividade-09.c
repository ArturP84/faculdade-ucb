#include<stdio.h>

int main(){
    float base, altura, triangulo;
    
    printf("Escreva a base do triangulo: ");
    scanf("%f", &base);
    
    printf("Escreva a altura do triangulo: ");
    scanf("%f", &altura);
    
    triangulo = (base * altura)/2;
    
    printf("A area do triangulo eh: %.2f", triangulo);

    return 0;
}