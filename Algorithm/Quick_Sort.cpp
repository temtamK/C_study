#include <stdio.h>
#include <stdlib.h>
#define max 10
int partition(int arr[], int start, int end);

void quickSort(int arr[], int start, int end)
{

    int index;
    int i;

    if (start < end)
    {
        index = partition(arr, start, end);

        printf("\n");
        for (i = 0; i < max; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");

        quickSort(arr, start, index - 1);
        quickSort(arr, index + 1, end);
    }
    else
    {
        return;
    }
}

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int i;
    int index = start;
    int temp;

    for (i = start; i < end; i++)
    {
        if (arr[i] <= pivot)
        {
            printf("\n Swap!! %d %d ", arr[i], arr[index]);
            temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
            index++;
        }
    }
    temp = arr[index];
    arr[index] = arr[end];
    arr[end] = temp;
    printf("\n Swap(index : pivot) %d %d ", arr[index], arr[end]);
    return index;
}

int main()
{
    int arr[max] = {4, 3, 10, 6, 8, 2, 9, 1, 7, 5};
    int i;

    quickSort(arr, 0, max - 1);

    for (i = 0; i < max; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
