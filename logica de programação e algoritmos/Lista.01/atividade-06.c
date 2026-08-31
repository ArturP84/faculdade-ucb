#include<stdio.h>

int main(){
    float salario, imposto, gratificacao, salariof;
    
    printf("Escreva seu salario: ");
    scanf("%f", &salario);
    
    imposto = salario*0.07;
    gratificacao = salario*0.05;
    salariof = (salario - imposto) + gratificacao;
    
    printf("Seu salario a ser recebido eh: %.2f", salariof);

    return 0;
}