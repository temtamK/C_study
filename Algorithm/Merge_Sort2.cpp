#include <stdio.h>

void merge(int data[], int p, int q, int r)
{
    int i = p, j = q + 1, k = p;
    int tmp[6]; //임시 배열
    while (i <= q && j <= r)
    {
        if (data[i] <= data[j])
            tmp[k++] = data[i++];
        else
            tmp[k++] = data[j++];
    } //한쪽이 끝날때까지 정렬. 그 후 다른 한쪽에서 남은 값들은 이미 정렬됐으므로 그대로 넣어주면 됨.
    while (i <= q)
        tmp[k++] = data[i++];
    while (j <= r)
        tmp[k++] = data[j++];
    for (int i = p; i <= r; i++)
    {
        data[i] = tmp[i];
    } //합병한 값을 원래 배열에 넣어줌
}

void mergeSort(int data[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergeSort(data, p, q);     //전반부 정렬
        mergeSort(data, q + 1, r); //후반부 정렬
        merge(data, p, q, r);      //합병
    }
}

int main()
{
    int data[6] = {6, 5, 4, 3, 2, 1};
    mergeSort(data, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", data[i]);
    }
    return 0;
}
