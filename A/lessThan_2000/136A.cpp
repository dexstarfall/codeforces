#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int list[n], final[n];
    for (auto& i : list) cin >> i;

    for (int i = 0; i < n; i++) final[list[i] - 1] = i + 1;
    for (auto& i : final) cout << i << " ";
    cout << endl;
}

int main() {
    solve();
    return 0;
}