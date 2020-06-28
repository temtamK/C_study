#include <unistd.h>

void ft_is_negative(int n) {
    if (n < 0) {
        n = 'N';
        write(1, &n, 1);
    } else {
        n = 'P';
        write(1, &n, 1);
    }
}
