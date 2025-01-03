#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y') {
                cout << "#Color" << endl;
                return 0;
            }
        }
    }
    cout << "#Black&White" << endl;
    return 0;
}