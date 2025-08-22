# Registro de Exercícios - Introdução à Programação

## Lista 1 e 2 (Tema 2) - Fundamentos e Técnicas
- **Data de Realização:** 22/08/2025
- **Desempenho (Lista 1):** 5/10 (50%)
- **Desempenho (Lista 2):** 7/10 (70%)

### Análise dos Erros (Pontos-Chave de Aprendizado)

Esta primeira leva de exercícios foi desafiadora e expôs pontos cruciais da linguagem C que preciso reforçar.

#### **Questão 4: Operador de Módulo vs. Divisão**
- **Pergunta:** Qual operador obtém **apenas o resto** da divisão?
- **Meu Erro:** Marquei "Operador de divisão" (`/`).
- **Resposta Correta:** **Operador de módulo** (`%`).
- **Análise do Aprendizado:** Este é um conceito fundamental. A barra (`/`) em C, quando usada com inteiros, retorna o **quociente** (o resultado da divisão, sem a parte decimal). O sinal de porcentagem (`%`) é o operador de **módulo**, que retorna **apenas o resto**. É muito usado para verificar se um número é par (`numero % 2 == 0`). Conceito fixado.

#### **Questão 5: Operador Lógico "E" (AND)**
- **Pergunta:** Qual operador representa a conjunção "E" (verdadeiro apenas se **todas** as condições forem verdadeiras)?
- **Meu Erro:** Marquei `||` (OU).
- **Resposta Correta:** `&&` (E).
- **Análise do Aprendizado:** Confundi os operadores lógicos.
  - `&&` (E / AND): Precisa que **TODOS** os lados sejam verdadeiros.
  - `||` (OU / OR): Precisa que **PELO MENOS UM** dos lados seja verdadeiro.
  - `!` (NÃO / NOT): Inverte o resultado (verdadeiro vira falso e vice-versa).
Para a conjunção "E", o correto é `&&`.

#### **Questão 7: Reconhecimento de Padrão em Sequência**
- **Pergunta:** Identificar o próximo termo da sequência 3, 15, 35, 63, 99, ...
- **Meu Erro:** Tentei encontrar uma progressão aritmética simples.
- **Resposta Correta:** 143.
- **Análise do Aprendizado:** O padrão era mais complexo. A diferença entre os termos estava aumentando:
  - 15 - 3 = 12
  - 35 - 15 = 20
  - 63 - 35 = 28
  - 99 - 63 = 36
  A diferença entre essas diferenças é sempre 8 (20-12=8, 28-20=8, 36-28=8). Então, a próxima diferença seria 36 + 8 = 44. O próximo termo é 99 + 44 = **143**. É um exercício de lógica e reconhecimento de padrões, um dos pilares do pensamento computacional.

#### **Questão 10 (Lista 1): Tipos de Dados em C**
- **Análise:** Esta questão cobrou a identificação dos tipos de dados (`int`, `float`, `char`). O erro aqui foi provavelmente uma pequena confusão entre os tipos ou o que cada um armazena, um ponto que preciso revisar com mais atenção.

### Pontos-Chave dos Acertos
- **Tabela Verdade e Manipulação de Tipos (Q1):** Entendi a importância da tabela verdade para expressões lógicas.
- **Qualificador `const` (Q2):** Entendi que `const` cria variáveis cujo valor não pode ser alterado após a inicialização.
- **Operador Lógico `OR` (Q3):** Acertei a aplicação do `||` para situações onde apenas uma condição precisa ser verdadeira.
- **Precedência de Operadores (Q6):** Lembrei corretamente que multiplicação (`*`) e divisão (`/`) têm precedência sobre soma (`+`) e subtração (`-`).
- **`Enum` para Categorias (Q8):** Entendi que `enum` é ideal para criar um conjunto de constantes nomeadas, perfeito para categorizar itens.
- **Operador de Módulo `%` (Q9):** Apliquei corretamente o conceito de resto da divisão na prática.

### Meu Entendimento Pessoal
Esta primeira rodada de exercícios foi um choque de realidade, mas um muito necessário. Ficou claro que preciso dar mais atenção aos detalhes da sintaxe (como a diferença entre `/` e `%`, e entre `&&` e `||`). A questão da sequência numérica me lembrou que programação não é só sobre código, mas também sobre lógica e reconhecimento de padrões. Vou usar esses erros como um guia para focar minha revisão.