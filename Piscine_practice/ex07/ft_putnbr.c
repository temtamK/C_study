#include <unistd.h>

void ft_putchar(char c);

void ft_putnbr(int nb) {
    int i = nb;

    if (i < 0) {
        ft_putchar('-');
        i = i * (-1);
    }
    if (i > 9) {
        ft_putnbr(i / 10);
        ft_putnbr(i % 10);
    } else {
        ft_putchar(i + '0');
    }


}
