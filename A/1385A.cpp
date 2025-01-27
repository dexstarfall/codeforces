#include <bits/stdc++.h>

using namespace std;

void solve() {
    vector < int > v(3);
    for (auto& it : v) cin >> it;
    sort(v.begin(), v.end());

    if (v[1] != v[2]) cout << "NO" << endl;
    else {
        cout << "YES" << endl << v[0] << " " << v[0] << " " << v[2] << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}