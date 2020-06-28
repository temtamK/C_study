#include <unistd.h>

void ft_print_reverse_alphabet(void) {
    for (char i = 'z'; i >= 'a'; --i) {
        write(1, &i, 1);
    }
}
