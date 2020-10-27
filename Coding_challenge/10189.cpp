#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int col, row;
    int i, j, ii, jj;
    int f(1);

    while (cin >> col >> row)
    {
        /* code */
        if (col == 0)
        {
            /* code */
            break;
        }

        if (f > 1)
        {
            /* code */
            cout << endl;
        }
        cout << "Field #" << f++ << ":" << endl;

        vector<string> mine(col);
        vector<vector<int>> board;
        for (i = 0; i < col; i++)
        {
            cin >> mine[i];
            board.push_back(vector<int>(row, 0));
        }

        for (i = 0; i < col; i++)
        {
            for (j = 0; i < row; j++)
            {
                if (mine[col][row] != '*')
                {
                    /* code */
                    continue;
                }
                for (ii = max(0, i - 1); ii <= min(col - 1, i + 1); ii++)
                {
                    for (jj = max(0, j - 1); jj <= min(row - 1, j + 1); jj++)
                    {
                        /* code */
                        board[ii][jj]++;
                    }
                }
            }
        }

        for (i = 0; i < col; i++)
        {
            for (j = 0; j < row; j++)
            {
                if (mine[i][j] == '*')
                {
                    /* code */
                    cout << '*';
                }
                else
                {
                    cout << board[i][j];
                }
            }
            cout << endl;
        }
    }
}