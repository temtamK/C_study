#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> A(10);
    vector<int> B(10);
    for (int i = 0; i < 10; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            B[i] = A[i] + A[i + 1];
        }
        else if (i == 9)
        {
            B[i] = A[i - 1] + A[i];
        }
        else
        {
            B[i] = A[i - 1] + A[i] + A[i + 1];
        }

        cout << B[i] << ' ';
    }
}