#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    int n, m;
    cin >> n >> m;

    bool arr[n][m * 2] = { false };
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m * 2; j++) cin >> arr[i][j];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m * 2; j += 2) {
            if (arr[i][j] == 1 || arr[i][j + 1] == 1) sum++;
        }
    }
    cout << sum;
    return 0;
}