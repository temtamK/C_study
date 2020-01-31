#include <stdio.h>

int main()
{
    char s;
    char c = 'a';
    scanf("%c", &s);

    while (1)
    {
        printf("%c ", c);
        if (c == s)
            break;
        c++;
    }
    return 0;
}