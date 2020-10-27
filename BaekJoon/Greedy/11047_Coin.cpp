#include <stdio.h>

int main()
{

    int n, k = 0;
    int a[10] = {};

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = 0;

    int j = 0;
    int remain = 0;

    for (int i = n; i > 0; i--)
    {
        j = k / a[i - 1];
        remain = k % a[i - 1];
        k = remain;
        min += j;

        if (remain == 0)
        {
            printf("%d", min);
            break;
        }
    }

    return 0;
}