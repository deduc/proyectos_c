#include <stdio.h>

int main(){
    /*  Declaro la variable radioCirculo.
        Hago scanf para preguntar al usuario
    */
    int radioCirculo;
    float areaCirculo;

    printf("Escribe el radio de un círculo (int)\n");
    scanf("%i", &radioCirculo);

    areaCirculo = 3.14 * (radioCirculo * radioCirculo);

    printf("El radio del círculo es %i unidades\n", radioCirculo);
    printf("El diámetro del círculo es %i unidades\n", radioCirculo * 2);
    printf("El area del circulo de radio %i unidades es %f unidades\n", radioCirculo, areaCirculo);

    return 0;
}