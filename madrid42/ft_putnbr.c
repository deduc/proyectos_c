#include <unistd.h>

void ft_putnbr(int nb);


int main () {
    int x = -780;
    ft_putnbr(x);
    return 0;
}

void ft_putnbr(int nb) {
    if (nb < 0) {
        char a = '-';
        write(1, &a, 1);
        nb = -nb;        
    }

    if (nb >= 10) {
        int x = nb / 10;
        ft_putnbr(x);
    }

    int c = nb % 10 + '0';
    write(1, &c, 1);
}