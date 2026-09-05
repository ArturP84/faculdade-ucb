#include<stdio.h>
#include<math.h>

int main(){
    int n1, n2, elevado;
    
    printf("Escreva o primeiro numero inteiro e maior que zero: ");
    scanf("%i", &n1);
    
    printf("Escreva o segundo numero numero inteiro e maior que zero: ");
    scanf("%i", &n2);
    
    if(n1 > 0 && n2 > 0){
        elevado = pow(n1,n2);
        
        printf("O numero %i elevado a %i eh: %i", n1, n2, elevado);
    }
    else{
        printf("Numero nao esta dentro das exigencias tente novamente");
    }

    return 0;
}