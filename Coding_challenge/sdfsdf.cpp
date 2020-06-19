#include <iostream>
#include <map>
#include <algorithm>
? using namespace std;
? int main()
{
    map<int, int> cnts;
    int i, j, cnt;
    long long n;
    ? while (cin >> i >> j)
    {
        cout << i << " " << j << " ";
        int max_cnt = 0;
        ? if (i > j)
        {
            swap(i, j);
        }
        ? while (i <= j)
        {
            if (cnts.find(i) != cnts.end())
            {
                cnt = cnts[i];
            }
            else
            {
                cnt = 1;
                n = i;

                while (n != 1)
                {
                    if (n % 2 == 1)
                    {
                        n = 3 * n + 1;
                    }
                    else
                    {
                        n /= 2;
                    }
                    cnt++;
                }
            }
            max_cnt = max(cnt, max_cnt);
            i++;
        }
        cout << max_cnt << endl;
    }
    ? return 0;
}
Collapse
