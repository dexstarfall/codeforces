#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int arr[n];
    for (auto& i : arr) cin >> i;

    int max = arr[0], min = arr[0];
    int max_index = 1, min_index = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) max = arr[i], max_index = i + 1;
        if (arr[i] <= min) min = arr[i], min_index = i + 1;
    }

    if (max_index < min_index)
        cout << n - min_index + max_index - 1 << endl;
    else cout << n - min_index + max_index - 2 << endl;
}

int main() {
    solve();
    return 0;
}