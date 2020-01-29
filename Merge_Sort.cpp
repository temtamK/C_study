#include <stdio.h>
void mergeSort(int data[], int s, int e)
{
    int tmp[10000];
    int i = s;
    int k = s;
    int m = (s + e) / 2;
    int j = m + 1;
    if (s >= e)
        return;                //쪼갤수 없음, 되돌아가기
    mergeSort(data, s, m);     //분할
    mergeSort(data, m + 1, e); //분할
    while ((i <= m) && (j <= e))
    { //병합
        if (data[i] < data[j])
            tmp[k++] = data[i++];
        else
            tmp[k++] = data[j++];
    }
    while (i <= m)
        tmp[k++] = data[i++]; //나머지 병합
    while (j <= e)
        tmp[k++] = data[j++]; //나머지 병합
    for (i = s; i <= e; i++)
        data[i] = tmp[i]; //복사
}

int main()
{
    int data[] = {1, 5, 2, 4, 3, 7, -1, 10, 6};
    mergeSort(data, 0, sizeof(data) / sizeof(int) - 1);
    for (int i = 0; i < sizeof(data) / sizeof(int); i++)
    {
        printf("%d ", data[i]);
    }
}
