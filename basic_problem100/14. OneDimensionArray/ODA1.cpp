#include <stdio.h>

int main()
{
    int n, t = 0;

    int arr[23] = {};

    scanf("%d", &n);

    for (int i = 1; i < n + 1; i++)
    {
        scanf("%d", &t);
        arr[t] = arr[t] + 1;
    }

    for (int j = 1; j <= 23; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}