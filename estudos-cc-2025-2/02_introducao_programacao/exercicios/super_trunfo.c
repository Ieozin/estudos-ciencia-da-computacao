#include <stdio.h>

int main()
{
    // --- Variáveis para as CARTAS ---
    char nome_pais1[50], estado1[3], codigo_carta1[4], nome_cidade1[50];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float area_km1, pib1, densidade_populacional1, pib_per_capita1;

    char nome_pais2[50], estado2[3], codigo_carta2[4], nome_cidade2[50];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area_km2, pib2, densidade_populacional2, pib_per_capita2;

    // --- Variáveis para a Batalha ---
    int escolha1, escolha2;
    int pontos_carta1 = 0;
    int pontos_carta2 = 0;

    printf("Bem vindo ao jogo Super-Trunfo, iremos cadastrar duas cartas!\n");

    //====================================================================
    // Cadastro da Carta 1
    //====================================================================
    printf("\n--- Cadastro da Carta 1 ---\n");
    printf("Digite o Pais da carta 1: ");
    scanf("%s", nome_pais1);
    printf("Digite o estado da carta 1 (ex: RJ): ");
    scanf("%s", estado1);
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
    printf("\n\n--- Escolha o PRIMEIRO atributo ---\n");
    printf("1. População | 2. Área | 3. PIB | 4. Pontos Turísticos | 5. Densidade (menor vence)\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    printf("\n--- Escolha o SEGUNDO atributo ---\n");
    printf("1. População | 2. Área | 3. PIB | 4. Pontos Turísticos | 5. Densidade (menor vence)\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2)
    {
        printf("\nVocê não pode escolher o mesmo atributo duas vezes! O programa será encerrado.\n");
        return 1; // Encerra o programa
    }

    //====================================================================
    // Lógica da Primeira Comparação
    //====================================================================
    switch (escolha1)
    {
    case 1:
        if (populacao1 > populacao2)
        {
            pontos_carta1++;
        }
        else if (populacao2 > populacao1)
        {
            pontos_carta2++;
        }
        break;
    case 2:
        if (area_km1 > area_km2)
        {
            pontos_carta1++;
        }
        else if (area_km2 > area_km1)
        {
            pontos_carta2++;
        }
        break;
    case 3:
        if (pib1 > pib2)
        {
            pontos_carta1++;
        }
        else if (pib2 > pib1)
        {
            pontos_carta2++;
        }
        break;
    case 4:
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            pontos_carta1++;
        }
        else if (pontos_turisticos2 > pontos_turisticos1)
        {
            pontos_carta2++;
        }
        break;
    case 5:
        if (densidade_populacional1 < densidade_populacional2)
        {
            pontos_carta1++;
        }
        else if (densidade_populacional2 < densidade_populacional1)
        {
            pontos_carta2++;
        }
        break;
    default:
        printf("Primeira escolha inválida!\n");
        break;
    }

    //====================================================================
    // Lógica da Segunda Comparação
    //====================================================================
    switch (escolha2)
    {
    case 1:
        if (populacao1 > populacao2)
        {
            pontos_carta1++;
        }
        else if (populacao2 > populacao1)
        {
            pontos_carta2++;
        }
        break;
    case 2:
        if (area_km1 > area_km2)
        {
            pontos_carta1++;
        }
        else if (area_km2 > area_km1)
        {
            pontos_carta2++;
        }
        break;
    case 3:
        if (pib1 > pib2)
        {
            pontos_carta1++;
        }
        else if (pib2 > pib1)
        {
            pontos_carta2++;
        }
        break;
    case 4:
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            pontos_carta1++;
        }
        else if (pontos_turisticos2 > pontos_turisticos1)
        {
            pontos_carta2++;
        }
        break;
    case 5:
        if (densidade_populacional1 < densidade_populacional2)
        {
            pontos_carta1++;
        }
        else if (densidade_populacional2 < densidade_populacional1)
        {
            pontos_carta2++;
        }
        break;
    default:
        printf("Segunda escolha inválida!\n");
        break;
    }

    //====================================================================
    // Exibição do Resultado Final
    //====================================================================
    printf("\n\n--- RESULTADO FINAL DA RODADA ---\n");
    printf("Placar Final: %s (%d) x (%d) %s\n", nome_pais1, pontos_carta1, pontos_carta2, nome_pais2);

    if (pontos_carta1 > pontos_carta2)
    {
        printf("VENCEDOR: Carta 1 (%s) venceu a rodada!\n", nome_pais1);
    }
    else if (pontos_carta2 > pontos_carta1)
    {
        printf("VENCEDOR: Carta 2 (%s) venceu a rodada!\n", nome_pais2);
    }
    else
    {
        printf("RESULTADO: A rodada terminou em EMPATE!\n");
    }

    return 0;
}