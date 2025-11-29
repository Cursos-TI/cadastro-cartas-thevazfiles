#include <stdio.h>

int main() {
    // DECLARAÇÃO DE VARIÁVEIS 
    // =======================
    
    // --- Atributos Carta 1 ---
    char estado1; 
    char codigo1[4]; 
    char nome_cidade1[50]; 
    unsigned long populacao1; 
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
    unsigned long populacao2; 
    float area2;
    float pib2_input;
    int pontos_turisticos2;

    // Variáveis de Cálculo
    float densidade_populacional2;
    float pib_percapita2;
    float super_poder2; 
    
    // Variáveis de Resultados de Comparação (0 ou 1)
    int vitoria_populacao, vitoria_area, vitoria_pib, vitoria_pontos;
    int vitoria_densidade, vitoria_pib_capita, vitoria_super_poder;


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
    scanf("%lu", &populacao1); 

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
    scanf("%lu", &populacao2); 

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
                   (1 / densidade_populacional1); // Sem .0f


    // --- Carta 2 ---
    // Cálculo total do PIB Total, usando o valor 1000000000 (inteiro)
    float pib2_total = pib2_input * 1000000000;

    // Cálculos utilizando a conversão explícita
    densidade_populacional2 = (float)populacao2 / area2;
    pib_percapita2 = pib2_total / (float)populacao2;
    
    // Cálculo do Super Poder utilizando o valor 1 (inteiro) na divisão
    super_poder2 = (float)populacao2 + area2 + pib2_total + 
                   (float)pontos_turisticos2 + pib_percapita2 + 
                   (1 / densidade_populacional2); // Sem .0f
    
    
    // 3. Comparação das Cartas
    // ========================
    
    // Vence o maior valor "opção 1 > Opção 2" - 1=vence e 0=perde
    vitoria_populacao = (populacao1 > populacao2);
    vitoria_area = (area1 > area2);
    vitoria_pib = (pib1_input > pib2_input); 
    vitoria_pontos = (pontos_turisticos1 > pontos_turisticos2);
    vitoria_pib_capita = (pib_percapita1 > pib_percapita2);
    vitoria_super_poder = (super_poder1 > super_poder2);

    // // Vence o menor valor "Opção 1 < Opção 2" - 1=vence e 0=perde
    vitoria_densidade = (densidade_populacional1 < densidade_populacional2);

    
    // 4. Exibição dos Resultados
    // ==========================
    printf("\n==========================\n");
    printf("       RESULTADOS \n");
    printf("==============================\n\n");
    
    printf("Após a comparação de Cartas:\n");

    printf("População: %s (%lu)\n", (vitoria_populacao ? "Carta 1 venceu" : "Carta 2 venceu"), populacao1 > populacao2); // <--- Ajuste para %lu
    printf("Área: %s (%d)\n", (vitoria_area ? "Carta 1 venceu" : "Carta 2 venceu"), vitoria_area);
    printf("PIB: %s (%d)\n", (vitoria_pib ? "Carta 1 venceu" : "Carta 2 venceu"), vitoria_pib);
    printf("Pontos Turísticos: %s (%d)\n", (vitoria_pontos ? "Carta 1 venceu" : "Carta 2 venceu"), vitoria_pontos);
    
    printf("Densidade Populacional: %s (%d)\n", (vitoria_densidade ? "Carta 1 venceu" : "Carta 2 venceu"), vitoria_densidade);
    
    printf("PIB per Capita: %s (%d)\n", (vitoria_pib_capita ? "Carta 1 venceu" : "Carta 2 venceu"), vitoria_pib_capita);
    printf("Super Poder: %s (%d)\n", (vitoria_super_poder ? "Carta 1 venceu" : "Carta 2 venceu"), vitoria_super_poder);

    printf("\n===========================================\n");

    return 0;
}