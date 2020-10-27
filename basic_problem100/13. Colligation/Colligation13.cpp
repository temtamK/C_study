#include <stdio.h>
#include <math.h>

int main()
{
    int a, r, n = 0;

    unsigned long int result = 0;

    scanf("%d %d %d", &a, &r, &n);

    result = a * (unsigned long int)pow(r, n - 1);

    printf("%ld", result);

    return 0;
}