#include <stdio.h>

int main(){
    int n1, n2, s;

    printf("Escreva um numero: ");
    scanf("%d", &n1);

    printf("Escreva outro numero: ");
    scanf("%d", &n2);

    s = n1 + n2;

    printf("Primeiro numero: %d \nSegundo numero: %d \nSoma dos numeros: %d", n1, n2, s);

    return 0;
}