#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000.00;
    float valor;

    do {
        printf("\n===== CAIXA ELETRONICO =====\n");
        printf("1. Consultar saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("Seu saldo e: R$ %.2f\n", saldo);
                break;

            case 2:
                printf("Digite o valor do deposito: R$ ");
                scanf("%f", &valor);

                saldo = saldo + valor;

                printf("Deposito realizado!\n");
                printf("Novo saldo: R$ %.2f\n", saldo);
                break;

            case 3:
                printf("Digite o valor do saque: R$ ");
                scanf("%f", &valor);

                if (valor <= saldo) {
                    saldo = saldo - valor;
                    printf("Saque realizado!\n");
                    printf("Novo saldo: R$ %.2f\n", saldo);
                } else {
                    printf("Saldo insuficiente!\n");
                }
                break;

            case 4:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 4);

    return 0;
}