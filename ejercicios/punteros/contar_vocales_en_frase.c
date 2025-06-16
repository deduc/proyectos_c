#include <unistd.h>
#include <stdio.h>

void int_to_str(int i, char* letter_pointer);
int string_length(char *str);

int main() {
    char* frase = "aaaaa eeeeeeeeee iii o";
    // declarar punteros dinamicos y accesibles desde otros scopes del codigo
    char str_vocal_a[12];
    char str_vocal_e[12];
    char str_vocal_i[12];
    char str_vocal_o[12];
    char str_vocal_u[12];

    int n_vocal_a = 0;
    int n_vocal_e = 0;
    int n_vocal_i = 0;
    int n_vocal_o = 0;
    int n_vocal_u = 0;

    // contar ºn de apariciones de letras.
    while (*frase != '\0') {
        if (*frase == 'a') n_vocal_a++;
        if (*frase == 'e') n_vocal_e++;
        if (*frase == 'i') n_vocal_i++;
        if (*frase == 'o') n_vocal_o++;
        if (*frase == 'u') n_vocal_u++;
        frase++;
    }

    // modificar los punteros de cada letra
    int_to_str(n_vocal_a, str_vocal_a);
    int_to_str(n_vocal_e, str_vocal_e);
    int_to_str(n_vocal_i, str_vocal_i);
    int_to_str(n_vocal_o, str_vocal_o);
    int_to_str(n_vocal_u, str_vocal_u);

    // * mostrar por consola las vocales y su numero de apariciones
    write(1, "a = ", 4);
    write(1, str_vocal_a, string_length(str_vocal_a));
    write(1, "\n", 1);

    write(1, "e = ", 4);
    write(1, str_vocal_e, string_length(str_vocal_e));
    write(1, "\n", 1);

    write(1, "i = ", 4);
    write(1, str_vocal_i, string_length(str_vocal_i));
    write(1, "\n", 1);

    write(1, "o = ", 4);
    write(1, str_vocal_o, string_length(str_vocal_o));
    write(1, "\n", 1);

    write(1, "u = ", 4);
    write(1, str_vocal_u, string_length(str_vocal_u));
    write(1, "\n", 1);

    return 0;
}

void int_to_str(int i, char* letter_pointer) {
    // puntero temporal para almacenar el numero invertido
    char temp[12];
    int index = 0;
    int index_aux = 0;

    if (i == 0) {
        letter_pointer[0] = '0';
        letter_pointer[1] = '\0';
        return;
    }

    // Construir número invertido
    while (i > 0) {
        temp[index++] = (i % 10) + '0';
        i = i / 10;
    }

    // restar 1 a index para obtener la ultima posicion del array
    index--;
    index_aux = 0;
    // Des-invertir el numero para dejarlo en orden correcto
    while (index >= 0) {
        letter_pointer[index_aux] = temp[index];
        index_aux++;
        index--;
    }
    // añadir null a la cadena
    letter_pointer[index] = '\0';
}

int string_length(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}