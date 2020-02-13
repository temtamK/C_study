#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Time
{
    int start;
    int finish;
};

bool cmp(Time f, Time s)
{
    if (f.finish == s.finish)
    {
        return (f.start < s.start); // 종료시간이 같다면, 시작시간이 빠른 순
    }
    else
    {
        return (f.finish < s.finish); // 같지 않다면, 종료시간이 빠른 순으로 정렬
    }
}

int main()
{

    int n; // 회의 개수
    cin >> n;

    //입력
    vector<Time> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i].start >> t[i].finish;
    }
    //정렬
    sort(t.begin(), t.end(), cmp);

    int cnt = 0; //회의 가능 수
    int end = 0; //회의 종료지점 저장

    for (int i = 0; i < t.size(); i++)
    {
        if (end <= t[i].start) // 회의 종료 시점이 다음 회의 시작지점보다 작으면
        {
            end = t[i].finish; //n에 다음 회의 종료 지점 저장
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}