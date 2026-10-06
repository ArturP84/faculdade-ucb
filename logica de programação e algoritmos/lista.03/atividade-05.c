#include <stdio.h>

int main(){
    float b, a, area;

    printf("Escreva a base: ");
    scanf("%f", &b);

    printf("Escreva a altura: ");
    scanf("%f", &a);

    area = (b * a) / 2;

    printf("A area do triangulo eh: %.2f", area);
    
    return 0;
}