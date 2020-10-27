#include <iostream>

using namespace std;

int main(void)
{
    int n, farmer, farm, cattle, grade, subsidy, result = 0;

    while (cin >> n >> farmer)
    {
        for (int i = 0; i < farmer; i++)
        {
            cin >> farm >> cattle >> grade;
            subsidy = farm * grade;
            result += subsidy;
        }
        cout << result << endl;
    }

    return 0;
}