
#include <stdio.h>

int main(){
    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    if(numero1 > numero2){
        printf("O maior numero e: %d", numero1);
    }
    else{
        printf("O maior numero e: %d", numero2);
    }

    return 0;
}