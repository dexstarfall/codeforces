#include <bits/stdc++.h>
using namespace std;

int main() {
    int mat[5][5];
    int pos_i = -1, pos_j = -1;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 1) {
                pos_i = i + 1;
                pos_j = j + 1;
            }
        }
    }

    cout << abs(3 - pos_i) + abs(3 - pos_j) << endl;

    return 0;
}