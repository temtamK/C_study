//
// Created by taemin on 2020-06-05.
//

#include <iostream>

using namespace std;

int main() {
    string s;

    getline(cin, s);

    for (char c : s) {
        if(isupper(c) == 1) {
            cout << c;
        }
    }

    return 0;
}