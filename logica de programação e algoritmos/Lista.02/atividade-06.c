#include <stdio.h>
#include <stdbool.h>

int main() {

    bool valor1, valor2;

    printf("Digite o primeiro valor (0 = falso, 1 = verdadeiro): ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor (0 = falso, 1 = verdadeiro): ");
    scanf("%d", &valor2);

    if(valor1 == true && valor2 == true){
        printf("Ambos sao VERDADEIROS");
    }
    else if(valor1 == false && valor2 == false){
        printf("Ambos sao FALSOS");
    }
    else{
        printf("Os valores sao diferentes");
    }

    return 0;
}