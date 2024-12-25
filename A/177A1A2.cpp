#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int mat[n][n];
    for (auto& row : mat) {
        for (auto& elem : row) {
            cin >> elem;
        }
    }

    int n1 = n - 1, sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i or j == n1 - i or i == n1 / 2 or j == n1 / 2)
                sum += mat[i][j];
        }
    }

    cout << sum << endl;
}

int main() {
    solve();
    return 0;
}