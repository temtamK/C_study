#include <iostream>
#include <limits>

using namespace std;

int main()
{

    int min = numeric_limits<int>::max();
    int a = 0;
    int second_min = 100;

    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        if (a < min)
        {
            min = a;
        }

        if (a > min && a < second_min)
        {
            second_min = a;
        }
    }

    cout << second_min;

    return 0;
}