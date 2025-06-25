#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    char arr[n][n];
    for (auto& rows : arr) {
        for (auto& elem : rows) cin >> elem;
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        int countr = 0, countc = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 'C') countr++;
            if (arr[j][i] == 'C') countc++;
        }
        total += (countr * (countr - 1)) / 2;
        total += (countc * (countc - 1)) / 2;
    }
    cout << total << " ";
    return 0;

}