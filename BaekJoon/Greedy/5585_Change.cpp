//
// Created by taemin on 2020-02-06.
//
#include <stdio.h>

int main() {
    int price = 0;
    int coin[6] = {500, 100, 50, 10, 5, 1};

    scanf("%d", &price);

    int pay = 1000 - price;
    int remain = 0;
    int num = 0;
    int change = 0;

    for (int i = 0; ; i++) {
        num = pay / coin[i];
        remain = pay - num * coin[i];
        pay = remain;
        change += num;

        if(remain == 0) {
            printf("%d", change);
            break;
        }
    }

    return 0;
}



