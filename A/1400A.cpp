#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string str, str_copy;
    cin >> n >> str;
    for (int i = 0; i < str.length(); i += 2) {
        str_copy += str[i];
    }
    cout << str_copy << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}