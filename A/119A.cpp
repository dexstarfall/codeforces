#include <bits/stdc++.h>
using namespace std;

// calculate gcd
int gcd(int n, int left) {
    while (left) {
        n %= left;
        swap(n, left);
    }
    return n;
}

//check win a or b
bool winner(int n1, int n2, int left) {
    while (1) {
        left -= gcd(n1, left);
        if (left == 0) return 0;

        left -= gcd(n2, left);
        if (left == 0) return 1;
    }
}

// solution
void solve() {
    int a, b, k;
    cin >> a >> b >> k;
    cout << (winner(a, b, k) ? "0" : "1");
}

// main
int main() {
    solve();
    return 0;
}