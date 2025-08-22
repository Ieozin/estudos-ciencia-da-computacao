#include <stdio.h>

int main()
{
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 1500;

    int temEstoqueA, temEstoqueB;

    printf("--- Inventário ---\n");
    printf("Produto %s: Estoque %u | Valor R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s: Estoque %u | Valor R$ %.2f\n", produtoB, estoqueB, valorB);

    temEstoqueA = estoqueA > estoqueMinimoA;
    temEstoqueB = estoqueB > estoqueMinimoB;

    printf("\n--- Verificação de Estoque Mínimo ---\n");
    printf("O produto %s está acima do estoque mínimo? (1=Sim, 0=Não): %d\n", produtoA, temEstoqueA);
    printf("O produto %s está acima do estoque mínimo? (1=Sim, 0=Não): %d\n", produtoB, temEstoqueB);

    printf("\n--- Comparação de Valor Total ---\n");
    double valorTotalA = estoqueA * valorA;
    double valorTotalB = estoqueB * valorB;
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)?: %d\n", valorTotalA, valorTotalB, valorTotalA > valorTotalB);

    return 0;
}