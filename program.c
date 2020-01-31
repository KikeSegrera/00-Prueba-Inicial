//Prueba Inicial
#include <stdlib.h> //Standard library
#include <stdio.h> //Standard input / output

int main() {
    int args;
    float total;
    float temp;

    do{
        args = scanf("%f", &temp);
        if(args > 0)
            total += temp;
    } while(args != -1);

    printf("%g", total);

    return 0;
}
