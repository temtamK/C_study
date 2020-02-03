#include <stdio.h>

int main()
{

    int arr[11][11] = {};

    //맵 입력
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int i = 1;
    int j = 1;

    //개미 경로 추적
    while (arr[i][j] != 2)
    {
        arr[i][j] = 9;
        if (arr[i][j + 1] != 1)
            j += 1;
        else if (arr[i + 1][j] != 1)
            i += 1;
        else
            break;
    }
    arr[i][j] = 9;

    //개미가 지나간 후 맵 출력
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}