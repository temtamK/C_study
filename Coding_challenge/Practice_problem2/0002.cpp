#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> a(10);

    for (auto &aa : a)
    {
        cin >> aa;
    }

    auto m = minmax_element(a.begin(), a.end());

    auto mean = (*m.first + *m.second) / 2;

    cout << mean;
}