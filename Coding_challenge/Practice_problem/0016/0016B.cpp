#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while (n > 1)
    {
        if (n % 2 == 1)
        {
            n += 1;
            cout << n << endl;
        }
        else
        {
            n /= 2;
            cout << n << endl;
        }
    }
}