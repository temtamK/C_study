#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    while (1)
    {

        getline(cin, s);

        if (cin.eof())
        {
            break;
        }

        int word = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (isalpha(s[i - 1]) && isalpha(s[i]) == 0)
            {
                word++;
            }
        }
        cout << word << endl;
    }

    return 0;
}