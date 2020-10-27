#include <stdio.h>

int strcmp(const char *str1, const char *str2);

int main(void)
{
    char buf[10] = {"aac"};
    const char *string = "abc";

    int cmp = strcmp(buf, string);

    printf("%d", cmp);

    return 0;
}

int strcmp(const char *str1, const char *str2)
{
    int result = 0;
    size_t i = 0;

    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
        ++i;

    // if (str1[i] > str2[i])
    //     result = 1;
    // else if (str1[i] < str2[i])
    //     result = -1;

    result = str1[i] - str2[i];

    return result;
}