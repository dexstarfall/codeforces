#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a; cin >> n >> a;
    int ls = max(a - 1, 0), rs = max(n - a, 0);
    int lc[ls], rc[rs];
    for (int i = ls - 1; i >= 0; i--) cin >> lc[i];
    int pos; cin >> pos;
    for (auto & it: rc) cin >> it;

    int total = pos;
    int minSize = min(ls, rs);
    for (int i = 0; i < max(ls, rs); i++) {

        if (i + 1 > minSize) {
            if (ls > rs) {
                total += lc[i] == 1 ? 1 : 0;
            } else if (ls < rs) {
                total += rc[i] == 1 ? 1 : 0;
            }
            continue;
        }
        if (lc[i] == 1 && rc[i] == 1) {
            total += 2;
        }
    }

    cout << total << "\n";
    return 0;
}