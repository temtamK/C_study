#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (auto &aa : a)
    {
        cin >> aa;
    }

    int x, y, xx, yy;
    vector<vector<int>> b(n);
    for (auto &bb : b)
    {
        bb.resize(m, 0);
    }

    for (y = 0; y < n; y++)
    {
        for (x = 0; x < n; x++)
        {
            if (a[y][x] == '*')
            {
                for (yy = max(0, y - 1); y <= min(n - 1, y + 1); yy++)
                {
                    for (xx = 0; xx <= min(m - 1, x + 1); xx++)
                    {
                        /* code */
                        if (y != yy || x != xx)
                        {
                            b[yy][xx] += 1;
                        }
                    }
                }
            }
        }
    }
    for (x = 0; x < n; x++)
    {
        /* code */
        cout << b[y][x];
    }
    cout << endl;
}