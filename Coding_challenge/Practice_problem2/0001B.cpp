#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int a, mn = 10;

    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        mn = min(mn, a);
    }

    cout << mn;
}