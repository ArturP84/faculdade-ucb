#include <stdio.h>

int main(){
    float f, c;

    printf("Escreva em Celsius: ");
    scanf("%f", &c);

    f = (c * 9/5) + 32;

    printf("Convertido pra Fahrenheit: %.2f", f);

    return 0;
}