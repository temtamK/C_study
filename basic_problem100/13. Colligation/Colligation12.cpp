#include <stdio.h>

int main()
{
    int a, d, n = 0;

    scanf("%d %d %d", &a, &d, &n);

    int result = a + d * (n - 1);

    printf("%d", result);

    return 0;
}