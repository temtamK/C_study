#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int test = 0, t_case = 0;

    cin >> test;

    vector<int> DNA(10);

    while (t_case < test)
    {

        vector<int> today(40);
        vector<int> tomorrow(40);

        today[19] = 1;

        for (int i = 0; i < 10; i++)
        {
            cin >> DNA[i];
        }

        for (int i = 0; i < 50; i++)
        {
            for (int j = 0; j < 40; j++)
            {
                if (today[j] == 0)
                {
                    cout << ' ';
                }
                else if (today[j] == 1)
                {
                    cout << '.';
                }
                else if (
                    today[j] == 2)
                {
                    cout << 'x';
                }
                else
                {
                    cout << 'W';
                }
            }
            cout << endl;

            for (int j = 0; j < 40; j++)
            {
                if (j == 0)
                {
                    tomorrow[j] = today[j] + today[j + 1];
                }
                else if (j == 39)
                {
                    tomorrow[j] = today[j - 1] + today[j];
                }
                else
                {
                    tomorrow[j] = today[j - 1] + today[j] + today[j + 1];
                }

                int K = tomorrow[j];

                tomorrow[j] = DNA[K];
            }

            today.assign(tomorrow.begin(), tomorrow.end());
        }
        t_case++;
        cout << endl;
    }
}