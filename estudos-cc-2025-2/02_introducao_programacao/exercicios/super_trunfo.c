#include <stdio.h>

int main()
{
    // --- Variáveis para a CARTA 01 ---
    char estado1[3];
    char codigo_carta1[4];
    char nome_cidade1[50];
    int populacao1;
    int pontos_turisticos1;
    float area_km1;
    float pib1;

    // --- Variáveis para a CARTA 02 ---
    char estado2[3];
    char codigo_carta2[4];
    char nome_cidade2[50];
    int populacao2;
    int pontos_turisticos2;
    float area_km2;
    float pib2;

    printf("Bem vindo ao jogo Super-Trunfo, iremos cadastrar duas cartas!\n");

    //====================================================================
    // Cadastro da Carta 1
    //====================================================================
    printf("\n--- Cadastro da Carta 1 ---\n");

    printf("Digite o estado da carta 1 (duas letras, ex: RJ): ");
    scanf("%s", estado1);

    printf("Digite o código da carta 1 (ex: A01): ");
    scanf("%s", codigo_carta1);

    printf("Digite a cidade da carta 1: ");
    scanf("%s", nome_cidade1);

    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km² da carta 1: ");
    scanf("%f", &area_km1);

    printf("Digite o PIB (em bilhões) da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf("%d", &pontos_turisticos1);

    //====================================================================
    // Cadastro da Carta 2
    //====================================================================
    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Digite o estado da carta 2 (duas letras, ex: SP): ");
    scanf("%s", estado2);

    printf("Digite o código da carta 2 (ex: B02): ");
    scanf("%s", codigo_carta2);

    printf("Digite a cidade da carta 2: ");
    scanf("%s", nome_cidade2);

    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km² da carta 2: ");
    scanf("%f", &area_km2);

    printf("Digite o PIB (em bilhões) da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);

    //====================================================================
    // Exibição dos Resultados
    //====================================================================
    printf("\n\n--- Cartas Cadastradas ---\n");

    // Exibição da Carta 01
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area_km1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Exibição da Carta 02
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area_km2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}