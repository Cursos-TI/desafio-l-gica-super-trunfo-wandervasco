///Trabalho de estudo : Wander Araújo - Jogo War
//DESAFIO NOVATO


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Definindo as Globais
#define TERRITORIOS 5
#define MAX_NOME 30
#define MAX_COR 10

// Definição da struct Continente
struct Continente {
    char nome[MAX_NOME];
    char cor[MAX_COR];
    int tropas;
};
//Definiçao da Função Limpar
void Limpar(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Funçaõ Principal
int main() {
    struct Continente territorio[TERRITORIOS];

    // Coleta de dados do usuário
    for (int i = 0; i < TERRITORIOS; i++) {
        printf("\nDigite o nome do %dº Continente : ", i + 1);
        fgets(territorio[TERRITORIOS].nome,MAX_NOME,stdin); 
        Limpar();

        printf("Digite a cor do %dº exercito: ", i + 1);
        fgets(territorio[TERRITORIOS].cor,MAX_COR,stdin); 
        Limpar();

        printf("Informe quantas Tropas tem o %dº exercito: ", i + 1);
        scanf("%d", &territorio[i].tropas); // Lê um inteiro
        Limpar();
    }

    // Impressão dos dados
    printf("\n=== DADOS DOS TERRITORIOS ===\n");
    for (int i = 0; i < TERRITORIOS; i++) {
        printf("----------------------------------");
        printf("----------------------------------");
        printf("Territorio de numero - %d\n", i + 1);
        printf("Nome %s\n", territorio[i].nome);
        printf("Cor do exercito: %s\n", territorio[i].cor);
        printf("Tropas: %d\n\n", territorio[i].tropas);
        printf("----------------------------------");
        printf("----------------------------------");

    }

    return 0;
}



            
