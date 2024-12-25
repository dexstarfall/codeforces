#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    string s = s1 + s2;
    sort(s.begin(), s.end());
    sort(s3.begin(), s3.end());
    cout << (s == s3 ? "YES" : "NO") << endl;
}

int main() {
    solve();
    return 0;
}