#include<stdio.h>

int main(){
    float n1, n2, n3, soma = 0;
    printf("Escreva a primeira nota: ");
    scanf("%f", &n1);
    printf("Escreva a segunda nota: ");
    scanf("%f", &n2);
    printf("Escreva a terceira nota: ");
    scanf("%f", &n3);
    soma = (n1 + n2 + n3)/3;
    printf("A média aritmética dos numeros apresentados eh: %.2f", soma);
    return 0;
}