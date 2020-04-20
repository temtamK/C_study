#include <stdio.h>

void *memcpy(void *destination, const void *source, size_t num);

int main(void)
{
    char *str = "hello world";
    char arr[32] = {};

    memcpy(arr, str, 10);
    // strcpy와는 다르게 특정 부분만 복사 가능
    arr[10] = {};

    printf("%s", arr);

    return 0;
}

void *memcpy(void *destination, const void *source, size_t num)
{
    size_t i = 0;
    for (i = 0; i < num; i++)
    {
        // 내부적으로 void 포인터가 unsigned char형으로 바뀜
        // 정확히는 이진수의 데이터를 그대로 복사
        ((unsigned char *)destination)[i] = ((unsigned char *)source)[i];
    }

    return destination;
}