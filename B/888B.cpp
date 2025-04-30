#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string commands; cin >> commands;

    int l = 0, r = 0, u = 0, d = 0;
    for (int i = 0; i < n; i++) {
        switch (commands[i]) {
            case 'L':
                l++;
                break;
            case 'R':
                r++;
                break;
            case 'U':
                u++;
                break;
            case 'D':
                d++;
                break;
        }
    }
     int total = (min(l,r) + min (u,d)) << 1;
    cout << total << "\n";
    return 0;
}