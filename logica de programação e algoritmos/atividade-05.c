#include<stdio.h>

int main(){
    float salario, novo_salario, p, aumento;
    printf("Escreva seu salario: ");
    scanf("%f", &salario);
    printf("Escreva o percentual de aumento: ");
    scanf("%f", &p);
    aumento = (salario*p/100);
    novo_salario = salario + aumento;
    printf("\nValor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novo_salario);
    return 0;
}