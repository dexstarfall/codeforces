#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_set <char> ch;

    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        ch.insert((char)tolower(c));
    }

    cout << (ch.size() == 26 ? "YES" : "NO") << endl;

}