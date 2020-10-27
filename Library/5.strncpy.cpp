#include <stdio.h>

char *strncpy(char *destination, const char *source, size_t num);

int main(void)
{
    char str[16] = {0};
    const char *hello = "hello world";

    strncpy(str, hello, 7);

    printf("%s", str);
    return 0;
}

char *strncpy(char *destination, const char *source, size_t num)
{
    size_t i = 0;

    for (int i = 0; i < num; i++)
    {
        destination[i] = source[i];

        if (source[i] == '\0')
        {
            break;
        }
    }

    return destination;
}