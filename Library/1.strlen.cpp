#include <stdio.h>

size_t strlen(const char *str);

int main(void)
{
    // int len = strlen("hello world");

    char buf[10] = "hello";
    auto len = 0;

    len = strlen(buf);

    printf("len : %u", len);

    return 0;
}

size_t strlen(const char *str)
{
    auto len = 0;

    while (str[len] != '\0')
        ++len;

    return len;
}