#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const int INF = 50;

string s1, s2;

int result;

void minDiffrence(void)
{
    for (int i = 0; i <= s2.length() - s1.length(); i++)
    {
        int cnt = 0;
        for (int j = 0; j < s1.length(); j++)
        {
            if (s1[j] != s2[j + i])
                cnt++;
        }
        result = min(result, cnt);
    }
}
int main()
{
    cin >> s1 >> s2;

    result = INF;
    minDiffrence();

    printf("%d", result);
    return 0;
}
