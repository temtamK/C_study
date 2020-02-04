#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0;
    int arr[1000] = {};
    unsigned int sum, min = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        min += sum;
    }

    printf("%d", min);

    return 0;
}