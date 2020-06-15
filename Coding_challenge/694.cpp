#include <iostream>

using namespace std;

int main()
{
    int L;
    long long A;
    int i = 1;

    while (1)
    {
        cin >> A >> L;
        if (A < 0)
        {
            break;
        }

        cout << "Case " << i++ << ": A = " << A;
        cout << ", limit = " << L << ", number of terms = ";

        int terms = 1;

        while (A != 1)
        {
            if (A % 2 == 0)
            {
                A /= 2;
            }
            else
            {
                A = A * 3 + 1;
            }
            if (A > L)
            {
                break;
            }
            terms++;
        }
        cout << terms << endl;
    }
}