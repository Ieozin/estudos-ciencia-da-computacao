#include <stdio.h>

int main()
{
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão(/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o número 1:");
    scanf("%d", &numero1);
    printf("Entre com o número 2:");
    scanf("%d", &numero2);

    // Operação Soma
    soma = numero1 + numero2;

    // Operação Subtração
    subtracao = numero1 - numero2;

    // Operação Multiplicação
    multiplicacao = numero1 * numero2;

    // Operação divisão
    divisao = numero1 / numero2;

    printf("A Soma é: %d\n", soma);
    printf("A Subtração é: %d\n", subtracao);
    printf("A Multiplicação é: %d\n", multiplicacao);
    printf("A Divisão é: %d: \n", divisao);
}

int main()
{
    /*
    Atribuição Simples (=)
    Atribuição com Soma (+=)
    Atribuição com Subtração (-=)
    Atribuição com Multiplicação (*=)
    Atribuição com Divisão (/=)
    */

    int numero1, numero2, resultado;
    numero1 = 10;
    resultado = 10;

    printf("Resultado: %d\n", resultado);

    // Resultado = resultado + 20;
    resultado += 20;
    printf("Resultado: %d\n", resultado);

    // Resultado = resultado - numero1;
    resultado -= numero1;
    printf("Resultado: %d\n", resultado);

    // Resultado = resultado * 5;
    resultado *= 5;
    printf("Resultado: %d\n", resultado);

    // Resultado = resultado /2;
    resultado /= 2;
    printf("Resultado: %d\n", resultado);
}

int main()
{
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremetno a--
    */

    int numero1 = 1, resultado;

    printf("Antes incremento %d\n", numero1);
    // numero1 = numero1 + 1;
    // numero1 += 1;
    resultado = numero1++;
    // printf("Após incremento %d\n", numero1);
    printf("Após pós incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    // numero1 = numero1 - 1;
    // numero1 -= 1;
    numero1--;
    printf("Após decremento %d\n", numero1);

    // Pos incremento:
    // resultado = numero1;
    // numero++;

    resultado = ++numero1;
    printf("Após pré incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = numero1--;
    printf("Após pros decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Após pré decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);
}