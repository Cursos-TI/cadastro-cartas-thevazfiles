#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1[20];
char estado2[20];
char codigo1[30];
char codigo2[30];
char cidade1[30];
char cidade2[30];
int populacao1;
int populacao2;
float area1;
float area2;
float pib1;
float pib2;
int pontos_turisticos1;
int pontos_turisticos2;
  
// Área para entrada de dados

// Cadastro da carta 1
    printf("\nINICIANDO O PRIMEIRO CADASTRO...\n");

    printf("Digite o Estado:");
    scanf("%s", estado1);
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a estimativa populacional desta cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área em quilômetros desta cidade: ");
    scanf("%f", &area1);
    printf("Digite o PIB projetado desta cidade: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos túrísticos desta cidade: ");
    scanf("%d", &pontos_turisticos1);

// Cadastro da carta 2
    printf("INICIANDO O SEGUNDO CADASTRO...\n");
    
    printf("\nDigite o Estado: ");
    scanf("%s", estado2);
    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a estimativa populacional desta cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área em quilômetros desta cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB projetado desta cidade: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos túrísticos desta cidade: ");
    scanf("%d", &pontos_turisticos2);
  
// Área para exibição dos dados das cidades

// Exibição do cartão 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

// Exibição do cartão 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %.d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    
return 0;
} 