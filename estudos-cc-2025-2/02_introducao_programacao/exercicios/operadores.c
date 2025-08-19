#include <stdio.h>

// Protótipos das funções para o código ficar mais organizado
void demonstrarAritmeticos();
void demonstrarAtribuicao();
void demonstrarIncrementoDecremento();

int main()
{
    printf("--- Demonstração de Operadores Aritméticos ---\n");
    demonstrarAritmeticos();

    printf("\n--- Demonstração de Operadores de Atribuição ---\n");
    demonstrarAtribuicao();

    printf("\n--- Demonstração de Operadores de Incremento e Decremento ---\n");
    demonstrarIncrementoDecremento();

    return 0;
}

void demonstrarAritmeticos() {
    int numero1 = 20;
    int numero2 = 5;
    printf("Números: %d e %d\n", numero1, numero2);
    printf("Soma: %d\n", numero1 + numero2);
    printf("Subtração: %d\n", numero1 - numero2);
    printf("Multiplicação: %d\n", numero1 * numero2);
    printf("Divisão: %d\n", numero1 / numero2);
}

void demonstrarAtribuicao() {
    int resultado = 10;
    printf("Valor inicial: %d\n", resultado);
    resultado += 20; // resultado = 10 + 20 = 30
    printf("Após += 20: %d\n", resultado);
    resultado -= 10; // resultado = 30 - 10 = 20
    printf("Após -= 10: %d\n", resultado);
    resultado *= 5;  // resultado = 20 * 5 = 100
    printf("Após *= 5: %d\n", resultado);
    resultado /= 2;  // resultado = 100 / 2 = 50
    printf("Após /= 2: %d\n", resultado);
}

void demonstrarIncrementoDecremento() {
    int numero = 5;
    int resultado;

    printf("Valor inicial de numero: %d\n", numero);

    // Pós-incremento: usa o valor (5), depois incrementa (numero vira 6)
    resultado = numero++;
    printf("Pós-incremento (resultado = numero++): resultado = %d, numero = %d\n", resultado, numero);

    // Pré-incremento: primeiro incrementa (numero vira 7), depois usa o valor
    resultado = ++numero;
    printf("Pré-incremento (resultado = ++numero): resultado = %d, numero = %d\n", resultado, numero);
    
    // Pós-decremento: usa o valor (7), depois decrementa (numero vira 6)
    resultado = numero--;
     printf("Pós-decremento (resultado = numero--): resultado = %d, numero = %d\n", resultado, numero);

    // Pré-decremento: primeiro decrementa (numero vira 5), depois usa o valor
    resultado = --numero;
    printf("Pré-decremento (resultado = --numero): resultado = %d, numero = %d\n", resultado, numero);
}