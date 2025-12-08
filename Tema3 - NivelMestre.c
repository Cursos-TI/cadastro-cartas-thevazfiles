#include <stdio.h>
#include <stdlib.h>

int main()
{

    // DECLARAÇÃO DE VARIÁVEIS
    // ========================

    /// --- Atributos Carta 1 ---
    char estado1 = 'A';
    char codigo1[4] = "01";
    char nome_cidade1[50] = "SAO PAULO";
    long long populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1_input = 699.28;
    int pontos_turisticos1 = 50;

    // Variáveis de Cálculo
    float densidade_populacional1;
    float pib_percapita1;
    float super_poder1;

    // --- Atributos Carta 2  ---
    char estado2 = 'B';
    char codigo2[4] = "02";
    char nome_cidade2[50] = "RIO DE JANEIRO";
    long long populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2_input = 300.50;
    int pontos_turisticos2 = 30;

    // Variáveis de Cálculo
    float densidade_populacional2;
    float pib_percapita2;
    float super_poder2;

    // Variáveis de Jogo
    int escolha1Jogador;
    int escolha2Jogador;

    // Variáveis para o placar e soma.
    float soma_c1 = 0.0;
    float soma_c2 = 0.0;
    int vitorias_c1 = 0;
    int vitorias_c2 = 0;

    // Variáveis auxiliares (temporárias) para as comparações
    float valor1_c1;
    float valor1_c2;
    float valor2_c1;
    float valor2_c2;
    float pib1_total;
    float pib2_total;
    
    // 2. Cálculos (DENSIDADE, PIB PER CAPITA E SUPER PODER)
    // =====================================================

    // --- Carta 1 ---
    pib1_total = pib1_input * 1000000000;
    densidade_populacional1 = (float)populacao1 / area1;
    pib_percapita1 = pib1_total / (float)populacao1;

    super_poder1 = (float)populacao1 + area1 + pib1_total + (float)pontos_turisticos1 + pib_percapita1 + (1 / densidade_populacional1);

    // --- Carta 2 ---
    pib2_total = pib2_input * 1000000000;
    densidade_populacional2 = (float)populacao2 / area2;
    pib_percapita2 = pib2_total / (float)populacao2;

    super_poder2 = (float)populacao2 + area2 + pib2_total + (float)pontos_turisticos2 + pib_percapita2 + (1 / densidade_populacional2);

    // --- PRIMEIRA ESCOLHA ---
    printf("************************ MENU PRINCIPAL ************************\n");
    printf("-- Você deve escolher 2 atributos para comparação entre as cartas. --\n");
    printf("__________________________________________________________\n");
    printf("     Escolha o PRIMEIRO atributo abaixo.\n");
    printf("1. População (Maior Vence)\n");
    printf("2. Área (Maior Vence)\n");
    printf("3. PIB (Maior Vence)\n");
    printf("4. Pontos Turísticos (Maior Vence)\n");
    printf("5. Densidade Demográfica (Menor Vence)\n");
    printf("6. PIB per Capta (Maior Vence)\n");
    printf("7. Super Poder (Maior Vence)\n");
    printf("Opção: ");
    scanf("%d", &escolha1Jogador);
    printf("__________________________________________________________\n");

    // --- VALIDAÇÃO E SEGUNDO MENU DINÂMICO ---
    int primeira_escolha_valida = 0;

    // Validação da primeira escolha
    if (escolha1Jogador >= 1 && escolha1Jogador <= 7) {
        primeira_escolha_valida = 1;
        } else {
            printf("ERRO: Primeira escolha inválida (%d). Processamento encerrado.\n", escolha1Jogador);
            return 0;
            }
    if (primeira_escolha_valida) {
        printf("     Escolha o SEGUNDO atributo (Não pode ser %d).\n", escolha1Jogador);
        

        // Exibição do menu dinâmico (Usando IFs para remover a opção já escolhida)
        printf("__________________________________________________________\n");
        if (escolha1Jogador != 1) {
            printf("1. População (Maior Vence)\n");
        }
        if (escolha1Jogador != 2) {
            printf("2. Área (Maior Vence)\n");
        }
        if (escolha1Jogador != 3) {
            printf("3. PIB (Maior Vence)\n");
        }
        if (escolha1Jogador != 4) {
            printf("4. Pontos Turísticos (Maior Vence)\n");
        }
        if (escolha1Jogador != 5) {
            printf("5. Densidade Demográfica (Menor Vence)\n");
        }
        if (escolha1Jogador != 6) {
            printf("6. PIB per Capta (Maior Vence)\n");
        }
        if (escolha1Jogador != 7) {
            printf("7. Super Poder (Maior Vence)\n");
        }
        printf("Opção: ");
        scanf("%d", &escolha2Jogador);
        printf("__________________________________________________\n");

        // Validação da segunda escolha (repetição e intervalo)
        if (escolha2Jogador == escolha1Jogador)
        {
            printf("ERRO: O segundo atributo NÃO pode ser igual ao primeiro (%d).\n", escolha1Jogador);
            return 0;
        }
        if (escolha2Jogador < 1 || escolha2Jogador > 7)
        {
            printf("ERRO: Segunda escolha inválida. Processamento encerrado.\n");
            return 0;
        }
    }
    
    // Início da seção de saída
    printf("\n===== RODADA ÚNICA =====\n\n");
    printf("PRIMEIRA COMPARAÇÃO:\n");

    // =================================================================
    // 4. PROCESSAMENTO DA PRIMEIRA ESCOLHA (SWITCH)
    // =================================================================

    switch (escolha1Jogador)
    {
    case 1:
        valor1_c1 = (float)populacao1;
        valor1_c2 = (float)populacao2;
        (valor1_c1 > valor1_c2) ? vitorias_c1++ : (valor1_c2 > valor1_c1) ? vitorias_c2++ : 0;
        
        printf("Valor Carta 1 (%c%s-%s) - População: %.0f\n", estado1, codigo1, nome_cidade1, valor1_c1);
        printf("Valor Carta 2 (%c%s-%s) - População: %.0f\n\n", estado2, codigo2, nome_cidade2, valor1_c2);
        break;
    case 2:
        valor1_c1 = area1;
        valor1_c2 = area2;
        (valor1_c1 > valor1_c2) ? vitorias_c1++ : (valor1_c2 > valor1_c1) ? vitorias_c2++ : 0;

        printf("Valor Carta 1 (%c%s-%s) - Área: %.2f\n", estado1, codigo1, nome_cidade1, valor1_c1);
        printf("Valor Carta 2 (%c%s-%s) - Área: %.2f\n\n", estado2, codigo2, nome_cidade2, valor1_c2);
        break;
    case 3:
        valor1_c1 = pib1_input;
        valor1_c2 = pib2_input;
        (valor1_c1 > valor1_c2) ? vitorias_c1++ : (valor1_c2 > valor1_c1) ? vitorias_c2++ : 0;

        printf("Valor Carta 1 (%c%s-%s) - PIB: %.2f\n", estado1, codigo1, nome_cidade1, valor1_c1);
        printf("Valor Carta 2 (%c%s-%s) - PIB: %.2f\n\n", estado2, codigo2, nome_cidade2, valor1_c2);
        break;
    case 4:
        valor1_c1 = (float)pontos_turisticos1;
        valor1_c2 = (float)pontos_turisticos2;
        (valor1_c1 > valor1_c2) ? vitorias_c1++ : (valor1_c2 > valor1_c1) ? vitorias_c2++ : 0;

        printf("Valor Carta 1 (%c%s-%s) - Pontos Turísticos: %.0f\n", estado1, codigo1, nome_cidade1, valor1_c1);
        printf("Valor Carta 2 (%c%s-%s) - Pontos Turísticos: %.0f\n\n", estado2, codigo2, nome_cidade2, valor1_c2);
        break;
    case 5:
        valor1_c1 = densidade_populacional1;
        valor1_c2 = densidade_populacional2;
        (valor1_c1 < valor1_c2) ? vitorias_c1++ : (valor1_c2 < valor1_c1) ? vitorias_c2++ : 0; // MENOR VENCE

        printf("Valor Carta 1 (%c%s-%s) - Densidade Demográfica: %.2f\n", estado1, codigo1, nome_cidade1, valor1_c1);
        printf("Valor Carta 2 (%c%s-%s) - Densidade Demográfica: %.2f\n\n", estado2, codigo2, nome_cidade2, valor1_c2);
        break;
    case 6:
        valor1_c1 = pib_percapita1;
        valor1_c2 = pib_percapita2;
        (valor1_c1 > valor1_c2) ? vitorias_c1++ : (valor1_c2 > valor1_c1) ? vitorias_c2++ : 0;

        printf("Valor Carta 1 (%c%s-%s) - PIB per Capta: %.2f\n", estado1, codigo1, nome_cidade1, valor1_c1);
        printf("Valor Carta 2 (%c%s-%s) - PIB per Capta: %.2f\n\n", estado2, codigo2, nome_cidade2, valor1_c2);
        break;
    case 7:
        valor1_c1 = super_poder1;
        valor1_c2 = super_poder2;
        (valor1_c1 > valor1_c2) ? vitorias_c1++ : (valor1_c2 > valor1_c1) ? vitorias_c2++ : 0;

        printf("Valor Carta 1 (%c%s-%s) - Super Poder: %.2f\n", estado1, codigo1, nome_cidade1, valor1_c1);
        printf("Valor Carta 2 (%c%s-%s) - Super Poder: %.2f\n\n", estado2, codigo2, nome_cidade2, valor1_c2);
        break;
    default:
        printf("ERRO: Escolha 1 inválida. Pontuação ignorada.\n");
        break;
    }

    soma_c1 += valor1_c1;
    soma_c2 += valor1_c2;

    printf("SEGUNDA COMPARAÇÃO:\n");

    // =================================================================
    // 5. PROCESSAMENTO DA SEGUNDA ESCOLHA (SWITCH)
    // =================================================================

    switch (escolha2Jogador)
    {
    case 1:
        valor2_c1 = (float)populacao1;
        valor2_c2 = (float)populacao2;
        (valor2_c1 > valor2_c2) ? vitorias_c1++ : (valor2_c2 > valor2_c1) ? vitorias_c2++ : 0;

        printf("Valor Carta 1 (%c%s-%s) - População: %.0f\n", estado1, codigo1, nome_cidade1, valor2_c1);
        printf("Valor Carta 2 (%c%s-%s) - População: %.0f\n\n", estado2, codigo2, nome_cidade2, valor2_c2);
        break;
    case 2:
        valor2_c1 = area1;
        valor2_c2 = area2;
        (valor2_c1 > valor2_c2) ? vitorias_c1++ : (valor2_c2 > valor2_c1) ? vitorias_c2++ : 0;

        printf("Valor Carta 1 (%c%s-%s) - Área: %.2f\n", estado1, codigo1, nome_cidade1, valor2_c1);
        printf("Valor Carta 2 (%c%s-%s) - Área: %.2f\n\n", estado2, codigo2, nome_cidade2, valor2_c2);
        break;
    case 3:
        valor2_c1 = pib1_input;
        valor2_c2 = pib2_input;
        (valor2_c1 > valor2_c2) ? vitorias_c1++ : (valor2_c2 > valor2_c1) ? vitorias_c2++ : 0;

        printf("Valor Carta 1 (%c%s-%s) - PIB: %.2f\n", estado1, codigo1, nome_cidade1, valor2_c1);
        printf("Valor Carta 2 (%c%s-%s) - PIB: %.2f\n\n", estado2, codigo2, nome_cidade2, valor2_c2);
        break;
    case 4:
        valor2_c1 = (float)pontos_turisticos1;
        valor2_c2 = (float)pontos_turisticos2;
        (valor2_c1 > valor2_c2) ? vitorias_c1++ : (valor2_c2 > valor2_c1) ? vitorias_c2++ : 0;

        printf("Valor Carta 1 (%c%s-%s) - Pontos Turísticos: %.0f\n", estado1, codigo1, nome_cidade1, valor2_c1);
        printf("Valor Carta 2 (%c%s-%s) - Pontos Turísticos: %.0f\n\n", estado2, codigo2, nome_cidade2, valor2_c2);
        break;
    case 5:
        valor2_c1 = densidade_populacional1;
        valor2_c2 = densidade_populacional2;
        (valor2_c1 < valor2_c2) ? vitorias_c1++ : (valor2_c2 < valor2_c1) ? vitorias_c2++ : 0; // MENOR VENCE

        printf("Valor Carta 1 (%c%s-%s) - Densidade Demográfica: %.2f\n", estado1, codigo1, nome_cidade1, valor2_c1);
        printf("Valor Carta 2 (%c%s-%s) - Densidade Demográfica: %.2f\n\n", estado2, codigo2, nome_cidade2, valor2_c2);
        break;
    case 6:
        valor2_c1 = pib_percapita1;
        valor2_c2 = pib_percapita2;
        (valor2_c1 > valor2_c2) ? vitorias_c1++ : (valor2_c2 > valor2_c1) ? vitorias_c2++ : 0;

        printf("Valor Carta 1 (%c%s-%s) - PIB per Capta: %.2f\n", estado1, codigo1, nome_cidade1, valor2_c1);
        printf("Valor Carta 2 (%c%s-%s) - PIB per Capta: %.2f\n\n", estado2, codigo2, nome_cidade2, valor2_c2);
        break;
    case 7:
        valor2_c1 = super_poder1;
        valor2_c2 = super_poder2;
        (valor2_c1 > valor2_c2) ? vitorias_c1++ : (valor2_c2 > valor2_c1) ? vitorias_c2++ : 0;

        printf("Valor Carta 1 (%c%s-%s) - Super Poder: %.2f\n", estado1, codigo1, nome_cidade1, valor2_c1);
        printf("Valor Carta 2 (%c%s-%s) - Super Poder: %.2f\n\n", estado2, codigo2, nome_cidade2, valor2_c2);
        break;
    default:
        printf("ERRO: Escolha 2 inválida. Pontuação ignorada.\n");
        break;
    }

    soma_c1 += valor2_c1;
    soma_c2 += valor2_c2;

    // =================================================================
    // 6. RESULTADO FINAL PELA SOMA DOS ATRIBUTOS E PLACAR
    // =================================================================
    printf("===== RESULTADO FINAL =====\n");
    printf("Pontos Carta 1 (%c%s-%s): %d\n", estado1, codigo1, nome_cidade1, vitorias_c1);
    printf("Pontos Carta 2 (%c%s-%s): %d\n\n", estado2, codigo2, nome_cidade2, vitorias_c2);

    // Soma Total no caso de EMPATE!
    printf("--- DESEMPATE (caso haja necessidade) ---\n");
    printf("%s (Soma Total): %.2f\n", nome_cidade1, soma_c1);
    printf("%s (Soma Total): %.2f\n\n", nome_cidade2, soma_c2);
    
    // Lógica para determinar o Vencedor Final -
    if (vitorias_c1 > vitorias_c2) {
        printf("-> VENCEDOR: %s!\n", nome_cidade1);
    } else if (vitorias_c2 > vitorias_c1) {
        printf("-> VENCEDOR: %s!\n", nome_cidade2);
    } else {
        printf("-> O JOGO TERMINOU EMPATADO!\n");
        printf("Use o critério de DESEMPATE.\n\n");
    }

    return 0;
}