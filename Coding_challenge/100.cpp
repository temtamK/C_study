#include <iostream>
#include <map>

using namespace std;

int main()
{
    int i, j;

    while (cin >> i >> j)
    {
        map<int, int> data;
        int n = 0, mx = 0;

        cout << i << ' ' << j << ' ';

        if (i <= j)
        {
            for (int n = i; n <= j; n++)
            {
                int k = n;
                int cnt = 0;
                while (k != 1)
                {
                    if (k % 2 == 1)
                    {
                        k = 3 * k + 1;
                    }
                    else
                    {
                        k /= 2;
                    }
                    cnt++;
                }
                data[n] = cnt + 1;
            }
        }
        else
        {
            for (int n = j; n <= i; n++)
            {
                int k = n;
                int cnt = 0;
                while (k != 1)
                {
                    if (k % 2 == 1)
                    {
                        k = 3 * k + 1;
                    }
                    else
                    {
                        k /= 2;
                    }
                    cnt++;
                }
                data[n] = cnt + 1;
            }
        }

        for (auto ss : data)
        {
            if (ss.second > mx)
            {
                mx = ss.second;
            }
        }

        cout << mx << endl;
    }
}