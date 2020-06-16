#include <iostream>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int i = 0;

    while (i != s.size())
    {
        if (isdigit(s[i]) == 1)
        {
            cout << s[i];
            if (isalpha(s[i + 1]) == 1)
            {
                cout << endl;
            }
        }
        i++;
    }

    return 0;
}