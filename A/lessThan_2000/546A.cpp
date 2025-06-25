#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int sum = (w * (w + 1)) / 2;
    cout << max((sum * k) - n, 0) << "\n";
    return 0;
}