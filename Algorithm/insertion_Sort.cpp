#include <stdio.h>

int main(void)
{

    int i, j, tmp;

    int array[10] = {1, 10, 6, 4, 7, 3, 2, 8, 9, 5};

    for (i = 0; i < 9; i++)
    {
        j = i;
        while (j >= 0 && array[j] > array[j + 1])
        {
            tmp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = tmp;
            j--;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}