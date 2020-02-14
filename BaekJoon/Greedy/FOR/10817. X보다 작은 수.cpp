#include <stdio.h>

int main()
{
    unsigned int n;
    unsigned int a[10001] = {};
    int x;

    scanf("%d %d", &n, &x);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < x)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}