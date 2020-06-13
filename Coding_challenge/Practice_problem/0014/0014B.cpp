#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string a, b;

    getline(cin, a);
    getline(cin, b);

    set<char> A(a.begin(), a.end());
    set<char> B(b.begin(), b.end());

    if (A.find(' ') != A.end())
    {
        A.erase(' ');
    }

    for (auto bb : B)
    {
        if (A.find(bb) != A.end())
        {
            A.erase(bb);
        }
    }

    for (auto aa : A)
    {
        cout << aa << ' ';
    }
}