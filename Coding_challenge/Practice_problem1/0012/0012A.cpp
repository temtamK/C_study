#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case 'A':
            cout << 1;
            break;
        case 'B':
            cout << 2;
            break;
        case 'C':
            cout << 3;
            break;
        default:
            cout << s[i];
            break;
        }
    }
}
