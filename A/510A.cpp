#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     char dir = 'r';
//     for (int i = 0; i < n; i++) {
//         if (i % 2 == 0) {
//             for (int j = 0; j < m; j++) {
//                 cout << "#";
//             }
//         } else if (dir == 'r') {
//             for (int j = 0; j < m - 1; j++) {
//                 cout << ".";
//             }
//             cout << "#";
//             dir = 'l';
//         } else if (dir == 'l') {
//             cout << "#";
//             for (int j = 0; j < m - 1; j++) {
//                 cout << ".";
//             }
//             dir = 'r';
//         }
//         cout << "\n";
//     }

// }

int main() {
    int n, m;
    cin >> n >> m;
    string fullrow = string(m, '#');
    string rightrow = string(m - 1, '.') + '#';
    string leftrow = '#' + string(m - 1, '.');

    for (int i = 1; i <= n; i++) {
        if (i % 4 == 0)  cout << leftrow;
        else if (i % 2 == 0) cout << rightrow;
        else cout << fullrow;
        cout << "\n";
    }
    return 0;
}