#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a = {1, 1};

    for (int i = 2; i < 20; i++)
    {
        a.push_back(a[i - 1] + a[i - 2]);
    }

    for (auto c : a)
    {
        cout << c << ' ';
    }

    return 0;
}