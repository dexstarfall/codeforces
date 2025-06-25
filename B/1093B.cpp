#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    int t; cin >> t;
    while (t--) {
        string str; cin >> str;
        int len = str.length();

        if ((str[0] == str[len - 1] && len == 2) || (len == 1)) {
            cout << -1 << "\n";
        } else if (str[0] != str[len - 1]) {
            cout << str << "\n";
        } else {
            for (int i = 1; i < len - 1; i++) {
                
                if (str[0] == str[i] && i == len - 2) {
                    cout << -1 << "\n";
                    break;
                } else if (str[0] != str[i]) {
                    char a = str[i], b = str[len - 1];
                    str[len - 1] = a, str[i] = b;
                    cout << str << "\n";
                    break;
                }
            }
        }
    }
    return 0;
}