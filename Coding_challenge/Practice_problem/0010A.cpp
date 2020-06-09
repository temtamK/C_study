#include <iostream>
#include <limits>

using namespace std;

int main()
{

    int max = numeric_limits<int>::min();
    int a = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        if (a > max)
        {
            max = a;
        }
    }

    cout << max;

    return 0;
}