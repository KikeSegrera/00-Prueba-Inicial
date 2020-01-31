//Prueba Inicial
#include <stdlib.h> //Standard library
#include <stdio.h> //Standard input / output

int main() {
    float a = 0;
    float b = 0;

    scanf("%f%*c", &a);
    scanf("%f%*c", &b);

    float result = a + b;

    printf("%f", result);

    return 0;
}
