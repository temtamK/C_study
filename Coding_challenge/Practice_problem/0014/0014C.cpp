#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    set<int> a, b, c;
    int i, x;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        a.insert(x);
    }

    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        b.insert(x);
    }

    for (auto aa : a)
    {
        if (b.find(aa) != b.end())
        {
            c.insert(aa);
        }
    }

    for (auto cc : c)
    {
        cout << cc << " ";
    }
    cout << endl;
}