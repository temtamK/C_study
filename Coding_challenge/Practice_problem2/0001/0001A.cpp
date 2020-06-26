#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int a, mx = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        mx = max(mx, a);
    }

    cout << mx;
}