#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, t = 0;

    scanf("%d", &n);

    int arr[10000] = {};

    for (int i = 1; i < n + 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, arr + n);

    while (arr[t] == 0)
    {
        t++;
        if (arr[t] != 0)
        {
            printf("%d", arr[t]);
            break;
        }
    }

    return 0;
}