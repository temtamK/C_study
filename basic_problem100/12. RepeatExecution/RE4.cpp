#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    while (1)
    {
        --a;
        printf("%d\n", a);
        if (a == 0)
            break;
    }
    return 0;
}