#include <stdio.h>

void divisaoDeInteiros();
void divisaoDeFloats();
void conversaoImplicita();
void conversaoExplicita();

int main() {
    printf("--- Divisão de Inteiros ---\n");
    divisaoDeInteiros();
    printf("\n--- Divisão de Floats ---\n");
    divisaoDeFloats();
    printf("\n--- Conversão Implícita ---\n");
    conversaoImplicita();
    printf("\n--- Conversão Explícita (Casting) ---\n");
    conversaoExplicita();
    return 0;
}

void divisaoDeInteiros() {
    int a = 10, b = 3;
    int quociente = a / b;
    printf("10 / 3 (como inteiros) = %d\n", quociente);
}

void divisaoDeFloats() {
    float x = 5.5, y = 2.2;
    float quociente = x / y;
    printf("5.5 / 2.2 (como floats) = %.2f\n", quociente);
}

void conversaoImplicita() {
    int a = 10;
    float b = 3.5;
    float resultado = a + b;
    printf("10 (int) + 3.5 (float) = %.2f\n", resultado);
}

void conversaoExplicita() {
    int a = 10, b = 3;
    float quociente = (float)a / b;
    printf("(float)10 / 3 = %.2f\n", quociente);
}