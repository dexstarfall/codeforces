#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    int u_count = 0;
    for (auto i : s) {
        if (isupper(i)) {
            u_count++;
            if (u_count > s.length() / 2) return true;
        }
    }
    return false;   
}

int main() {
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    if (check(s)) {
        // change to upper
        for (auto& i : s) {
            i = toupper(i);
        }
    } else {
        // change to lower
        for (auto& i : s) {
            i = tolower(i);
        }
    }
    cout << s << endl;
    return 0;
}

