#include <iostream>
#include <string>

using namespace std;

int main()
{
    int d = '*' - '1';
    string s;
    while (1)
    {
        getline(cin, s);
        if (cin.eof())
        {
            break;
        }
        for (auto c : s)
        {
            cout << char(c + d);
        }
        cout << endl;
    }

    return 0;
}