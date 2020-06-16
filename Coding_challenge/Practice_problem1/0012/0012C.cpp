#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s, num;

    int sum = 0;

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
            sum += atoi(num.c_str());
            num = "";
        }
    }
    if (!num.empty())
    {
        sum += atoi(num.c_str());
    }

    cout << sum << endl;

    return 0;
}