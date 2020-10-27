#include <iostream>
#include <string>

using namespace std;

int main()
{
    string image;

    int n;
    while (1)
    {
        /* code */
        cin >> n;
        if (n == 0)
        {
            /* code */
            break;
        }
        int total = 0;
        int i, cnt, min_cnt = 23;
        string s;

        cin.get();
        for (int i = 0; i < n; i++)
        {
            /* code */
            getline(cin, s);
            cnt = 0;
            for (auto c : s)
            {
                if (c == ' ')
                {
                    cnt++;
                }
            }
            total += cnt;
            if (min_cnt > cnt)
            {
                min_cnt = cnt;
            }
        }
        cout << total - min_cnt * n << endl;
    }

    return 0;
}