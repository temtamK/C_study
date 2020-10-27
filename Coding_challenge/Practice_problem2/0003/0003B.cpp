#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int n, index = 0, comp = 0, save_index = 0;

    map<int, int> data;

    for (int i = 0; i < 10; i++)
    {
        cin >> index;
        data[index]++;
    }

    for (auto ss : data)
    {
        if (max(ss.second, comp) == ss.second)
        {
            save_index = ss.first;
        }
        comp = max(ss.second, comp);
    }

    cout << save_index;
}