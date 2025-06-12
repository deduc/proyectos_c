#include <unistd.h>

void ft_print_comb2(void);

int main() {
    ft_print_comb2();
    return 0;
}

void ft_print_comb2(void) {
    int a = '0';
    int b = '0';
    int c = '0';
    int d = '1';

    while (a <= '9') {
        while (b <= '9') {
            while (c <= '9') {
                while (d <= '9') {
                    char text[] = {a, b, ' ', c, d, ',', ' '};
                    int textSize = sizeof(text) / sizeof(text[0]);
                    write(1, &text, textSize);
                    d++;
                }
                c++;
                d = '0';
            }
            b++;
            c = '0';
        }
        a++;
        b = '0';
    }
}