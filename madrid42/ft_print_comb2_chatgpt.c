#include <unistd.h>

int main(void) {
    int i, j;
    char buffer[5];

    for (i = 0; i <= 98; i++) {
        for (j = i + 1; j <= 99; j++) {
            // Primer número
            buffer[0] = i / 10 + '0';
            buffer[1] = i % 10 + '0';
            buffer[2] = ' ';
            // Segundo número
            buffer[3] = j / 10 + '0';
            buffer[4] = j % 10 + '0';

            // Escribir la combinación
            write(1, buffer, 5);

            // Si no es la última, añade ", "
            if (!(i == 98 && j == 99))
                write(1, ", ", 2);
        }
    }
}
