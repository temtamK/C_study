#include <stdio.h>

int main()
{
    unsigned int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a % 2 == 0)
    {
        printf("%d\n", a);
    }

    if (b % 2 == 0)
    {
        printf("%d\n", b);
    }

    if (c % 2 == 0)
    {
        printf("%d", c);
    }

    return 0;
}