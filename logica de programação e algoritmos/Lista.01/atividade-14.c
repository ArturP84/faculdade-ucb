#include<stdio.h>

int main(){
    int ano_atual, idade, ano_nas, ano_fu;

    printf("Escreva o ano de seu nascimento: ");
    scanf("%i", &ano_nas);
    printf("Escreva o ano atual: ");
    scanf("%i", &ano_atual);

    idade = ano_atual - ano_nas;
    ano_fu = 2050 - ano_nas;

    printf("Voce tem %i anos de idade.\nEm 2050 voce tera %i.", idade, ano_fu);

    return 0;
}