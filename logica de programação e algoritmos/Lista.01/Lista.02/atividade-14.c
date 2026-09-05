#include <stdio.h>

int main(){
    int codigo;

    printf("1 - Hamburguer com fritas       R$ 28,00\n");
    printf("2 - File de frango grelhado    R$ 32,00\n");
    printf("3 - Lasanha a bolonhesa         R$ 35,00\n");
    printf("4 - File de peixe com arroz     R$ 42,00\n");
    printf("5 - Salada especial             R$ 25,00\n");

    printf("\nDigite o codigo do prato desejado: ");
    scanf("%d", &codigo);

    switch(codigo){

        case 1:
            printf("\nPrato: Hamburguer com fritas");
            printf("\nValor: R$ 28,00");
            break;

        case 2:
            printf("\nPrato: File de frango grelhado");
            printf("\nValor: R$ 32,00");
            break;

        case 3:
            printf("\nPrato: Lasanha a bolonhesa");
            printf("\nValor: R$ 35,00");
            break;

        case 4:
            printf("\nPrato: File de peixe com arroz");
            printf("\nValor: R$ 42,00");
            break;

        case 5:
            printf("\nPrato: Salada especial");
            printf("\nValor: R$ 25,00");
            break;

        default:
            printf("\nOpcao invalida.");
    }

    return 0;
}