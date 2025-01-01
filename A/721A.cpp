#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;
    int count = 0, ans = 0;
    string str2;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'B') {
            count++;
        } else if (count != 0) {
            str2 += to_string(count) + " ";
            count = 0, ans++;
        }
        if (str[i] == 'B' && i == n - 1) str2 += to_string(count);
    }
    cout << ans << endl;
    cout << str2;
    return 0;
}