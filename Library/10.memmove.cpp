#include <stdio.h>
#include <string.h>

void *memmove(void *destination, const void *source, size_t num);

int main()
{
    char str[32] = "hello world";

    memcpy(&str[6], &str[0], 12);

    printf("%s", str);

    return 0;
}

// void *memmove(void *destination, const void *source, size_t num)
// {
//     size_t i = 0;
//     unsigned char *buff = malloc(num);

//     for (i = 0; i < num; i++)
//     {
//         buff[i] = ((unsigned char *)source)[i];
//     }

//     for (i = 0; i < num; i++)
//     {
//         ((unsigned char *)destination)[i] = ((unsigned char *)source)[i];
//     }

//     free(buff);
//     buff = NULL;

//     return destination;
// }