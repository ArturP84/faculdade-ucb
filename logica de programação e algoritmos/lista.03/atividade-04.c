#include <stdio.h>

int main(){
    int n1, n2, n3;
    float m;

    printf("Escreva um numero: ");
    scanf("%d", &n1);

    printf("Escreva um segundo numero: ");
    scanf("%d", &n2);

    printf("Escreva um terceiro numero: ");
    scanf("%d", &n3);

    m = (n1 + n2 + n3) / 3;

    printf("A media artmetica eh: %.2f", m);
    
    return 0;
}