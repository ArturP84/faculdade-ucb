#include <stdio.h>

int main(){
    int numero;

    printf("Escreva um numero: ");
    scanf("%d", &numero);

    if(numero >= 1){
        printf("Positivo");
    }
    if(numero <= -1){
        printf("Negativo");
    }
    if(numero == 0){
        printf("Zero");
    }
    return 0;
}