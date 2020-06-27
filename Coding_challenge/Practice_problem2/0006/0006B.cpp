#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int row, col;

    cin >> row >> col;

    vector<string> a(row);
    vector<vector<int>> b(row);

    for (auto &aa : a)
    {
        cin >> aa;
    }
    int x, y;
    for (y = 0; y < row; y++)
    {
        for (x = 0; x < col; x++)
        {
            if (a[y][x] == '*')
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
}