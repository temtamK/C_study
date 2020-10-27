#include <iostream>

using namespace std;

int main()
{
    int test, amplitude, frequency, k = 0;

    cin >> test >> amplitude >> frequency;

    while (k <= test)
    {
        for (int i = 1; i <= amplitude; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << i;
            }
            cout << endl;
        }

        for (int i = amplitude - 1; i >= 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                cout << i;
            }
            cout << endl;
        }
        k++;
    }
}
