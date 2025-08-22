# Tema 2: Super Trunfo em C - Fundamentos e Técnicas

Este é o primeiro projeto prático da disciplina, focado em construir um jogo de Super Trunfo com o tema "Países" utilizando a linguagem C. O objetivo é aplicar os conceitos fundamentais da programação de forma prática.

## Nível Novato: A Base da Programação

### 1. A Missão Inicial: Cadastro de Cartas
O primeiro passo do projeto é criar um sistema para cadastrar as informações das cartas do jogo. Isso serve como base para fixar os conceitos de variáveis, operadores e funções de entrada/saída.

### 2. O Conceito-Chave: Solução Estruturada
Programar é como seguir uma receita de bolo: o problema grande é dividido em passos menores e claros para garantir um resultado perfeito. Um código bem organizado facilita não só a minha vida, mas a de qualquer outra pessoa que precise ler ou dar manutenção no meu projeto.

**Boas Práticas para um Código Organizado:**
-   **Indentação:** Fundamental para a hierarquia e legibilidade do código.
-   **Comentários:** Essenciais para documentar a lógica (`//` para uma linha, `/* ... */` para múltiplas).
-   **Nomes Significativos:** Usar nomes de variáveis que descrevam seu propósito (`somaNotas` em vez de `x`).

### 3. Variáveis e Tipos de Dados em C
Variáveis são "caixas" na memória para guardar informações. Os tipos básicos que vimos são:
-   **`int`**: Para números inteiros.
-   **`float` / `double`**: Para números com casas decimais (`double` tem mais precisão).
-   **`char`**: Para um único caractere (entre aspas simples: `'A'`).
-   **`char[]`**: Para textos/strings (entre aspas duplas: `"Leonardo"`).

### 4. Interagindo com o Usuário: `printf` e `scanf`
Para o programa se comunicar, usamos:
-   **`printf`**: Para **imprimir** informações na tela.
-   **`scanf`**: Para **ler** o que o usuário digita.

> #### **Minha Colinha de `printf` e `scanf`**
>
> Senti um pouco de dificuldade em lembrar os especificadores de formato. Deixando aqui para consulta rápida:
>
> -   `%d` ou `%i`: para ler/escrever um **inteiro** (`int`).
> -   `%f`: para ler/escrever um **ponto flutuante** (`float` ou `double`).
> -   `%c`: para ler/escrever um **caractere** (`char`).
> -   `%s`: para ler/escrever uma **string** (`char[]`).
> -   **Lembrete:** `scanf` precisa do `&` antes da variável (ex: `&idade`), exceto para strings. Para ler um `char` depois de um número, usar `scanf(" %c", &letra)` (com espaço) para limpar o buffer.

---

## Nível Aventureiro: Planejamento e Operações

### 1. Ferramentas de Planejamento
Antes de codificar, é crucial planejar a lógica.
-   **Pseudocódigo:** Escrever o algoritmo em uma linguagem natural e estruturada (como português), sem se preocupar com a sintaxe da programação. Ajuda a focar na lógica.
-   **Fluxograma:** Uma representação gráfica do algoritmo, usando símbolos padronizados para cada passo (processo, decisão, entrada/saída).

### 2. Modularidade e Abstração
-   **Modularidade:** Dividir o problema em partes menores, criando "módulos" ou funções com responsabilidades únicas.
-   **Abstração:** Focar nos aspectos mais importantes e ignorar detalhes irrelevantes para criar soluções mais genéricas.

### 3. Operadores Matemáticos em C
São as ferramentas para realizar cálculos.
-   **Aritméticos:** `+` (soma), `-` (subtração), `*` (multiplicação), `/` (divisão).
-   **Atribuição:** `=` (simples), `+=`, `-=`, `*=`, `/=` (compostas, para modificar uma variável baseada nela mesma, ex: `resultado += 10;`).
-   **Incremento/Decremento:** `++` (aumenta em 1), `--` (diminui em 1).
    -   **Pré-incremento (`++variavel`):** Primeiro incrementa, depois usa o valor.
    -   **Pós-incremento (`variavel++`):** Primeiro usa o valor, depois incrementa. *Essa foi a parte que tive mais dificuldade, preciso praticar mais.*

### 4. Conversão de Tipos de Dados (Casting)
-   **Implícita:** O compilador converte automaticamente (ex: somar um `int` com um `float`, o `int` vira `float` para a conta).
-   **Explícita:** Nós forçamos a conversão usando `(tipo)variavel`. Essencial para operações como a divisão de dois inteiros onde queremos um resultado decimal: `float resultado = (float)10 / 3;`.

---

## Nível Mestre: Refinando o Código

Nesta fase, o foco é em ferramentas da linguagem C que dão mais controle e precisão, essenciais para a lógica de comparação do jogo.

### 1. Modificadores de Tipo de Dados
Permitem alterar as propriedades dos tipos de dados primitivos.

-   **`unsigned`**: Usado para variáveis que **só podem ter valores positivos** (ou zero). A vantagem é que ele dobra a capacidade de armazenamento para números positivos. Um `int` normal vai de ~ -2 bilhões a +2 bilhões, enquanto um `unsigned int` vai de 0 a ~ +4 bilhões. É perfeito para dados como população ou pontuação.
-   **`long`**: Usado para **aumentar a capacidade de um tipo de dado**. Um `long int` ou `long double` pode armazenar números muito maiores ou com mais precisão. Essencial para cálculos científicos ou financeiros.

### 2. Operadores Relacionais
São o coração da lógica de comparação em qualquer programa. Eles sempre retornam **1 (verdadeiro)** ou **0 (falso)**.

> #### **Minha Colinha de Operadores Relacionais**
>
> -   `a > b`  (Maior que)
> -   `a < b`  (Menor que)
> -   `a >= b` (Maior ou igual a)
> -   `a <= b` (Menor ou igual a)
> -   `a == b` (**Exatamente igual a**. Atenção: `==` é para comparar, `=` é para atribuir valor.)
> -   `a != b` (Diferente de)

Esses operadores são fundamentais para criar estruturas de controle como `if` e `else`, que serão a base da lógica de comparação do Super Trunfo.

---
*Anotações em andamento...*