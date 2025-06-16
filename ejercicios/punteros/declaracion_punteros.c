#include <unistd.h>

/*
Declara variables de tipo int, float y char.
Luego, crea punteros para cada una de esas variables
y asígnales la dirección correspondiente.
Finalmente, imprime los valores usando los punteros.
*/

int str_len(char *s) {
    int i;

    i = 0;
    while (s[i] != '\0') i++;
    return i;
}

void int_to_str(int n, char *buf) {
    int i;
    int j;
    char temp[12];

    i = 0;

    if (n == 0) {
        buf[0] = '0';
        buf[1] = '\0';
        return;
    }

    while (n > 0) {
        temp[i] = (n % 10) + '0';
        i++;
        n /= 10;
    }

    j = 0;
    while (j < i) {
        buf[j] = temp[i - j - 1];
        j++;
    }

    buf[i] = '\0';
}

void float_to_str(float f, char *buf) {
    int entero;
    int dec;
    int len;

    entero = (int)f;
    dec = (int)((f - entero) * 100);

    int_to_str(entero, buf);
    len = str_len(buf);
    buf[len] = '.';
    buf[len + 1] = (dec / 10) + '0';
    buf[len + 2] = (dec % 10) + '0';
    buf[len + 3] = '\0';
}

/*
┌────────────┐
│   int i    │   = 42
│ dirección: │ → 0x100
└────────────┘

┌──────────────────────┐
│ int* i_ptr = &i      │
│ valor: 0x100         │ → apunta a i
│ dirección: 0x200     │
└──────────────────────┘

&i_ptr = 0x200
i_ptr   = 0x100
*i_ptr  = 42

---

Expresión    | Qué es                         | Tipo       | Ejemplo (ficticio)
-------------|--------------------------------|------------|---------------------
i_ptr        | Dirección de `i`               | int*       | 0x7ffc1234
*i_ptr       | Valor de `i`                   | int        | 42
&i_ptr       | Dirección de `i_ptr`           | int**      | 0x7ffc5678
*/
int main() {
    int i;
    float f;
    char c;

    // ** los punteros almacenan direcciones de memoria
    /*
        i_ptr == puntero
        Contiene solo direcciones de memoria

        *i_ptr == valor al que apunta i_ptr

        &i_ptr == direccion de memoria del propio puntero
        no almacena valores
    */

    int *i_ptr;
    float *f_ptr;
    char *c_ptr;

    // el nº '1' == 49 en ascii
    i = '1';
    // importante la f al final
    f = 2.0f;
    c = 'a';

    // * & == operador de direccion de memoria
    // asignar al puntero la direccion de memoria de i
    i_ptr = &i;
    f_ptr = &f;
    c_ptr = &c;

    char buf[20];

    int_to_str(*i_ptr, buf);
    write(1, buf, str_len(buf));
    write(1, "\n", 1);

    float_to_str(*f_ptr, buf);
    write(1, buf, str_len(buf));
    write(1, "\n", 1);

    write(1, c_ptr, 1);
    write(1, "\n", 1);

    return 0;
}
