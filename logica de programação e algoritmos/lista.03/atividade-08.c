#include <stdio.h>

int main(){
    float valor, salario;
    int horas;

    printf("Escreva a quantidade de horas que foram trabalhadas: ");
    scanf("%d", &horas);

    printf("Escreva o valor da hora: ");
    scanf("%f", &valor);

    salario = horas * valor;

    printf("O seu salario bruto sera de: %.2f", salario);
    
    return 0;
}