#include <stdio.h>

void demonstrarUnsigned() {
    printf("--- Demonstração do Modificador 'unsigned' ---\n");
    int numeroSinal = 3000000000;
    unsigned int numeroSemSinal = 3000000000;
    printf("Numero com sinal (int): %d (overflow)\n", numeroSinal);
    printf("Numero sem sinal (unsigned int): %u\n", numeroSemSinal);
}

void demonstrarLong() {
    printf("\n--- Demonstração do Modificador 'long' ---\n");
    int numeroNormal = 2147483647;
    long int numeroGrande = 2147483647;
    printf("Numero regular (int): %d\n", numeroNormal);
    printf("Numero grande (long int): %ld\n", numeroGrande);
    numeroGrande = 2147483648;
    printf("Numero grande atualizado (long int): %ld\n", numeroGrande);
}

void demonstrarLongDouble() {
    printf("\n--- Demonstração do Modificador 'long double' ---\n");
    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.14159265358979323846;
    printf("Número preciso (double): %.15f\n", numeroPreciso);
    printf("Número muito preciso (long double): %.21Lf\n", numeroMuitoPreciso);
}

int main() {
    demonstrarUnsigned();
    demonstrarLong();
    demonstrarLongDouble();
    return 0;
}