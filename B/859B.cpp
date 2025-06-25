#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    double sq = sqrt(n);
    int l = sq, b = sq;
    if ((sq - l) < 0.5 && (sq - l) != 0) {
        b++;
    } else if (sq - l >= 0.5) {
        l++, b++;
    }

    cout << 2 * (l + b) << "\n";
    return 0;
}