
#include <stdio.h>

int main(){
    float nota, nota2, m;

    printf("Escreva primeiro nota: ");
    scanf("%f", &nota);

    printf("Escreva o segundo nota: ");
    scanf("%f", &nota2);

    m = (nota + nota2) / 2;

    if(m >= 7.0){
        printf("Aprovado");
    }
    if(m >= 5.0 && m < 7.0){
        printf("Recuperacao");
    }
    if(m < 0){
        printf("Reprovado");
    }

    return 0;
}