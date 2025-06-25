#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, a;
    cin >> n;
    bool ok = true;
    vector < int > v(n);
    for (auto & i: v) cin >> i;
    sort(v.begin(), v.end());

    for (int i = 1; i < n; i++) {
        ok &= (v[i] - v[i - 1] <= 1);
    }
    if (ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}