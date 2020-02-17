#include <stdio.h>

int main()
{
    int n;
    char a = 32;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j >= 0; j--)
        {
            if (j > i)
            {
                printf("%c", a);
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}