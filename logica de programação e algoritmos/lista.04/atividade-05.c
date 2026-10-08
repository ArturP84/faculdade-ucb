#include <stdio.h>

int main() {
    int n;
    int i;
    int anterior = 0;
    int atual = 1;
    int proximo;

    printf("Digite a posicao da sequencia: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Termo: 0\n");
    } else if (n == 1) {
        printf("Termo: 1\n");
    } else {

        for (i = 2; i <= n; i++) {
            proximo = anterior + atual;
            anterior = atual;
            atual = proximo;
        }

        printf("Termo: %d\n", atual);
    }

    return 0;
}