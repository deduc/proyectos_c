#include <unistd.h>

int main() {
    // declarar puntero
    char *text;

    // asignar valor al puntero
    text = "Hello World!";

    write(1, text, 12);
    return 0;
}