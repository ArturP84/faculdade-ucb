#include <stdio.h>

int main(){
    int idade;

    printf("Escreva sua idade: ");
    scanf("%d", &idade);

    if(idade <= 12){
        printf("Voce e uma crianca");
    }
    if(idade >= 13 && idade <= 17){
        printf("Voce e um adolescente");
    }
    if(idade >= 18 && idade <= 59){
        printf("Voce e um adulto");
    }
    if(idade >= 60){
        printf("Voce e uma idoso");
    }
    return 0;
}