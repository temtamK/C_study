#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    string a, b;

    while (1)
    {
        cin >> n;
        if (n == -1)
        {
            break;
        }

        cout << "Round " << n << endl;

        cin >> a >> b;

        set<char> sa(a.begin(), a.end());
        int cnt(0);
        for (auto cb : b)
        {
            if (sa.find(cb) != sa.end())
            {
                sa.erase(cb);
            }
            else
            {
                cnt++;
            }

            if (cnt > 6 || sa.empty())
            {
                break;
            }
        }

        if (sa.empty())
        {
            cout << "You win." << endl;
        }
        else if (cnt > 6)
        {
            cout << "You lose." << endl;
        }
        else
        {
            cout << "You chickened out" << endl;
        }
    }

    return 0;
}