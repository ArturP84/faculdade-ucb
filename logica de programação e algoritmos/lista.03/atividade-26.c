#include <stdio.h>

int main(){
    int alunos, c;
    float nota, soma = 0, media;

    printf("Informe a quantidade alunos: ");
    scanf("%d", &alunos);

    for(c = 1; c <= alunos; c++){
        printf("Nota do aluno %d: ", c);
        scanf("%f", &nota);

        soma = soma + nota;
    }

    media = soma / alunos;

    printf("Media da turma: %.2f\n", media);

    return 0;
}