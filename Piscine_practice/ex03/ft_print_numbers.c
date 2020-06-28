//
// Created by taemin on 2020-06-28.
//
#include <unistd.h>

void ft_print_numbers(void) {
    //for문 사용시 아스키 코드값 출력
//    for (char i = "0"; i <= "9"; ++i) {
//        write(1, &i, 1);
//    }

    char num;

    num = '0';

    while (num <= '9') {
        write(1, &num, 1);
        num++;
    }
}
