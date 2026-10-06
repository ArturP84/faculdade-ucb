#include <stdio.h>

int main() {
    float nota;
    int aprovados = 0;
    int reprovados = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        if (nota >= 7) {
            aprovados++;
        } else {
            reprovados++;
        }
    }

    printf("\nQuantidade de aprovados: %d\n", aprovados);
    printf("Quantidade de reprovados: %d\n", reprovados);

    printf("Percentual de aprovacao: %.2f%%\n", (aprovados * 100.0) / 10);

    return 0;
}