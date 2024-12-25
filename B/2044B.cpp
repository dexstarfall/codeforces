#include <bits/stdc++.h>

using namespace std;

void solve() {
    string str;
    cin >> str;

    char temp;
    int last = str.length() - 1;
    for (int i = 0; i < last / 2; i++) {
        temp = str[i], str[i] = str[last - i], str[last - i] = temp;
    }
    
    for (int i = 0; i <= last; i++) {
        if (str[i] == 'p') str[i] = 'q';
        else if (str[i] == 'q') str[i] = 'p';
    }
    cout << str << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}