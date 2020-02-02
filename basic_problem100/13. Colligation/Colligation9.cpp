#include <stdio.h>

int main()
{
    int w, h, b = 0;

    scanf("%d %d %d", &w, &h, &b);

    long int size = (w * h * b) / 8;

    double kbSize = size / 1024;

    double mbSize = kbSize / 1024;

    printf("%0.2f MB", mbSize);

    return 0;
}