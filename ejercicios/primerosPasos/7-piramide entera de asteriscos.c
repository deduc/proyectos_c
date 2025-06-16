#include <stdio.h>

int main(){
    int filasPiramide;
    int columnasPiramide;
    char caracterAPintar;
    char caracterSeparador;
    char filaAPintar;

    printf("Escribe las filas de la piramide\n");
    scanf("%i", &filasPiramide);
    columnasPiramide = (filasPiramide * 2) - 1;
    
    printf("Filas: %i \nColumnas: %i\n", filasPiramide, columnasPiramide);
    printf("\n");





    return 0;
}