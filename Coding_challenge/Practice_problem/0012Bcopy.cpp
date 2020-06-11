#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s, num;

    cin >> s;

    num = "";

    for (auto ss : s)
    {
        if (isdigit(ss))
        {
            num += ss;
        }
        else if (!num.empty())
        {
            cout << num << endl;
            num = "";
        }
    }
    if (!num.empty())
    {
        cout << num << endl;
    }

    return 0;
}