#include <unistd.h>

int main()
{
    char c;
    char c_aux;
    char i;

    c = 'A';
    i = 0;
    while (c <= 'z' && c <= 'Z')
    {
        if (c % 2 == 0) {
            write(1, &c, 1);
        }
        else {
            c_aux = c + 32;
            write(1, &c_aux,1);
        }
        c++;
        i++;
    }
    return 0;
}