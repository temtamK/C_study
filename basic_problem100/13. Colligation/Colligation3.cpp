#include <stdio.h>

int main()
{
    int a;
    int sum = 0;

    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        sum += i;
        if (sum >= a)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}