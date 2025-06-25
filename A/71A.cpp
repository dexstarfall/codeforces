#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string ch;
        cin >> ch;
        int len = ch.length();

            if (len > 10) 
                cout << ch[0] << len - 2 << ch[len - 1] << endl;
            else cout << ch << endl;
    }

    return 0;
}