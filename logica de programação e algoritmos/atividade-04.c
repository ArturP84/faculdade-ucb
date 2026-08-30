#include<stdio.h>

int main(){
    float salario, novo_salario;
    printf("Escreva seu salario: ");
    scanf("%f", &salario);
    novo_salario = salario + (salario*0.25);
    printf("O salario com aumento de 25%% eh: %.2f.", novo_salario);
    return 0;
}