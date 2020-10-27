#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    cin >> s;

    int n, sum = 0;
    int arr[10] = {};
    for (int i = 0; i < s.length(); i++)
    {
        n = s[i] - '0'; //만약 0이 있으면 빼기
        sum += n;       //0을 제외한 각 자릿수의 값을 합치기

        arr[n]++; //자릿수와 같은 인덱스에 1추가
    }

    if (arr[0] == 0 || sum % 3 != 0) //만약 0이 없거나 3의 배수가 아니라면
    {
        printf("-1\n");
        return 0;
    }

    for (int i = 9; i >= 0; i--)
    {
        for (int j = 0; j < arr[i]; j++)
            cout << i;
    }

    printf("\n");
}
