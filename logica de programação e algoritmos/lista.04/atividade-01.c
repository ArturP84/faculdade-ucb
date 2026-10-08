#include <stdio.h>

int main() {
    int opcao, quantidade;
    float total = 0;

    do {
        printf("\n--- MENU DE FRUTAS ---\n");
        printf("1 - ABACAXI - R$ 5,00\n");
        printf("2 - MACA     - R$ 1,00\n");
        printf("3 - PERA     - R$ 4,00\n");
        printf("0 - Finalizar compra\n");

        printf("Escolha uma fruta: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 3) {
            printf("Digite a quantidade: ");
            scanf("%d", &quantidade);

            if (opcao == 1) {
                total = total + (quantidade * 5.00);
            } else if (opcao == 2) {
                total = total + (quantidade * 1.00);
            } else if (opcao == 3) {
                total = total + (quantidade * 4.00);
            }
        } else if (opcao != 0) {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    printf("\nValor total da compra: R$ %.2f\n", total);

    return 0;
}