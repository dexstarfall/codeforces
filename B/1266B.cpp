#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long int x; cin >> x;
        long long int remain = x % 14;
        if (x <= 14 || remain == 0 || remain >= 7) {
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
        }
    }
  return 0;
}