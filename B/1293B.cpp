#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    long double price = 0;
    for (float i=n; i>=1; i--) {
        price+= 1/i;
    }
    cout << price << "\n";
  return 0;
}