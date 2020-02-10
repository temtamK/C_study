#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector1;

    vector1.push_back(20);
    vector1.push_back(30);

    cout << "삽입 테스트 1" << endl;

    //첫 번째 위치에 삽입한다.
    vector<int>::iterator iterInsertPos = vector1.begin();
    vector1.insert(iterInsertPos, 100);

    //100, 20, 30 순으로 출력한다.
    vector<int>::iterator iterEnd = vector1.end();
    vector<int>::iterator iterPos = vector1.begin();
    for (iterPos; iterPos != iterEnd; ++iterPos)
    {
        cout << "vector1 : " << *iterPos << endl;
    }

    cout << endl
         << "삽입 테스트 2" << endl;

    //두 번째 위치에 200을 2개 삽입
    iterInsertPos = vector1.begin();
    ++iterInsertPos;
    vector1.insert(iterInsertPos, 2, 200);

    //100, 200, 200, 20, 30순으로 출력
    iterEnd = vector1.end();
    iterPos = vector1.begin();
    for (iterPos; iterPos != iterEnd; ++iterPos)
    {
        cout << "vector1 : " << *iterPos << endl;
    }

    cout << endl
         << "삽입 테스트 3" << endl;

    vector<int> vector2;
    vector2.push_back(1000);
    vector2.push_back(2000);
    vector2.push_back(3000);

    //두 번째 위치에 vector2의 모든 데이터를 삽입
    iterInsertPos = vector1.begin();
    vector1.insert(++iterInsertPos, vector2.begin(), vector2.end());

    //100, 1000, 2000, 3000, 200, 200, 20, 30 순으로 출력
    iterEnd = vector1.end();
    iterPos = vector1.begin();
    for (iterPos; iterPos != iterEnd; ++iterPos)
    {
        cout << "vector1 : " << *iterPos << endl;
    }

    return 0;
}