#include <stdio.h>

int main(){
    int huevos;
    float docena;
    
    
    printf("¿Cuántos huevos quieres?\n");
    scanf("%i", &huevos);

    /*  Casteo de int huevos a float huevos. 
        Para esta operación, huevos es de tipo float
    */
    docena = (float) huevos / 12;

    printf("Tienes %f docenas de huevos", docena);


    return 0;
}