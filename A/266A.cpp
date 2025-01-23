#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    string str = "";
    cin >> n;
    cin >> str;

    int count = 0;
    for (int i = 1; i < n; i++) {
        if (str[i - 1] == str[i]) {
            count++;
        }
    }
    cout << count;
    return 0;
}