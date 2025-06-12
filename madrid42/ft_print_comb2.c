#include <unistd.h>

void ft_print_comb2(void);

int main() {
    ft_print_comb2();
    return 0;
}

void ft_print_comb2(void) {
    int a, b;
    char texto[7];
    int primero = 1;

    a = 0;
    b = 0;

    while (a <= 98) {
        b = a + 1;
        while (b <= 99) {
            if (primero) {
                texto[1] = a / 10 + '0';
                texto[2] = a % 10 + '0';
                texto[3] = ' ';
                texto[4] = b / 10 + '0';
                texto[5] = b % 10 + '0';
                primero = 0;
            }
            else {
                texto[0] = ',';
                texto[1] = ' ';
                texto[2] = a / 10 + '0';
                texto[3] = a % 10 + '0';
                texto[4] = ' ';
                texto[5] = b / 10 + '0';
                texto[6] = b % 10 + '0';
            }
            
            write(1, &texto, 7);

            b++;
        }
        a++;
    }
}