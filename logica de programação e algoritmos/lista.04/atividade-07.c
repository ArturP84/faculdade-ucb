#include <stdio.h>
#include <string.h>

int main() {

    char nomes[5][50] = {
        "JOGADORA 1",
        "JOGADORA 2",
        "JOGADORA 3",
        "JOGADORA 4",
        "JOGADORA 5"
    };

    int votos[5] = {0, 0, 0, 0, 0};

    char nome[50];
    char sexo;
    int idade;
    int voto;

    int total = 0;
    int mulheres = 0;

    char nomesPessoas[300][50];
    int idades[300];
    char sexos[300];
    int votosPessoa[300];

    do {
        printf("\nNome: ");
        scanf(" %[^\n]", nome);

        printf("Idade: ");
        scanf("%d", &idade);

        while (idade <= 12) {
            printf("Idade deve ser maior que 12: ");
            scanf("%d", &idade);
        }

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        while (sexo != 'M' && sexo != 'F') {
            printf("Sexo invalido! Digite M ou F: ");
            scanf(" %c", &sexo);
        }

        printf("\nJogadoras:\n");

        for (int i = 0; i < 5; i++) {
            printf("%d - %s\n", i + 1, nomes[i]);
        }

        printf("Digite o voto: ");
        scanf("%d", &voto);

        while (voto < 1 || voto > 5) {
            printf("Voto invalido! Digite novamente: ");
            scanf("%d", &voto);
        }

        votos[voto - 1]++;

        strcpy(nomesPessoas[total], nome);
        idades[total] = idade;
        sexos[total] = sexo;
        votosPessoa[total] = voto;

        if (sexo == 'F') {
            mulheres++;
        }

        total++;

        if (total >= 50 && total < 300) {
            char continuar;

            printf("\nDeseja continuar? (S/N): ");
            scanf(" %c", &continuar);

            if (continuar != 'S' && continuar != 's') {
                break;
            }
        }

    } while (total < 300);

    printf("\n--- QUANTIDADE DE VOTOS ---\n");

    for (int i = 0; i < 5; i++) {
        printf("%s: %d votos\n", nomes[i], votos[i]);
    }

    int maior = votos[0];

    for (int i = 1; i < 5; i++) {
        if (votos[i] > maior) {
            maior = votos[i];
        }
    }

    printf("\n--- JOGADORA(S) MAIS VOTADA(S) ---\n");

    for (int i = 0; i < 5; i++) {
        if (votos[i] == maior) {
            printf("%s\n", nomes[i]);
        }
    }

    printf("\n--- PARTICIPANTES ---\n");

    printf("\nMULHERES:\n");

    for (int i = 0; i < total; i++) {
        if (sexos[i] == 'F') {
            printf("%s - %d anos\n", nomesPessoas[i], idades[i]);
        }
    }

    printf("\nHOMENS:\n");

    for (int i = 0; i < total; i++) {
        if (sexos[i] == 'M') {
            printf("%s - %d anos\n", nomesPessoas[i], idades[i]);
        }
    }

    printf("\n--- MAIORES DE IDADE QUE VOTARAM NA MARTA ---\n");

    for (int i = 0; i < total; i++) {

        if (idades[i] >= 18 && votosPessoa[i] == 1) {
            printf("%s - %d anos\n",
                   nomesPessoas[i], idades[i]);
        }
    }

    printf("\nQuantidade de mulheres: %d\n", mulheres);

    return 0;
}