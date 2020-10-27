#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector1;

    //4를 7개 채운다.
    vector1.assign(7, 4);

    int Count = vector1.size();
    for (int i = 0; i < Count; i++)
    {
        cout << "vector1 1: " << vector1[i] << endl;
    }
    cout << endl;

    vector<int> vector2;
    vector2.push_back(10);
    vector2.push_back(20);
    vector2.push_back(30);

    //vector2의 요소로 채운다.
    vector1.assign(vector2.begin(), vector2.end());
    Count = vector1.size();
    for (int i = 0; i < Count; ++i)
    {
        cout << "vector1 : " << vector1[i] << endl;
    }
    cout << endl;

    return 0;
}