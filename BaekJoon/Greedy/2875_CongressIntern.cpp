#include <iostream>

#include <algorithm>

using namespace std;

int main(void)

{

    int N, M, K;

    cin >> N >> M >> K;

    // 여자가 적을 때, 남자가 적을 때, 남자와 여자가 같을 때

    cout << min(min(N / 2, M), (N + M - K) / 3) << "\n";

    return 0;
}

// 방법 2
// #include<iostream>
// #include<cstdio>
// #include<algorithm>
// using namespace std;
// int N, M, K, num = 0;
// int main(void) {
// 	cin.tie(NULL);
// 	cout.tie(NULL);

// 	cin >> N >> M >> K;
// 	while (1) {
// 		if (K <= (N - 2 + M - 1) && N>=2 && M>=1) {
// 			N -= 2;
// 			M -= 1;
// 			num++;
// 		}
// 		else break;
// 	}
// 	cout << num;
// }