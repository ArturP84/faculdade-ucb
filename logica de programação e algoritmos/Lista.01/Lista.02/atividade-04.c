#include <stdio.h>

int main() {
    int n1, n2, n3 = 0;

    printf("Escreva um numero: ");
    scanf("%d", &n1);

    printf("Escreva um numero: ");
    scanf("%d", &n2);

    if(n1 == n2){
        n3 = n1 + n2;
    }else{
        n3 = n1 * n2;
    }

    printf("O numero final de n3 eh: %d", n3);

    return 0;
}