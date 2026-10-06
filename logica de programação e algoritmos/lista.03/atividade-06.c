#include <stdio.h>

int main(){
    float r, area;

    printf("Escreva o raio do circulo: ");
    scanf("%f", &r);

    area =(r * r) * 3.14159;

    printf("A area do circulo eh: %.2f", area);
    
    return 0;
}