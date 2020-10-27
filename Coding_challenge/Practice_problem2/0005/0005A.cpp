#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num, col, row;

    cin >> row;

    vector<vector<int>> a(row);

    for (auto &aa : a)
    {
        cin >> col;
        while (col--)
        {
            cin >> num;
            aa.push_back(num);
        }
    }

    for (auto aa : a)
    {
        for (auto aaa : aa)
        {
            cout << aaa << " ";
        }
        cout << endl;
    }

    return 0;
}