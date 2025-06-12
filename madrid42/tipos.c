#include <stdio.h>


void tiposDatos()
{
    char c = 'c';
    char texto[] = "HOLA mundo";
    int i = 1;
    float f = 1.123456;
    double d = 1.123456789012345;
    // puntero que apunta a null
    void *null_1 = NULL;
    void *null_2 = "\0";

    // char y 'strings'
    printf("char %c \n", c);
    printf("string %s \n", texto);

    // int
    printf("int %i \n", i);

    // float
    printf("float hasta 6 decimales %f \n", f);

    // double
    // %.Xf -> X indica el nº de decimales que quieres imprimir
    printf("double hasta 15 decimales %.15f \n", d);
}

int main()
{
    tiposDatos();

    return 0;
}
