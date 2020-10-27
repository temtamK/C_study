#include <stdio.h>

int main()
{
    int n, x, y, w, h, d, l = 0;

    int arr[101][101] = {};

    //격자판 칸수 입력
    scanf("%d %d", &w, &h);

    //막대의 개수
    scanf("%d", &n);

    //막대 표시
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &l, &d, &x, &y);

        if (d == 0)
        {
            for (int j = y; j < l + y; j++)
            {
                arr[x][j] = 1;
            }
        }
        else
        {
            for (int j = x; j < l + x; j++)
            {
                arr[j][y] = 1;
            }
        }
    }

    for (int i = 1; i <= w; i++)
    {
        for (int j = 1; j <= h; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}