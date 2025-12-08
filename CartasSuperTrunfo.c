#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolhaJogador;

    // ===== Declaração e Inicialização das Variáveis =====

    // === Atributos Carta 1 ===
    char nome_pais1[50] = "Sao Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1_input = 699.28;
    int pontos_turisticos1 = 50;

    // == Variáveis de Cálculo ==
    float densidade_populacional1;
    float pib_percapita1;

    // === Atributos Carta 2 ===
    char nome_pais2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2_input = 300.50;
    int pontos_turisticos2 = 30;

    // == Variáveis de Cálculo ==
    float densidade_populacional2;
    float pib_percapita2;

    // ===== Cálculos (Densidade Populacional e PIB per Capta) =====

    // === Cáulculos - Carta 1 ===

    // == Cálculo total do PIB Total, usando o valor 1000000000 (inteiro) ==
    float pib1_total = pib1_input * 1000000000;
    // == Cálculos utilizando a conversão explícita ==
    densidade_populacional1 = (float)populacao1 / area1;
    pib_percapita1 = pib1_total / (float)populacao1;

    // === Cálculos - Carta 2 ===

    // == Cálculo total do PIB Total, usando o valor 1000000000 (inteiro) ==
    float pib2_total = pib2_input * 1000000000;
    //== Cálculos utilizando a conversão explícita ==
    densidade_populacional2 = (float)populacao2 / area2;
    pib_percapita2 = pib2_total / (float)populacao2;

    // ===== 4. MENU INTERATIVO PARA O JOGO =====

    printf("******************** MENU PRINCIPAL **********************\n");
    printf("-- Escolha um atributo para comparação entre as cartas: --\n");
    printf("__________________________________________________________\n");
    printf("1. População (Maior Vence)                              --\n");
    printf("2. Área (Maior Vence)                                   --\n");
    printf("3. PIB (Maior Vence)                                    --\n");
    printf("4. Pontos Turísticos (Maior Vence)                      --\n");
    printf("5. Densidade Demográfica (Menor Vence)                  --\n");
    printf("Opção: ");
    scanf("%d", &escolhaJogador);
    printf("__________________________________________________\n");

    // === Utilização do Switch ===

    switch (escolhaJogador)
    {
    // 1. POPULAÇÃO: Vence o MAIOR
    case 1:
        printf("\nO atributo escolhido foi: POPULAÇÃO\n");
        if (populacao1 == populacao2)
        {
            printf("\nEMPATE! \nAs 2 cidades (%s e %s) \npossuem o mesmo valor de habitantes.\n%d\n\n", nome_pais1, nome_pais2, populacao1);
            printf("Tente outro atributo para desempatar!\n");
        }
        else
        {
            if (populacao1 > populacao2)
            {
                printf("\nDISPUTARAM: %s versus %s \n  GANHADOR: Vitória de %s!\n", nome_pais1, nome_pais2, nome_pais1);
                printf("\n1 - População de %s: %d\n", nome_pais1, populacao1);
                printf("2 - População de %s: %d\n\n", nome_pais2, populacao2);
            }
            else if (populacao2 > populacao1)
            {
                printf("\nDISPUTARAM: %s versus %s \n  GANHADOR: Vitória de %s!\n", nome_pais1, nome_pais2, nome_pais2);
                printf("\n1 - População de %s: %d\n", nome_pais2, populacao2);
                printf("2 - População de %s: %d\n\n", nome_pais1, populacao1);
            }
        }
        break;
    // 2. ÁREA: Vence o MAIOR
    case 2:
        printf("\nO atributo escolhido foi: ÁREA\n");
        if (area1 == area2)
        {
            printf("\nEMPATE! \n\nAs áreas das 2 cidades (%s e %s) possuem o mesmo valor em km².\n %.2f\n\n", nome_pais1, nome_pais2, area1);
            printf("Tente outro atributo para desempatar!\n");
        }
        else
        {
            if (area1 > area2)
            {
                printf("\nDISPUTARAM: %s versus %s \n  GANHADOR: Vitória de %s!\n", nome_pais1, nome_pais2, nome_pais1);
                printf("\n1 - Área total em km² de %s: %.2f\n", nome_pais1, area1);
                printf("2 - Área total em km² de %s: %.2f\n\n", nome_pais2, area2);
            }
            else if (area2 > area1)
            {
                printf("\nDISPUTARAM: %s versus %s \n  GANHADOR: Vitória de %s!\n", nome_pais1, nome_pais2, nome_pais2);
                printf("\n1 - Área total em km² de %s: %.2f\n", nome_pais2, area2);
                printf("2 - Área total em km² de %s: %.2f\n\n", nome_pais1, area1);
            }
        }
        break;
    // 3. PIB: Vence o MAIOR
    case 3:
        printf("\nO atributo escolhido foi: PIB\n");
        if (pib1_input == pib2_input)
        {
            printf("\nEMPATE! \n\n O PIB das duas cidades (%s e %s) são iguais.\n %.2f\n\n", nome_pais1, nome_pais2, pib1_input);
            printf("Tente outro atributo para desempatar!\n");
        }
        else
        {
            if (pib1_input > pib2_input)
            {
                printf("\nDISPUTARAM: %s versus %s \n  GANHADOR: Vitória de %s!\n", nome_pais1, nome_pais2, nome_pais1);
                printf("\n1 - PIB (em bilhões) de %s: %.2f\n", nome_pais1, pib1_input);
                printf("2 - PIB (em bilhões) de %s: %.2f\n\n", nome_pais2, pib2_input);
            }
            else if (pib2_input > pib1_input)
            {
                printf("\nDISPUTARAM: %s versus %s \n  GANHADOR: Vitória de %s!\n", nome_pais1, nome_pais2, nome_pais2);
                printf("\n1 - PIB (em bilhões) de %s: %.2f\n", nome_pais2, pib2_input);
                printf("2 - PIB (em bilhões) de %s: %.2f\n\n", nome_pais1, pib1_input);
            }
        }
        break;
    // 4. PONTOS TURÍSTICOS: Vence o MAIOR
    case 4:
        printf("\nO atributo escolhido foi: PONTOS TURÍSTICOS\n");
        if (pontos_turisticos1 == pontos_turisticos2)
        {
            printf("\nEMPATE! \n\n As duas cidades (%s e %s) possuem a mesma quantidade de pontos turísticos.\n %d\n\n", nome_pais1, nome_pais2, pontos_turisticos1);
            printf("Tente outro atributo para desempatar!\n");
        }
        else
        {
            if (pontos_turisticos1 > pontos_turisticos2)
            {
                printf("\nDISPUTARAM: %s versus %s \n  GANHADOR: Vitória de %s!\n", nome_pais1, nome_pais2, nome_pais1);
                printf("\n1 - Pontos Turísticos de %s: %d\n", nome_pais1, pontos_turisticos1);
                printf("2 - Pontos Turísticos de %s: %d\n\n", nome_pais2, pontos_turisticos2);
            }
            else if (pontos_turisticos2 > pontos_turisticos1)
            {
                printf("\nDISPUTARAM: %s versus %s \n  GANHADOR: Vitória de %s!\n", nome_pais1, nome_pais2, nome_pais2);
                printf("\n1 - Pontos Turísticos de %s: %d\n", nome_pais2, pontos_turisticos2);
                printf("2 - Pontos Turísticos de %s: %d\n\n", nome_pais1, pontos_turisticos1);
            }
        }
        break;
    // 5. DENSIDADE DEMOGRÁFICA: Vence o MENOR
    case 5:
        printf("\nO atributo escolhido foi: DENSIDADE DEMOGRÁFICA\n");
        if (densidade_populacional1 < densidade_populacional2)
        {
            printf("\nDISPUTARAM: %s versus %s \n  GANHADOR: Vitória de %s!\n", nome_pais1, nome_pais2, nome_pais1);
            printf("\n1 - Densidade Demografica de %s: %.2f\n", nome_pais1, densidade_populacional1);
            printf("2 - Densidade Demografica de %s: %.2f\n\n", nome_pais2, densidade_populacional2);
        }
        else if (densidade_populacional2 < densidade_populacional1)
        {
            printf("\nDISPUTARAM: %s versus %s \n  GANHADOR: Vitória de %s!\n", nome_pais1, nome_pais2, nome_pais2);
            printf("\n1 - Densidade Demografica de %s: %.2f\n", nome_pais2, densidade_populacional2);
            printf("2 - Densidade Demografica de %s: %.2f\n\n", nome_pais1, densidade_populacional1);
        }
        else
        {
            printf("\nEMPATE!\nAs duas cidades possuem a mesma densidade demográfica.\n%.2f\n\n", densidade_populacional1);
        }
        break;
    default:
        printf("Opção inválida\n");
        break;
    }
    return 0;
}