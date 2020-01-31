#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);

    if (a >= 90)
    {
        printf("A");
    }
    else if (89 >= a && a >= 70)
    {
        printf("B");
    }
    else if (69 >= a && a >= 40)
    {
        printf("C");
    }
    else
    {
        printf("D");
    }

    return 0;
}