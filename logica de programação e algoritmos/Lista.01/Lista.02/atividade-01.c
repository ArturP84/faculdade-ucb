#include <stdio.h>

int main() {
    int a, b, c;

    printf("Escreva o primeiro numero: ");
    scanf("%d", &a);

    printf("Escreva o segundo numero: ");
    scanf("%d", &b);

    printf("Escreva o terceiro numero: ");
    scanf("%d", &c);

    if((a + b) < c){
        printf("A soma dos dois primeiros numeros e menor que o terceiro.");
    } else{
        printf("Tente novamente...");
    }

    return 0;
}