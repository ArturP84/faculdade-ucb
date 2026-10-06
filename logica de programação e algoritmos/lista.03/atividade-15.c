#include <stdio.h>

int main(){
    int numero, numero2, numero3;

    printf("Escreva primeiro numero: ");
    scanf("%d", &numero);

    printf("Escreva o segundo numero: ");
    scanf("%d", &numero2);

     printf("Escreva terceiro numero: ");
    scanf("%d", &numero3);


    if(numero > numero2 && numero > numero3){
        printf("Maior numero: %d", numero);
    }
    if(numero2 > numero && numero2 > numero3){
        printf("Maior numero: %d", numero2);
    }
    if(numero3 > numero2 && numero3 > numero){
        printf("Maior numero: %d", numero3);
    }

    return 0;
}