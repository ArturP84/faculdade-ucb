#include<stdio.h>

int main(){
    float salario, imposto, salariof;
    
    printf("Escreva seu salario base: ");
    scanf("%f", &salario);
    
    imposto = salario*0.10;
    salariof = (salario - imposto) + 50;
    
    printf("Seu salario a ser recebido eh: %.2f", salariof);

    return 0;
}