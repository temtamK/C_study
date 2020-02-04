#include <stdio.h>

int main()
{
    int a;
    int i = 0;

    scanf("%d", &a);

    int f = a;

    while (1)
    {
        int x = a / 10;
        int y = a % 10;
        int z = x + y;
        int b = y * 10 + (z % 10);
        a = b;

        i++;

        if (b == f)
        {
            printf("%d", i);
            break;
        }
    }

    return 0;
}