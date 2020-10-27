#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<int> a;
    int b, sum = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> b;
        a.push_back(b);
        sum += a[i];
    }

    cout << sum;

    return 0;
}