#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int row, col, num;

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
        cout << *max_element(aa.begin(), aa.end()) << endl;
    }
}