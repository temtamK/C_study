#include <iostream>

using namespace std;

int main()
{
    int n, i = 0;

    cin >> n;

    while (n > 1)
    {
        if (n % 2 == 1)
        {
            n += 1;
        }
        else
        {
            n /= 2;
        }
        i++;
    }

    cout << i;
}