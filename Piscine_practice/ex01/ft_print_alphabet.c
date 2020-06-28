//
// Created by taemin on 2020-06-28.
//

#include <unistd.h>

void ft_print_alphabet(void) {
    for (char i = 'a'; i <= 'z'; ++i) {
        write(1, &i, 1);
    }
}
