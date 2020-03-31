#include <stdio.h>

char *strcpy(char *destination, const char *source);

int main(void)
{
    char buf[10] = {0};
    const char *string = "hello";

    strcpy(buf, string);

    printf("%s", buf);

    return 0;
}

char *strcpy(char *destination, const char *source)
{
    size_t i = 0;

    while (source[i] != '\0')
    {
        destination[i] = source[i];
        ++i;
    }

    destination[i] = '\0';

    return destination;
}