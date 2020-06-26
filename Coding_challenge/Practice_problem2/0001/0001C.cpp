#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int a, mx = 0, mn = 10;

    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        mx = max(mx, a);
        mn = min(mn, a);
    }

    cout << mx + mn;
}