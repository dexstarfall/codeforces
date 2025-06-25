#include <bits/stdc++.h>

using namespace std;

void solve(int n) {
    for (int i = 2; i < 30; i++) {
        int denominator = (1 << i) - 1;    //  bitwise operator
        // int denominator = pow(2,i) - 1; // Calculate 2^i - 1
        if (n % denominator == 0) {
            cout << n / denominator;
            break;
        }
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}