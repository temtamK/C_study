#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s, a, num = "";
    int sum = 0;

    while (1)
    {
        getline(cin, s);
        if (cin.eof())
        {
            break;
        }

        for (auto ss : s)
        {
            if (isdigit(ss))
            {
                num += ss;
            }
            else if (!num.empty())
            {
                sum += atoi(num.c_str());

                switch (ss)
                {
                case 'b':
                    a = string(sum, ' ');
                    break;
                case 33:
                    a = "\n";
                    break;
                default:
                    a = string(sum, ss);
                    break;
                }

                cout << a;

                num = "";
                sum = 0;
            }
            if (ss == '\n')
            {
                cout << endl;
            }
        }
    }

    return 0;
}