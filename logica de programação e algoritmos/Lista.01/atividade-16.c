#include <stdio.h>

int main() {
    float valor_hora, salario_bruto, imposto, salario_final, horas, salario_min;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horas);

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_min);

    valor_hora = salario_min / 2;
    salario_bruto = horas * valor_hora;
    imposto = salario_bruto * (3 / 100);
    salario_final = salario_bruto - imposto;

    printf("\nValor da hora trabalhada: R$ %.2f", valor_hora);
    printf("\nSalario bruto: R$ %.2f", salario_bruto);
    printf("\nImposto: R$ %.2f", imposto);
    printf("\nSalario a receber: R$ %.2f\n", salario_final);

    return 0;
}