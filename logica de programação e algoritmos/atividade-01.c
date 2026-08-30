#include<stdio.h>

int main(){
    int n1, c = 0, soma = 0;
    while(c != 4){
        printf("Escreva um numero inteiro: ");
        scanf("%i", &n1);
        soma = soma + n1;
        c += 1;
    }
    printf("A soma dos 4 numeros inteiros digitados eh: %i", soma);
    return 0;
}