# Tema 2: Super Trunfo em C - Fundamentos e Técnicas

Este é o primeiro projeto prático da disciplina, focado em construir um jogo de Super Trunfo com o tema "Países" utilizando a linguagem C. O objetivo é aplicar os conceitos fundamentais da programação de forma prática.

## Nível Novato: A Base da Programação

### 1. A Missão Inicial: Cadastro de Cartas
O primeiro passo do projeto é criar um sistema para cadastrar as informações das cartas do jogo. Isso servirá como base para fixar os conceitos de variáveis, operadores e funções de entrada/saída.

### 2. O Conceito-Chave: Solução Estruturada
Programar é como seguir uma receita de bolo: o problema grande é dividido em passos menores e claros para garantir um resultado perfeito. Um código bem organizado facilita não só a minha vida, mas a de qualquer outra pessoa que precise ler ou dar manutenção no meu projeto.

**Boas Práticas de Código:**
-   **Indentação:** Fundamental para a hierarquia e legibilidade.
-   **Comentários:** Essenciais para documentar a lógica (`//` ou `/*...*/`).
-   **Nomes Significativos:** Usar nomes de variáveis que descrevam seu propósito (`somaNotas` em vez de `x`).

### 3. Variáveis e Tipos de Dados em C
Variáveis são "caixas" na memória para guardar informações. Os tipos básicos que vimos até agora são:
-   **`int`**: Para números inteiros.
-   **`float` / `double`**: Para números com casas decimais.
-   **`char`**: Para um único caractere (`'A'`).
-   **`char[]`**: Para textos/strings (`"Leonardo"`).

### 4. Interagindo com o Usuário: `printf` e `scanf`
Para o programa se comunicar, usamos:
-   **`printf`**: Para **imprimir** informações na tela.
-   **`scanf`**: Para **ler** o que o usuário digita.

> #### **Minha Colinha de `printf` e `scanf`**
>
> Senti um pouco de dificuldade em lembrar os especificadores de formato. Deixando aqui para consulta rápida:
> - `%d` ou `%i`: para **inteiro** (`int`).
> - `%f`: para **ponto flutuante** (`float` ou `double`).
> - `%c`: para **caractere** (`char`).
> - `%s`: para **string** (`char[]`).
> - `%lu`: para **unsigned long int**.
> - **Lembrete:** `scanf` precisa do `&` (ex: `&idade`), exceto para strings.

---

## Nível Aventureiro: Planejamento e Operações

### 1. Ferramentas de Planejamento
Antes de codificar, é crucial planejar a lógica.
-   **Pseudocódigo:** Escrever o algoritmo em português estruturado.
-   **Fluxograma:** Desenhar o fluxo do algoritmo.

### 2. Modularidade e Abstração
-   **Modularidade:** Dividir o problema em partes menores (futuramente, funções).
-   **Abstração:** Focar nos aspectos mais importantes e ignorar detalhes irrelevantes.

### 3. Operadores Matemáticos em C
São as ferramentas para realizar cálculos.
-   **Aritméticos:** `+`, `-`, `*`, `/`.
-   **Atribuição:** `=`, `+=`, `-=`, `*=`, `/=`.
-   **Incremento/Decremento:** `++`, `--`.
    -   **Pós-incremento (`variavel++`):** Primeiro usa o valor, depois incrementa. *Essa foi a parte que tive mais dificuldade, preciso praticar mais.*

### 4. Conversão de Tipos de Dados (Casting)
-   **Implícita:** O compilador converte automaticamente.
-   **Explícita:** Nós forçamos a conversão usando `(tipo)variavel`, como em `(float)populacao / area;` para garantir uma divisão decimal.

---

## Nível Mestre: Refinando o Código

### 1. Modificadores de Tipo de Dados
Permitem alterar as propriedades dos tipos de dados.
-   **`unsigned`**: Para variáveis que só podem ter valores positivos. Dobra a capacidade para números positivos.
-   **`long`**: Aumenta a capacidade de armazenamento de um tipo.

### 2. Operadores Relacionais
Serão usados para comparar valores e tomar decisões no futuro.
-   `==` (igual a), `!=` (diferente de), `>` (maior que), `<` (menor que), `>=` (maior ou igual a), `<=` (menor ou igual a).

---
*Anotações em andamento...*