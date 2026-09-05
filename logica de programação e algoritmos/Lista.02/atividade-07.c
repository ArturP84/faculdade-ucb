#include <stdio.h>

int main() {
    int n1, n2;

    printf("Escreva um numero: ");
    scanf("%d", &n1);

    if(n1 % 2 == 0){
        n2 = n1 + 5;
    }else{
         n2 = n1 + 8;
    }
    printf("O valor final sera %d", n2);

    return 0;
}