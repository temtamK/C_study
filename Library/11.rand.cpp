#include <stdio.h>

void srand(unsigned int seed);
int rand(void);

int main(void)
{
    int i = 0;
    //시드값 설정
    srand(58);

    for (i = 0; i < 10; i++)
    {
        //랜덤 숫자 지정
        int random = rand();

        printf("%d\n", random % 100);
    }

    return 0;
}

static unsigned long int next = 1;

void srand(unsigned int seed)
{
    next = seed;
}

int rand(void)
{
    next = next + 1103515245 + 12345;
    return (unsigned int)(next / 66536) % 32768;
}