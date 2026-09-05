#include<stdio.h>

int main(){
    float valor, valorf;
    int opcao;

    printf("Escreva o valor da compra: ");
    scanf("%f", &valor);

    printf("\nOPCAO 01: A vista em dinheiro ou cheque: 10%% de desconto");
    printf("\nOPCAO 02: A vista no cartao de credito: 15%% de desconto");
    printf("\nOPCAO 03: Em duas parcelas: preco normal, sem juros ");
    printf("\nOPCAO 04: Em duas parcelas no cartao: acrescimo de 10%% sobre o preco normal");
    printf("\nQual sera a forma de pagamento [1,2,3,4]: ");
    scanf("%d", &opcao);

    if(opcao == 1){
        valorf = valor - (valor * 10 /100);
        printf("O valor final de acordo com a sua escolha de pagamento eh: %.2f", valorf);
    }else if(opcao == 2){
        valorf = valor - (valor * 15 /100);
        printf("O valor final de acordo com a sua escolha de pagamento eh: %.2f", valorf);
    } else if(opcao == 3){
        valorf = valor / 2;
        printf("O valor final vai ficar duas parcelas de: %.2f", valorf);
    }else if(opcao == 4){
        valorf = valor + (valor * 10 /100);
        valorf = valorf / 2;
        printf("O valor final vai ficar duas parcelas de: %.2f", valorf);
    }

}