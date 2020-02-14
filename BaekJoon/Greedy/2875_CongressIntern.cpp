#include <iostream>

using namespace std;

int main()
{
    int n, m, k;

    cin >> n >> m >> k;

    while (k > 0)
    {
        k -= 1;
        n -= 1;

        k -= 1;
        n -= 1;

        k -= 1;
        m -= 1;
    }

    int team = 0;

    int n_value = n / 2;

    team = n_value > m ? m : n_value;
    printf("%d", team);

    return 0;
}