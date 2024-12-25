#include <bits/stdc++.h>

using namespace std;

void solve() {

    int m, a, b, c;
    cin >> m >> a >> b >> c;

    cout << (2 * m) - max(max(m - a, 0) + max(m - b, 0) - c, 0) << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}