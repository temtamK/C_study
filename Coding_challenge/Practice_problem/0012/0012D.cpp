#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i;
    char c;

    cin >> i >> c;

    string s(i, c);

    cout << s;
}