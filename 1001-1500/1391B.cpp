#include <bits/stdc++.h>
using namespace std;

int minChange(){
    int n, m; cin >> n >> m;
    char con_belt[n][m];
    int min_change = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) {
            char ch; cin >> ch;
            con_belt[i][j] = ch;
            if ( j == m - 1 && ch == 'R') min_change++;
            if ( i == n - 1 && ch == 'D') min_change++;
        }
    }
    return min_change;
}

//main function
int main() {
    int t; cin >> t;
    while (t--) cout << minChange() << "\n";
    return 0;
}