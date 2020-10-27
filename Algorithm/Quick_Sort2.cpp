#include <stdio.h>

int number = 10;
int data[10] = {10, 5, 9, 3, 8, 2, 1, 7, 6, 4};

void show()
{
    int i;
    for (i = 0; i < number; i++)
    {
        printf("%d ", data[i]);
    }
}

void quickSort(int *data, int start, int end)
{
    if (start >= end)
    { //원소가 한개인 경우
        return;
    }

    int key = start; //pivot 값
    int i = start + 1;
    int j = end;
    int temp;

    while (i <= j)
    { // 엇갈릴 때까지 반복
        while (i <= end && data[i] <= data[key])
        {
            i++;
        }
        while (data[j] >= data[key] && j > start)
        {
            j--;
        }
        if (i > j)
        {
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
        else
        {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    quickSort(data, start, j - 1);
    quickSort(data, j + 1, end);
}

int main(void)
{
    quickSort(data, 0, number - 1);
    show();
    return 0;
}