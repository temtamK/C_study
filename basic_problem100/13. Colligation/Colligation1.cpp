#include <stdio.h>

int main()
{
    int a, i;
    int sum = 0;

    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("%d", sum);

    return 0;
}