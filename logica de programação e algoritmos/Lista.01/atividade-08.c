#include<stdio.h>

int main(){
    float deposito, taxa, p, valorf;
    
    printf("Escreva o valor do deposito: ");
    scanf("%f", &deposito);
    
    printf("Escreva o valor da taxa de juros: ");
    scanf("%f", &taxa);
    
    p = deposito * taxa / 100;
    valorf = deposito + p;
    
    printf("O valor do rendimento eh: %.2f\n O valor final eh: %.2f ", p, valorf);

    return 0;
}