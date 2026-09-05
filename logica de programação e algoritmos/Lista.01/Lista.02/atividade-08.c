#include <stdio.h>

int main(){
    int a, b, c, d;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    if(a < b){
        d = a;
        a = b;
        b = d;
    }

    if(a < c){
        d = a;
        a = c;
        c = d;
    }

    if(b < c){
        d = b;
        b = c;
        c = d;
    }

    printf("Ordem decrescente: %d, %d, %d\n", a, b, c);

    return 0;
}