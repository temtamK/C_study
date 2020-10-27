#include <stdio.h>

int main()
{
    int n, t = 0;

    int arr[10000] = {};

    scanf("%d", &n);

    for (int i = 1; i < n + 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = n; j >= 1; j--)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}