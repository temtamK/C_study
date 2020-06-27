#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int row, col;

    cin >> row >> col;

    vector<string> a(row);

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
                printf("(%d, %d)\n", x + 1, y + 1);
            }
        }
    }
}