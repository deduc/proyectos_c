#include <unistd.h>

void intercambiar(int *a, int *b);

int main()
{
    int *a;
    int *b;

    *a = '1';
    *b = '2';

    write(1, "a vale: ", 8);
    write(1, a, 1);
    write(1, "\n", 1);
    write(1, "b vale: ", 8);
    write(1, b, 1);
    write(1, "\n", 1);

    intercambiar(a, b);

    return 0;
}

void intercambiar(int *a, int *b)
{
    int temp;

    temp = *b;
    *b = *a;
    *a = temp;

    write(1, "intercambiando a con b\n", 23);

    write(1, "a vale: ", 8);
    write(1, a, 1);
    write(1, "\n", 1);
    write(1, "b vale: ", 8);
    write(1, b, 1);
    write(1, "\n", 1);
}