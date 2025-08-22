#include <stdio.h>

void comparacaoSimples() {
    printf("--- Comparação Simples ---\n");
    int a = 10, b = 20;
    printf("a = 10, b = 20\n");
    printf("a > b: %d\n", a > b);   // 0 (Falso)
    printf("a < b: %d\n", a < b);   // 1 (Verdadeiro)
    printf("a == b: %d\n", a == b); // 0 (Falso)
    printf("a != b: %d\n", a != b); // 1 (Verdadeiro)
}

void comparacaoTiposDiferentes() {
    printf("\n--- Comparação com Tipos Diferentes ---\n");
    int x = 5;
    float y = 5.0;
    char c = 'A'; // ASCII de 'A' é 65
    printf("x = 5, y = 5.0, c = 'A' (ASCII %d)\n", c);
    printf("x == y: %d\n", x == y); // 1 (Verdadeiro, conversão implícita)
    printf("x >= c: %d\n", x >= c); // 0 (Falso, 5 não é >= 65)
}

void comparacaoComCasting() {
    printf("\n--- Comparação com Casting Explícito ---\n");
    int numero1 = 10;
    float numero2 = 10.0;
    printf("numero1 = 10, numero2 = 10.0\n");
    printf("Comparando (int)numero1 == numero2: %d\n", (int)numero1 == (int)numero2);
}

int main() {
    comparacaoSimples();
    comparacaoTiposDiferentes();
    comparacaoComCasting();
    return 0;
}