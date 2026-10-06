
#include <stdio.h>

int main(){
    float valor, valorf;
    int desconto;

    printf("Escreva o valor da compra: ");
    scanf("%f", &valor);

    if(valor < 100){
        valorf = valor;
        printf("Nao houve desconto o valor final eh: R$%.2f", valorf);
    }
     if(valor < 500 && valor > 100.01){
        valorf = valor - (valor * 5 / 100);
        printf("O desconto foi de 5%% e o valor final foi: R$%.2f", valorf);
    }
    if(valor > 500){
        valorf = valor - (valor * 10 / 100);
        printf("O desconto foi de 10%% e o valor final foi: R$%.2f", valorf);
    }
    return 0;
}