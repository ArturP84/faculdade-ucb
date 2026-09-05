#include <stdio.h>

int main() {
    char nome[50], sexo, estado[20];
    int tempo;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Digite seu estado civil: ");
    scanf("%s", estado);

    if(sexo == 'F' && estado[0] == 'C'){
        printf("Digite o tempo de casamento em anos: ");
        scanf("%d", &tempo);
    }

    return 0;
}