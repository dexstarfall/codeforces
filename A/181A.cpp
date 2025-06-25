#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    char mat[n][m];
    for (auto & row: mat) {
        for (auto & col: row) {
            cin >> col;
        }
    }
    int star, x, y;
    for (int i = 0; i < n; i++) {
        
        star = 0;
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == '*') star++;
        }
        
        if (star == 1) {
            x = i + 1;
            break;
        }
    }
    for (int i = 0; i < m; i++) {
        
        star = 0;
        for (int j = 0; j < n; j++) {
            if (mat[j][i] == '*') star++;
        }
        
        if (star == 1) {
            y = i + 1;
            break;
        }
    }

    cout << x << " " << y << endl;

}

int main() {
    solve();
    return 0;
}