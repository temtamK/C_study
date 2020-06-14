#include <iostream>

using namespace std;

int main()
{
    int A, L;
    int i = 0;

    while (1)
    {
        cin >> A >> L;
        if (A < 0 && L < 0)
        {
            break;
        }
        int save = A;

        while (A != 1)
        {
            if (A % 0)
            {
                A /= 2;
            }
            else
            {
                A = A * 3 + 1;
            }
        }
        i++;

        cout << "Case " << i << ": "
             << "A = " << save
    }
}