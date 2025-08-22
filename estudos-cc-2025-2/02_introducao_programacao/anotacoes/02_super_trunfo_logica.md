# Tema 3: Super Trunfo em C - Desenvolvendo a Lógica do Jogo

Neste tema, o foco é dar "inteligência" ao nosso jogo, implementando a capacidade de tomar decisões. Aqui vamos aprender a comparar as cartas e determinar um vencedor, utilizando as estruturas de decisão da linguagem C.

## A Importância das Estruturas de Decisão

Como vi na aula, sem uma estrutura de decisão, um programa é como um trem em um trilho fixo: ele sempre segue o mesmo caminho, não importa o que aconteça. As estruturas de decisão, como o `if/else`, são o que permitem que o programa se torne dinâmico e reaja a diferentes situações.

É como estar em um cruzamento: eu preciso avaliar as condições (o sinal está verde? posso virar?) para decidir qual caminho seguir. Na programação, é a mesma coisa.

### Operadores Relacionais em Ação

Para tomar essas decisões, usamos os **operadores relacionais** que já vimos. Eles são a base de qualquer condição. Por exemplo:
-   `idade >= 16` (para saber se pode votar)
-   `nota >= 60` (para saber se passou)
-   `preco1 < preco2` (para saber qual é mais barato)

### Praticando a Lógica com Portugol

Para fixar o conceito antes de pular para o C, pratiquei com alguns exemplos em Portugol, que usa uma sintaxe mais simples e próxima da nossa língua:

```portugol
// Exemplo de verificação de nota
funcao inicio (){
  inteiro nota = 70

  se (nota >= 60)
    escreva("Você passou, parabens")
  senao
    escreva("Você não passou, estude mais")
  fimse 
}