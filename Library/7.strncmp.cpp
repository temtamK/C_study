#include <stdio.h>

int strncmp(const char *str1, const char *str2, size_t num);

int main(void)
{
    const char *a = "hawai";
    const char *b = "hello";

    int cmp = strncmp(a, b, 3);

    printf("%d", cmp);
    return 0;
}

int strncmp(const char *str1, const char *str2, size_t num)
{
    size_t i = 0;
    int result = 0;

    for (i = 0; i < num - 1; ++i)
    {
        if (str1[i] != str2[i] || str1[i] == '\0')
        {
            break;
        }
    }

    int sub = str1[i] - str2[i];

    if (sub > 0)
    {
        result = 1;
    }
    else if (sub < 0)
    {
        result = -1;
    }

    //if(result != 0) {
    //     result >>= 31;
    //     result |= 1;
    // }

    return result;
}