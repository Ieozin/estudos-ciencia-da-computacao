# Tema 2: Super Trunfo em C - Fundamentos e Técnicas

Este é o primeiro projeto prático da disciplina, focado em construir um jogo de Super Trunfo com o tema "Países" utilizando a linguagem C. O objetivo é aplicar os conceitos fundamentais da programação de forma prática.

## A Missão Inicial: Cadastro de Cartas

O primeiro passo do projeto é criar um sistema para cadastrar as informações das cartas do jogo. Isso servirá como base para fixar os conceitos de variáveis, operadores e funções de entrada/saída. O projeto será um ótimo item de portfólio no GitHub.

## O Conceito-Chave: Solução Estruturada

Para se tornar um bom programador, é essencial criar soluções de forma estruturada. Programar é como seguir uma receita de bolo: o problema grande é dividido em passos menores e claros para garantir um resultado perfeito. Um código bem organizado facilita não só a minha vida, mas a de qualquer outra pessoa que precise ler ou dar manutenção no meu projeto.

### Boas Práticas para um Código Organizado

- **Indentação:** É fundamental para estruturar o código e visualizar a hierarquia dos blocos. A diferença de legibilidade entre um código com e sem indentação é gritante.
- **Comentários:** São essenciais para documentar a lógica. Em C, posso usar `//` para comentários de uma linha ou `/* ... */` para múltiplas linhas.
- **Nomes Significativos:** Usar nomes de variáveis e funções que descrevam seu propósito (ex: `somaNotas` em vez de `x`) torna o código muito mais fácil de entender.

## O Processo de Programação em C

Desenvolver um programa em C segue um processo bem definido, desde a ideia até a execução:

1.  **Escrita do Código-Fonte:** Criar um arquivo de texto com a extensão `.c` (ex: `ola_mundo.c`) e escrever as instruções.
2.  **Compilação:** Usar um programa compilador (como o GCC do MinGW) para traduzir o código-fonte `.c` em código de máquina, que é a linguagem de 0s e 1s que a CPU entende.
3.  **Ligação (Linking):** O compilador junta o nosso código de máquina com outras bibliotecas necessárias (como a `stdio.h` para `printf`).
4.  **Execução:** Rodar o arquivo executável final gerado pelo processo.

## Meu Primeiro Programa em C: O "Olá, Mundo!"

Como parte do ritual de todo programador, criei meu primeiro programa em C para garantir que o ambiente de desenvolvimento (VS Code + MinGW) está configurado corretamente.

**Código-fonte (`ola_mundo.c`):**
```c
#include <stdio.h>

int main () {
    printf("Olá, mundo!\n");
    return 0;
}```
Este código simples inclui a biblioteca de entrada/saída, define a função principal `main`, imprime a mensagem "Olá, mundo!" na tela e retorna 0, indicando que o programa terminou com sucesso.

---
*Anotações em andamento...*