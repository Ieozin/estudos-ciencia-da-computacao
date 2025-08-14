#include <stdio.h>

int main() {
    // Declarando e inicializando algumas variáveis
    int idade_inicial = 23;
    char nome_inicial[20] = "Leonardo";
    float altura_inicial = 1.65;

    // Exibindo os valores iniciais com printf
    printf("--- Valores Iniciais ---\n");
    printf("A idade do %s é: %d\n", nome_inicial, idade_inicial);
    printf("A altura é: %.2f\n\n", altura_inicial); // %.2f para formatar com 2 casas decimais

    // Declarando variáveis para receber dados do usuário
    int idade_usuario;
    char nome_usuario[50];
    float altura_usuario;

    // Interagindo com o usuário usando scanf
    printf("--- Entrada de Dados ---\n");
    printf("Digite o seu nome: ");
    scanf("%s", nome_usuario); // Para strings, não precisa do &

    printf("Digite a sua idade: ");
    scanf("%d", &idade_usuario);

    printf("Digite a sua altura: ");
    scanf("%f", &altura_usuario);

    // Exibindo os dados lidos do usuário
    printf("\n--- Dados Informados ---\n");
    printf("O nome digitado foi: %s\n", nome_usuario);
    printf("A idade informada é: %d\n", idade_usuario);
    printf("A altura informada é: %.2f\n", altura_usuario);

    return 0;
}