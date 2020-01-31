#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);

    if (a % 2 == 0)
    {
        if (a > 0)
        {
            printf("plus\n");
        }
        else
        {
            printf("minus\n");
        }
        printf("even");
    }
    else
    {
        if (a > 0)
        {
            printf("plus\n");
        }
        else
        {
            printf("minus\n");
        }
        printf("odd");
    }

    return 0;
}