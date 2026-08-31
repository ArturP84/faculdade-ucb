#include <stdio.h>

int main() {
    float salario, cheque1, cheque2, cpmf, saldo = 0;

    printf("Digite o valor do salario depositado: ");
    scanf("%f", &salario);

    printf("Digite o valor do primeiro cheque: ");
    scanf("%f", &cheque1);
    
    printf("Digite o valor do segundo cheque: ");
    scanf("%f", &cheque2);

    saldo += salario;
    cpmf = cheque1 * 0.38 / 100;
    saldo -= (cheque1 + cpmf);
    cpmf = cheque2 * 0.38 / 100;
    saldo -= (cheque2 + cpmf);

    printf("\nSaldo atual da conta: R$ %.2f\n", saldo);

    return 0;
}