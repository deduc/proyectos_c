#include <unistd.h>
#include <stdio.h>

void contar_letras_en_array();
void contar_letras_en_string();

int main()
{
    contar_letras_en_array();
    contar_letras_en_string();

    return 0;
}

int contar_n_caracteres(char *frase)
{
    int n_letras;
    n_letras = 0;

    while (*frase != '\0')
    {
        n_letras++;
        frase++;
    }

    return n_letras;
}

char* get_number_of_characters_from_int_to_char_ptr(int n_letras)
{
    // ! Se usa static para que la variable y su contenido en memoria no desaparezcan despues de la ejecucion de la funcion.
    // ! El contenido de la variable será accesible durante la ejecucion de TODO el programa.
    static char str[12];
    char str_aux[12];
    int index;
    int index_aux;

    index = 0;
    index_aux = 0;

    if (n_letras == 0) {
        str[0] = '0';
        str[1] = '\0';
    }
    else {
        while (n_letras > 0)
        {
            str_aux[index] = (n_letras % 10) + '0';
            index++;
            n_letras = n_letras / 10;
        }
    
        // ultimo indice valido. Si hay 3 cifras, index = 4 - 1 = 3
        index--;
        
        // reordenar cadena
        while (index >= 0)
        {
            str[index_aux] = str_aux[index];
            index_aux++;
            index--;
        }
        
        str[index_aux] = '\0';
    }

    return str;
}

void contar_letras_en_string()
{
    char *frase;
    char *n_letras_str;
    int n_letras;

    frase = "Hola que tal estas manin esto es una frase larga";
    n_letras = 0;

    // output = La frase 'Hola que tal estas manin esto es una frase larga' tiene
    write(1, "La frase '", 10);
    write(1, frase, 48);
    write(1, "' tiene", 7);

    // contar cuantos caracteres tiene la frase
    n_letras = contar_n_caracteres(frase);

    // formatear el numero de caracteres
    n_letras_str = get_number_of_characters_from_int_to_char_ptr(n_letras);
    write(1, n_letras_str, sizeof(n_letras_str));

    write(1, "caracteres", 10);
}

void contar_letras_en_array()
{
    // 5 letras + '\0'
    char letras[6];
    char *pointer;
    char primeraLetra;
    int numero_letras;

    letras[0] = 'h';
    letras[1] = 'o';
    letras[2] = 'l';
    letras[3] = 'a';
    letras[4] = 'a';
    // Terminador nulo para que printf sepa dónde parar
    letras[5] = '\0';

    pointer = letras;
    primeraLetra = *pointer;
    numero_letras = '0';

    // Imprimir con printf
    printf("letras: %s\n", letras);
    printf("puntero a letras: %s\n", pointer);
    printf("primera letra: %c\n", primeraLetra);

    // Iterar usando puntero
    while (*pointer != '\0')
    {
        pointer++;
        numero_letras++;
    }

    write(1, "letras tiene ", 13);
    write(1, &numero_letras, 1);
    write(1, " cantidad de letras", 19);
    write(1, "\n", 1);
    write(1, "----------", 10);
    write(1, "\n", 1);
}
