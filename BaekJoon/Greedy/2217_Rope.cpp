//
// Created by taemin on 2020-02-06.
//

//
// Created by taemin on 2020-02-06.
//
#include <stdio.h>
#include <algorithm>

using namespace std;
int max(int a, int b) { return a > b ? a : b; }

int main() {
    int n, result = 0;

    int weight[100001] = {};

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &weight[i]);
    }

   sort(weight, weight + n);

    for (int j = 0; j < n; j++) {
        result = max(result, weight[j] * (n-j));
    }

    printf("%d", result);

    return 0;
}



