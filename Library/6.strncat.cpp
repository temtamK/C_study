#include <stdio.h>

char *strncat(char *destination, const char *source, size_t num);

int main(void)
{
    char str[16] = "hi ";
    const char *hello = "hello world";

    strncat(str, hello, 7);

    printf("%s", str);
    return 0;
}

char *strncat(char *destination, const char *source, size_t num)
{
    size_t i = 0;
    size_t start = 0;

    while (destination[start] != '\0')
    {
        ++start;
    }

    for (i = 0; i < num; i++)
    {
        destination[start + i] = source[i];
        if (source[i] == '\0')
        {
            break;
        }
    }

    destination[start + i] = '\0';

    return destination;
}