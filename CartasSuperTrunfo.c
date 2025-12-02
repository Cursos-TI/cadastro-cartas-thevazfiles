#include <stdio.h>

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS
    // =======================

    // --- Atributos Carta 1 ---
    char estado1;
    char codigo1[4];
    char nome_cidade1[50];
    long long populacao1;
    float area1;
    float pib1_input;
    int pontos_turisticos1;

    // Variáveis de Cálculo
    float densidade_populacional1;
    float pib_percapita1;
    float super_poder1;

    // --- Atributos Carta 2 ---
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    long long populacao2;
    float area2;
    float pib2_input;
    int pontos_turisticos2;

    // Variáveis de Cálculo
    float densidade_populacional2;
    float pib_percapita2;
    float super_poder2;

    // Variável de ataque
    int Ataque;

    // 1. Leitura dos Dados (CARTA 1)
    // ==============================
    printf("=======================\n");
    printf(" Cadastro da Carta 1\n");
    printf("=======================\n");

    printf("Estado (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (Ex: 01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nome_cidade1);

    printf("População: ");
    scanf("%lld", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1_input);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n--- Cadastro Carta 1 OK ---\n\n");

    // 1. Leitura dos Dados (CARTA 2)
    // ==============================
    printf("====================\n");
    printf(" Cadastro da Carta 2\n");
    printf("====================\n");

    printf("Estado (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (Ex: 02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nome_cidade2);

    printf("População: ");
    scanf("%lld", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2_input);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n--- Cadastro Carta 2 OK ---\n\n");

    // 2. Cálculos (DENSIDADE, PIB PER CAPITA E SUPER PODER)
    // =====================================================

    // --- Carta 1 ---
    // Cálculo total do PIB Total, usando o valor 1000000000 (inteiro)
    float pib1_total = pib1_input * 1000000000;

    // Cálculos utilizando a conversão explícita
    densidade_populacional1 = (float)populacao1 / area1;
    pib_percapita1 = pib1_total / (float)populacao1;

    // Cálculo do Super Poder utilizando o valor 1 (inteiro) na divisão
    super_poder1 = (float)populacao1 + area1 + pib1_total +
                   (float)pontos_turisticos1 + pib_percapita1 +
                   (1 / densidade_populacional1);

    // --- Carta 2 ---
    // Cálculo total do PIB Total, usando o valor 1000000000 (inteiro)
    float pib2_total = pib2_input * 1000000000;

    // Cálculos utilizando a conversão explícita
    densidade_populacional2 = (float)populacao2 / area2;
    pib_percapita2 = pib2_total / (float)populacao2;

    // Cálculo do Super Poder utilizando o valor 1 (inteiro) na divisão
    super_poder2 = (float)populacao2 + area2 + pib2_total +
                   (float)pontos_turisticos2 + pib_percapita2 +
                   (1 / densidade_populacional2);

    // 3. Comparação dos Ataques
    // ========================

    /* Altere o printf para inicar no título,
       qual opção será utilizada. Ex: (Atributo: População):\n"); */
    printf("Comparação de cartas (Atributo:PIB per Capta):\n");

    // Valor correspondente ao atributo que será utilizado pela variável "Ataque"
    /*
    Valor 4 para População
    Valor 5 para Área
    Valor 6 para PIB
    Valor 7 para Pontos Turísticos
    Valor 8 para Densidade Populacional
    Valor 9 para PIB per Capta
    */

    Ataque = 9; // Altere aqui para comparar

    // Implementação da estrutura de decisão IF ELSE
    // =============================================

    if (Ataque == 4)
    {
        if (populacao1 > populacao2)
        {
            printf("Carta 1 - São Paulo (SP): %.3f milhões de habitantes.\nCarta 2 - Rio de Janeiro (RJ): %.3f milhões de habitantes.\nResultado: Carta 1 (São Paulo) venceu!", (float)populacao1 / 1000000, (float)populacao2 / 1000000);
        }
        else
        {
            printf("Carta 1 - São Paulo (SP): %.3f milhões de habitantes.\nCarta 2 - Rio de Janeiro (RJ): %.3f milhões de habitantes.\nResultado: Carta 2 (Rio de Janeiro) venceu!", populacao1, populacao2);
        }
    }
    if (Ataque == 5)
    {
        if (area1 > area2)
        {
            printf("Carta 1 - São Paulo (SP): %.2f km²\nCarta 2 - Rio de Janeiro (RJ): %.2f km²\nResultado: Carta 1 (São Paulo) venceu!", area1, area2);
        }
        else
        {
            printf("Carta 1 - São Paulo (SP): %.2f km²\nCarta 2 - Rio de Janeiro (RJ): %.2f km²\nResultado: Carta 2 (Rio de janeiro) venceu!", area1, area2);
        }
    }
    if (Ataque == 6)
    {
        if (pib1_input > pib2_input)
        {
            printf("Carta 1 - São Paulo (SP): %.2f bilhões de reais.\nCarta 2 - Rio de Janeiro (RJ): %.2f bilhões de reais.\nResultado: Carta 1 (São Paulo) venceu!", pib1_input, pib2_input);
        }
        else
        {
            printf("Carta 1 - São Paulo (SP): %.2f bilhões de reais.\nCarta 2 - Rio de Janeiro (RJ): %.2f bilhões de reais.\nResultado: Carta 2 (Rio de Janeiro) venceu!", pib1_input, pib2_input);
        }
    }
    if (Ataque == 7)
    {
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("Carta 1 - São Paulo (SP): %d pontos turísticos.\nCarta 2 - Rio de Janeiro (RJ): %d pontos turísticos.\nResultado: Carta 1 (São Paulo) venceu!", pontos_turisticos1, pontos_turisticos2);
        }
        else
        {
            printf("Carta 1 - São Paulo (SP): %d pontos turísticos.\nCarta 2 - Rio de Janeiro (RJ): %d pontos turísticos.\nResultado: Carta 2 (Rio de Janeiro) venceu!", pontos_turisticos1, pontos_turisticos2);
        }
    }
    if (Ataque == 8)
    {
        if (densidade_populacional1 < densidade_populacional2)
        {
            printf("Carta 1 - São Paulo (SP): %.2f hab/km²\nCarta 2 - Rio de Janeiro (RJ): %.2f hab/km²\nResultado: Carta 1 (São Paulo) venceu!", densidade_populacional1, densidade_populacional2);
        }
        else
        {
            printf("Carta 1 - São Paulo (SP): %.2f hab/km²\nCarta 2 - Rio de Janeiro (RJ): %.2f hab/km²\nResultado: Carta 2 (Rio de Janeiro) venceu!", densidade_populacional1, densidade_populacional2);
        }
    }
    if (Ataque == 9)
    {
        if (pib_percapita1 > pib_percapita2)
        {
            printf("Carta 1 - São Paulo (SP): %.2f reais.\nCarta 2 - Rio de Janeiro (RJ): %.2f reais.\nResultado: Carta 1 (São Paulo) venceu!", pib_percapita1, pib_percapita2);
        }
        else
        {
            printf("Carta 1 - São Paulo (SP): %.2f reais.\nCarta 2 - Rio de Janeiro (RJ): %.2f reais.\nResultado: Carta 2 (Rio de Janeiro) venceu!", pib_percapita1, pib_percapita2);
        }
    }
}
