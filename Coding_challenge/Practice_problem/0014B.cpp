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
    set<char> C;

    if (A.find(' ') != A.end())
    {
        A.erase(' ');
    }

    if (B.find(' ') != B.end())
    {
        B.erase(' ');
    }

    for (auto aa : A)
    {
    }

    cout << endl;

    for (auto bb : B)
    {
    }
    cout << endl;
}