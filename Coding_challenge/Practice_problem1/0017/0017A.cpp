#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<char> A(20, 'a');

    int n;

    cin >> n;

    A[n] = 'b';

    for (auto aa : A)
    {
        cout << aa;
    }

    return 0;
}
