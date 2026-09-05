#include <stdio.h>

int main() {
    int n1, n2;

    printf("Escreva um numero: ");
    scanf("%d", &n1);

    if (n1 < 0){
        n2 = n1 * 2;
    } else{
        n2 = n1 * 3;
    }

    printf("Numero final: %d", n2);

    return 0;
}