#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string num;
    cin >> n >> num;

    int l = 0, r = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (num[i] == '4' or num[i] == '7') {
            if (count < n / 2) l += num[i] - '0';
            else r += num[i] - '0';
            count++;
        } else break;
    }

    cout << (count == n and l == r ? "YES" : "NO") << endl;

    return 0;
}