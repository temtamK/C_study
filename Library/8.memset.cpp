#include <stdio.h>

void *memset(void *ptr, int value, size_t num);

int main(void)
{
    char arr[12];

    memset(arr, 'a', 12);
    arr[11] = '\0';

    /*
     int i = 0;
     int arr[12];

     memset(arr, 1, 12*sizeof(int));
     for(i=0; i<12, i++)
        pirntf("%hhd\n", arr[i]);
    
    */

    printf("%s", arr);

    return 0;
}

void *memset(void *ptr, int value, size_t num)
{
    size_t i = 0;

    for (i = 0; i < num; i++)
    {
        *((unsigned char *)ptr + i) = (unsigned char)value;
        // ((unsigned char *)ptr)[i] = (unsigned char)value;
    }

    return ptr;
}