#include <stdio.h>

int main()
{
    char a[21] = "";
    int i = 0;

    scanf("%s", a);

    while (a[i] != 0)
    {
        printf("'%c'\n", a[i]);
        i++;
    }
    return 0;
}