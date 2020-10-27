#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector1;
    vector1.push_back(1);
    vector1.push_back(2);
    vector1.push_back(3);

    vector<int> vector2;
    vector2.push_back(10);
    vector2.push_back(20);
    vector2.push_back(30);
    vector2.push_back(40);
    vector2.push_back(50);

    int Count = vector1.size();
    for (int i = 0; i < Count; ++i)
    {
        cout << "vector 1 : " << vector1[i] << endl;
    }

    Count = vector2.size();
    for (int i = 0; i < Count; ++i)
    {
        cout << "vector 2 : " << vector2[i] << endl;
    }
    cout << endl;
    cout << endl;

    cout << "vector1과 vector2를 swap" << endl;

    vector1.swap(vector2);

    Count = vector1.size();
    for (int i = 0; i < Count; ++i)
    {
        cout << "vector 1 : " << vector1[i] << endl;
    }

    Count = vector2.size();
    for (int i = 0; i < Count; ++i)
    {
        cout << "vector 2 : " << vector2[i] << endl;
    }

    return 0;
}