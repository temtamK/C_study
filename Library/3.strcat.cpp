#include <stdio.h>

char *strcat(char *destination, const char *source);

int main(void)
{
    char buf[10] = {"abc"};
    const char *string = "def";

    strcat(buf, string);

    printf("%s", buf);

    return 0;
}

char *strcat(char *destination, const char *source)
{
    size_t i = 0;
    size_t j = 0;

    while (destination[i] != '\0')
        ++i;

    while (source[j] != '\0')
    {
        destination[i] = source[j];
        ++i;
        ++j;
    }

    destination[i] = '\0';

    return destination;
}
