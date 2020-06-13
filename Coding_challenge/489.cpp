#include <iostream>
#include <set>

using namespace std;

int main()
{
    int round = 0;
    string a, p;
    set<char> answer, player_answer;

    while (round != -1)
    {
        int Yeah = 0;
        int i = 0;

        cin >> round >> a >> p;

        if (round == -1)
        {
            break;
        }

        answer.insert(a.begin(), a.end());
        player_answer.insert(p.begin(), p.end());

        printf("Round %d\n", round);

        for (auto aa : answer)
        {
            for (set<char>::iterator IterPos = player_answer.begin(); IterPos != player_answer.end(); ++IterPos)
            {
                i++;
                if (*IterPos == aa)
                {
                    Yeah += 1;
                    break;
                }
                if (i > 7)
                {
                    cout << "You lose." << endl;
                    break;
                }
            }

            if (Yeah == answer.size())
            {
                cout << "You win." << endl;
                break;
            }
        }

        if (Yeah != answer.size() && p.size() < 8)
        {
            cout << "You chickened out." << endl;
        }
        else if (Yeah != answer.size() && p.size() > 7)
        {
            cout << "You lose." << endl;
        }
    }

    return 0;
}