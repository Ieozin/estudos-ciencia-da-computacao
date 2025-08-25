#include <stdio.h>

int main()
{
    // --- Variáveis para a CARTA 01 ---
    char estado1[3];
    char codigo_carta1[4];
    char nome_cidade1[50];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float area_km1;
    float pib1;
    float densidade_populacional1;
    float pib_per_capita1;
    char nome_pais1[50];

    // --- Variáveis para a CARTA 02 ---
    char estado2[3];
    char codigo_carta2[4];
    char nome_cidade2[50];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area_km2;
    float pib2;
    float densidade_populacional2;
    float pib_per_capita2;
    char nome_pais2[50];

    int escolha;

    printf("Bem vindo ao jogo Super-Trunfo, iremos cadastrar duas cartas!\n");

    //====================================================================
    // Cadastro da Carta 1
    //====================================================================
    printf("\n--- Cadastro da Carta 1 ---\n");
    printf("Digite o Pais da carta 1: ");
    scanf("%s", nome_pais1);
    printf("Digite o estado da carta 1 (ex: RJ): ");
    scanf("%s", estado1);
    printf("Digite o código da carta 1 (ex: A01): ");
    scanf("%s", codigo_carta1);
    printf("Digite a cidade da carta 1: ");
    scanf("%s", nome_cidade1);
    printf("Digite a população da carta 1 (apenas números): ");
    scanf("%lu", &populacao1);
    printf("Digite a área em km² da carta 1 (use ponto para decimais): ");
    scanf("%f", &area_km1);
    printf("Digite o PIB (em bilhões, use ponto para decimais): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf("%d", &pontos_turisticos1);

    densidade_populacional1 = (float)populacao1 / area_km1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    //====================================================================
    // Cadastro da Carta 2
    //====================================================================
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o Pais da carta 2: ");
    scanf("%s", nome_pais2);
    printf("Digite o estado da carta 2 (ex: SP): ");
    scanf("%s", estado2);
    printf("Digite o código da carta 2 (ex: B02): ");
    scanf("%s", codigo_carta2);
    printf("Digite a cidade da carta 2: ");
    scanf("%s", nome_cidade2);
    printf("Digite a população da carta 2 (apenas números): ");
    scanf("%lu", &populacao2);
    printf("Digite a área em km² da carta 2 (use ponto para decimais): ");
    scanf("%f", &area_km2);
    printf("Digite o PIB (em bilhões, use ponto para decimais): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional2 = (float)populacao2 / area_km2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    //====================================================================
    // Menu de Comparação
    //====================================================================
    printf("\n\n--- Escolha um atributo para comparar ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica (menor vence)\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    //====================================================================
    // Lógica de Comparação com Switch
    //====================================================================
    switch (escolha)
    {
    case 1:
        printf("\n--- Comparando: População ---\n");
        printf("Carta 1 - %s (%s): %lu\n", nome_cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu\n", nome_cidade2, estado2, populacao2);
        if (populacao1 > populacao2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_pais1);
        }
        else if (populacao2 > populacao1)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_pais2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;
    case 2:
        printf("\n--- Comparando: Área ---\n");
        printf("Carta 1 - %s: %.2f km²\n", nome_pais1, area_km1);
        printf("Carta 2 - %s: %.2f km²\n", nome_pais2, area_km2);
        if (area_km1 > area_km2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_pais1);
        }
        else if (area_km2 > area_km1)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_pais2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;
    case 3:
        printf("\n--- Comparando: PIB ---\n");
        printf("Carta 1 - %s: %.2f bilhões\n", nome_pais1, pib1);
        printf("Carta 2 - %s: %.2f bilhões\n", nome_pais2, pib2);
        if (pib1 > pib2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_pais1);
        }
        else if (pib2 > pib1)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_pais2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;
    case 4:
        printf("\n--- Comparando: Pontos Turísticos ---\n");
        printf("Carta 1 - %s: %d\n", nome_pais1, pontos_turisticos1);
        printf("Carta 2 - %s: %d\n", nome_pais2, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_pais1);
        }
        else if (pontos_turisticos2 > pontos_turisticos1)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_pais2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;
    case 5:
        printf("\n--- Comparando: Densidade Demográfica ---\n");
        printf("Carta 1 - %s: %.2f hab/km²\n", nome_pais1, densidade_populacional1);
        printf("Carta 2 - %s: %.2f hab/km²\n", nome_pais2, densidade_populacional2);
        if (densidade_populacional1 < densidade_populacional2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_pais1);
        }
        else if (densidade_populacional2 < densidade_populacional1)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_pais2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}