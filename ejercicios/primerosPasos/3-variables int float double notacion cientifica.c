#include <stdio.h>
#include <string.h>

int main(){
    // declaro X y luego le asigno el valor
    int x;
    int y;
    
    x = 5;
    y = 12412;

    printf("Los numeros ENTEROS que voy a imprimir son x, y. Sus valores son los siguientes: \n");
    printf("    int x = %i \n", x);
    printf("    int y = %i \n", y);
    

    int numEntero = 5;
    float numDecimal = 5.0;
    int numDivisor = 2;

    printf("\nNo es lo mismo dividir %i (entero) entre 2\nque dividir %lf (decimal) entre 2\n", numEntero, numDecimal);
    printf("    %i / %i = %i\n", numEntero, numDivisor, numEntero/numDivisor);
    printf("    %lf / %i = %lf\n\n", numDecimal, numDivisor, numDecimal/numDivisor);


    int numeroNotacionCientifica = 2.5e4;  // 25000
    double numero2NotacionCientifica = 2.005e3;  // 2005

    printf("Número int en notación científica: \n    %i\n", numeroNotacionCientifica);
    printf("Número float (convertido en double porque sí) en notación científica: \n    %f\n\n", numero2NotacionCientifica);


    double valorPrueba = 4.005e4;

    printf("%f\n%e\n%g\n", valorPrueba, valorPrueba, valorPrueba);


    char cadena[128] = "hola tio que tal";
    int longitudCadena;


    printf("'");
    for (int i = 0; i < strlen(cadena); i++){
        printf("%c", cadena[i]);
    }
    printf("'");

    longitudCadena = strlen(cadena);

    printf(" es una cadena con %i caracteres de longitud, contando espacios.\n", longitudCadena);
    

    
    return 0;
}
