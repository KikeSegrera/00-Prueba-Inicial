//Prueba Inicial
#include <stdlib.h> //Standard library
#include <stdio.h> //Standard input / output

int main() {
    float args;
    float total;
    int i = 0;

    char newline;
    do{
        float temp; 
        args = scanf( "%f%c", &temp, &newline );
        if( args > 0 )
            total += temp;
    } while( newline != '\n' );

    printf("%f", total);

    return 0;
}
