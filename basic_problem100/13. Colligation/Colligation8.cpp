#include <stdio.h>

int main()
{
    long int h, b, c, s, byteSize;
    double kbSize, mbSize;

    scanf("%ld %ld %ld %ld", &h, &b, &c, &s);

    byteSize = (h * b * c * s) >> 3;

    kbSize = byteSize / 1024;

    mbSize = kbSize / 1024;

    printf("%.1lf MB", mbSize);
    return 0;
}