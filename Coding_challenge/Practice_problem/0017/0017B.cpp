#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> A{0, 1, 2, 3, 2, 1, 0, 1, 2, 3};

    int n, num[30];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    for (auto nn : num)
    {
        cout << A[nn] << ' ';
    }
}