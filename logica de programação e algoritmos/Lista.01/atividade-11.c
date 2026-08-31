#include<stdio.h>
#include<math.h>

int main(){
    float n1, quadrado, cubo, raiz, cubica;
    
    printf("Escreva um numero positivo e inteiro: ");
    scanf("%f", &n1);
    
    if(n1 >= 1){
        quadrado = pow(n1,2);
        cubo = pow(n1,3);
        raiz = sqrt(n1);
        cubica = cbrt(n1);
        
        printf("O numero %.2f ao quadrado eh: %.2f", n1, quadrado);
        printf("\nO numero %.2f ao cubo eh: %.2f", n1, cubo);
        printf("\nA raiz quadrada de %.2f eh: %.2f", n1, raiz);
        printf("\nA raiz cubica de %.2f eh: %.2f", n1, cubica);
    }
    else{
        printf("Numero errado tente novamente");
    }

    return 0;
}