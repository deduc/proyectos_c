#include <stdio.h>


int obtenerParteEntera(float numero){
    int numeroRetorno;

    numeroRetorno = (int) numero;

    return numeroRetorno;
}


int main(){
    float numFloat;
    int numInt;
    double numDouble;
    char cadenaTexto[5];
    int arrayNumeros[10];

    numFloat = 4.27;
    numInt = obtenerParteEntera(numFloat);
    numDouble = 4444444;

    printf("El numero float %f convertido a entero es %i \n", numFloat ,numInt);
    printf("El numero double es %lf \n", numDouble);

    printf("Dime una cadena de texto: ");
    scanf("%s", cadenaTexto);
    printf("%s\n", cadenaTexto);

    for(int x=0;  x<10; x++){
        arrayNumeros[x] = x;
    }

    for(int y=0; y<10; y++){
        if(y < 9){
            printf("%i - ", arrayNumeros[y]);
        }
        else{
            printf("%i\n", arrayNumeros[y]);
        }
    }


    return 0;
}