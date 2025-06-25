#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool check_seat = false;
    string str[n];
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        if (str[i][0] == 'O' && str[i][1] == 'O' && !check_seat) {
            str[i][0] = '+', str[i][1] = '+';
            check_seat = true;
        }
        if (str[i][3] == 'O' && str[i][4] == 'O' && !check_seat) {
            str[i][3] = '+', str[i][4] = '+';
            check_seat = true;
        }
    }
    if (check_seat) {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++) {
            cout << str[i] << endl;
        }
    } else cout << "NO";
        return 0;
}