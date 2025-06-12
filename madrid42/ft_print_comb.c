#include <unistd.h>

void ft_print_comb(void);

int main() {
    ft_print_comb();
    return 0;
}

void ft_print_comb(void) {
    int a = 0;
    int b = 0;
    int c = 0;
    
    while(a <= 7) {
        b = a + 1;
        while(b <= 8) {
            c = b + 1;
            while(c <= 9) {               
                if (a < b && b < c) {
                    char numeros[5] = { a + '0', b + '0', c + '0', ',', ' ' };
                    int size = sizeof(numeros) / sizeof(numeros[0]);
                    write(1, numeros, size);
                }
                c++;
            }
            b++;
        }
        a++;
    }
}