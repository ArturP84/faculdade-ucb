#include <stdio.h>

int main(){
    int n, c;

    printf("Escreva um numero: ");
    scanf("%d", &n);
    
    for(c = 0; c <= 10; c++){
        printf("%d x %d = %d\n", c, n, c * n);     
    }
}