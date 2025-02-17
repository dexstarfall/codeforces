#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int left_candies = max((n % k) - (k / 2), 0);
        cout << n - left_candies << "\n";
    }
    return 0;
}