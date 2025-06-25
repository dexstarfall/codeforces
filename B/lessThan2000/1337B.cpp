#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int h, va, ls; cin >> h >> va >> ls;
        while (va--) {
            if (h <= 20) break;
            h = floor((h / 2) + 10);
        }
        cout << (h <= ls * 10 ? "YES" : "NO") << "\n";
    }
    return 0;
}