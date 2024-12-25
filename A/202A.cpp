#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    char max;
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (max < s[i]) {
            max = s[i];
            count = 1;
        } else if (max == s[i]) count++;
    }
    for (int i = 1; i <= count; i++) cout << max;
}

int main() {
    solve();
    return 0;
}