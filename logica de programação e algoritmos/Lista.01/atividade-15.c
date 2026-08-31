#include <stdio.h>

int main() {
    float preco, lucro, imposto, final;

    printf("Digite o preco de fabrica: ");
    scanf("%f", &preco);

    printf("Digite o percentual de lucro do distribuidor: ");
    scanf("%f", &lucro);

    printf("Digite o percentual de impostos: ");
    scanf("%f", &imposto);

    lucro = preco * (lucro / 100);
    imposto = preco * (imposto / 100);
    final = preco + lucro + imposto;

    printf("\nLucro do distribuidor: R$ %.2f", lucro);
    printf("\nImpostos: R$ %.2f", imposto);
    printf("\nPreco final do veiculo: R$ %.2f", final);

    return 0;
}