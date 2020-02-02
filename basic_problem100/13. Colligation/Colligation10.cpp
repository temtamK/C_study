#include <stdio.h>

int main()
{
    unsigned int a = 0;
    unsigned int sum = 0;

    scanf("%d", &a);

    for (unsigned int i = 1; i <= a; i++)
    {
        sum += i;
        if (sum >= a)
        {
            break;
        }
    }
    printf("%d", sum);

    return 0;
}