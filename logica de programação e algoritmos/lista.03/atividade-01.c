#include <stdio.h>

int main(){
    char nome[20];

    printf("Escreva seu nome: ");
    scanf("%s", nome);

    printf("Ola, %s! Seja bem-vindo(a).", nome);

    return 0;
}