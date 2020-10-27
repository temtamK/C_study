#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector1;

    vector1.push_back(10);
    vector1.push_back(20);
    vector1.push_back(30);
    vector1.push_back(40);
    vector1.push_back(50);

    int Count = vector1.size();
    for (int i = 0; i < Count; ++i)
    {
        cout << "vector 1 : " << vector1[i] << endl;
    }
    cout << endl;

    cout << "erase 테스트 1" << endl;

    //첫 번째 데이터 삭제
    vector1.erase(vector1.begin());

    //20, 30, 40, 50 출력
    Count = vector1.size();
    for (int i = 0; i < Count; ++i)
    {
        cout << "vector 1 : " << vector1[i] << endl;
    }

    cout << endl
         << "erase 테스트" << endl;

    //첫 번째 데이터에서 마지막까지 삭제
    vector<int>::iterator iterPos = vector1.begin();
    vector1.erase(iterPos, vector1.end());

    if (vector1.empty())
    {
        cout << "vector1에 아무 것도 없습니다." << endl;
    }

    return 0;
}