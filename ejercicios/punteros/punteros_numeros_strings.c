#include <unistd.h>
#include <stdio.h>

void printStr();
void printSum();
void printNumbers();
void printCharacters();

int main()
{
    printCharacters();
    printNumbers();
    printSum();
    printStr();

    return 0;
}

void printStr()
{
    char *text;
    char text2[5];

    text = "hola\0";
    text2[0] = 'h';
    text2[1] = 'o';
    text2[2] = 'l';
    text2[3] = 'a';
    text2[4] = '\n';

    write(1, text, 4);
    write(1, "\n", 1);
    write(1, text2, 4);
    write(1, "\n", 1);
}

void printSum()
{
    int i;
    int index;
    int index_aux;
    int negativo;
    char i_text[4];
    char i_text_aux[4];

    i = -123;

    if (i < 0)
    {
        i = -i;
        negativo = 1;
    }

    // añadir numero a la string output
    index = 0;
    while (index < 3)
    {
        i_text[index] = (i % 10) + '0';
        i = i / 10;
        index++;
    }
    // si negativo, añadir al final el simbolo -
    if (negativo == 1)
    {
        i_text[index] = '-';
    }

    // reordenar string output
    index_aux = 0;
    while (index_aux <= 3)
    {
        i_text_aux[index_aux] = i_text[index];
        index--;
        index_aux++;
    }

    write(1, &i_text_aux, 4);
    write(1, "\n", 1);
}

void printNumbers()
{
    int i;

    i = '0';

    while (i <= '9')
    {
        write(1, &i, 1);
        i++;
    }

    write(1, "\n", 1);
}

void printCharacters()
{
    char a;
    char b;
    char b_aux;
    int index_b;

    a = 'a';
    b = 'a';

    while (a != 'z' && a != 'Z')
    {
        write(1, &a, 1);
        a++;
    }

    write(1, "\n", 1);

    index_b = 0;
    while (b != 'z' && b != 'Z')
    {
        if (index_b % 2 == 0)
        {
            write(1, &b, 1);
        }
        else
        {
            b_aux = b - 32;
            write(1, &b_aux, 1);
        }
        b++;
        index_b++;
    }

    write(1, "\n", 1);
}
