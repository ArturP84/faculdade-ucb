#include <stdio.h>

int main(){
    int n, c, soma = 0;

    printf("Escreva o numero de entrada: ");
    scanf("%d", &n);

    printf("Processamento: ");

    for(c = 0; c <= n; c++){
 
        printf("%d + ", c);
        soma += c;
    }

    printf("\n Saida: %d", soma);
}