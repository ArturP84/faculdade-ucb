#include<stdio.h>
#include<string.h>

int main(){
    int na;
    float n1, n2, n3, media_exe, media_apro;
    char conceito, situacaof[20];

    printf("Escreva o numero de indentificacao do aluno: ");
    scanf("%d", &na);

    printf("Escreva a primeira nota: ");
    scanf("%f", &n1);
    printf("Escreva a segunda nota: ");
    scanf("%f", &n2);
    printf("Escreva a terceira nota: ");
    scanf("%f", &n3);

    printf("Escreva a media dos exercicios: ");
    scanf("%f", &media_exe);

    media_apro = ((n1 + n2) * (2 + n3) * (3 + media_exe))/7;

    if(media_apro > 90){
        conceito = 'A';
    }else if(media_apro >= 75 && media_apro < 90){
        conceito = 'B';
    }else if(media_apro >= 60 && media_apro < 75){
        conceito = 'C';
    }else if(media_apro >= 40 && media_apro < 60){
        conceito = 'D';
    }else if(media_apro < 40){
        conceito = 'E';
    }

    if(conceito == 'A' || conceito == 'B' || conceito == 'C'){
        strcpy(situacaof, "APROVADO");
    }else{
        strcpy(situacaof, "REPROVADO");
    }

    printf("O aluno %d com as notas %.1f, %.1f e %.1f, com a media de exercicios de %.1f, teve a media de aproveitamento de %.1f e conceito: %c.\n",
        na, n1, n2, n3, media_exe, media_apro, conceito);
    printf("O aluno esta %s!", situacaof);

    return 0;
}