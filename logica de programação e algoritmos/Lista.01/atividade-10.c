#include<stdio.h>

int main(){
    float raio, area;
    
    printf("Escreva o raio do circulo: ");
    scanf("%f", &raio);
    
    area = 3.14 * (raio*raio);
    
    printf("A Area do circulo eh: %.2f", area);
    
    return 0;
}