#include <stdio.h>

int main() {
    float altura, ps;
    char sexo;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo);

    if(sexo == 'M' || sexo == 'm'){
        ps = (72.7 * altura) - 58;
        printf("Seu peso ideal e: %.2f kg\n", ps);
    }
    else if(sexo == 'F' || sexo == 'f'){
        ps = (62.1 * altura) - 44.7;
        printf("Seu peso ideal e: %.2f kg\n", ps);
    }
    else{
        printf("Sexo invalido!\n");
    }

    return 0;
}