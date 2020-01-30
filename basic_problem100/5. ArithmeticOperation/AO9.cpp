#include <stdio.h>

int main()
{

    long int a, b, c;

    scanf("%ld %ld %ld", &a, &b, &c);

    printf("%lld\n%.1f", a + b + c, (float)(a + b + c) / 3);

    return 0;
}