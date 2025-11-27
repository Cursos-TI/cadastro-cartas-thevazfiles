#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{

    // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1[20], estado2[20];
    char codigo1[30], codigo2[30];
    char cidade1[30], cidade2[30];

    int pontos_turisticos1, pontos_turisticos2;

    double populacao1, populacao2;
    double area1, area2;
    double pib1, pib2;

    double densidade_populacional1, densidade_populacional2;
    double pib_percapta1, pib_percapta2;

    // Área para entrada de dados
    // Cadastro 1

    printf("\nINICIANDO O PRIMEIRO CADASTRO...\n");

    printf("Digite o Estado: ");
    scanf("%s", estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a estimativa populacional desta cidade: ");
    scanf("%lf", &populacao1);

    printf("Digite a área em quilômetros desta cidade: ");
    scanf("%lf", &area1);

    printf("Digite o PIB projetado desta cidade: ");
    scanf("%lf", &pib1);
    pib1 = pib1 * 1000000000; // Convertendo o PIB para bilhões.

    printf("Digite a quantidade de pontos túrísticos desta cidade: ");
    scanf("%d", &pontos_turisticos1);

    // Área para entrada de dados
    // Cadastro 2

    printf("INICIANDO O SEGUNDO CADASTRO...\n");

    printf("\nDigite o Estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a estimativa populacional desta cidade: ");
    scanf("%lf", &populacao2);

    printf("Digite a área em quilômetros desta cidade: ");
    scanf("%lf", &area2);

    printf("Digite o PIB projetado desta cidade: ");
    scanf("%lf", &pib2);
    pib2 = pib2 * 1000000000; // Convertendo o PIB para bilhões.

    printf("Digite a quantidade de pontos túrísticos desta cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Calcunando a Densidade Populacional
    densidade_populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;

    // Calculando o PIB per Capta
    pib_percapta1 = pib1 / populacao1;
    pib_percapta2 = pib2 / populacao2;

    // Área para exibição dos dados das cidades
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1 / 1000000000);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capta: %.2f reais\n", pib_percapta1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %.0f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2 / 1000000000);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional2);
    printf("PIB per capta: %.2f reais\n", pib_percapta2);

    return 0;
}