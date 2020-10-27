#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 100000;

int N;
pair<int, int> newComer[MAX];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); //실행속도 향상
    int test_case;
    cin >> test_case;

    for (int t = 0; t < test_case; t++)
    {
        cin >> N;

        for (int i = 0; i < N; i++)
        {
            cin >> newComer[i].first >> newComer[i].second;
        }
        sort(newComer, newComer + N);

        int result = 1;                         //첫번째 사원은 무조건 선발(서류심사 1등)
        int interviewRank = newComer[0].second; //첫번째 사원의 인터뷰 심사 성적

        for (int i = 1; i < N; i++)
        {
            //기존의 인터뷰 심사 성적보다 높은 성적인 사람 채용
            if (newComer[i].second < interviewRank)
            {
                result++;
                //인터뷰 심사 성적 업데이트
                interviewRank = newComer[i].second;
            }
        }
        cout << result << endl;
    }
    return 0;
}