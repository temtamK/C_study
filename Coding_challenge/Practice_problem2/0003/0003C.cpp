#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n = 0;
    string index;

    map<char, int> data;

    getline(cin, index);

    for (auto aa : index)
    {
        data[aa]++;
    }

    for (auto ss : data)
    {
        cout << ss.first << " = " << ss.second << endl;
    }
}