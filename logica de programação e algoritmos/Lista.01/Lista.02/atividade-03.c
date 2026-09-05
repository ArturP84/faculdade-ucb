#include <stdio.h>

int main() {
    int n1;

    printf("Escreva um numero: ");
    scanf("%d", &n1);

    if(n1 % 2 == 0){
        printf("%d eh um numero par", n1);
    }else{
        printf("%d eh um numero impar", n1);
    }

    return 0;
}