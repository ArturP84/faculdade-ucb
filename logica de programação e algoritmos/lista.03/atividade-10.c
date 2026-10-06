#include <stdio.h>

int main(){
    char produto[50];
    int quantidade;
    float preco, total;

    printf("Nome do produto: ");
    scanf("%s", produto);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("Preco unitario: ");
    scanf("%f", &preco);

    total = quantidade * preco;

    printf("Valor total da compra: R$ %.2f\n", total);

    return 0;
}