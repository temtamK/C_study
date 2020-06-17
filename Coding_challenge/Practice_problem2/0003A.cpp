#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n, index = 0;

    map<int, int> data;

    for (int i = 0; i < 10; i++)
    {
        cin >> index;
        data[index]++;
    }

    for (auto ss : data)
    {
        cout << ss.first << " = " << ss.second << endl;
    }
}