#include <stdio.h>

int main(){
    int n1, n2, s, sub, mut;
    float div;

    printf("Escreva um numero: ");
    scanf("%d", &n1);

    printf("Escreva outro numero: ");
    scanf("%d", &n2);

    s = n1 + n2;
    sub = n1 - n2;
    mut = n1 * n2;
    div = (float)n1 / n2;

    printf("soma: %d\n"
           "subtracao: %d\n"
           "multiplicacao: %d\n"
           "divisao: %.2f\n", s, sub, mut, div);

    return 0;
}