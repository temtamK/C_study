#include <iostream>

using namespace std;

int main(void)
{
    long long int a, b, result;

    while (cin >> a >> b)
    {
        result = a - b;
        cout << abs(result) << endl;
    }

    return 0;
}