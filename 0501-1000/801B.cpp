#include <bits/stdc++.h>
using namespace std;

int main() {
    string x, y, z; cin >> x >> z;
    for (int i=0; i<x.size(); i++) {
        if (x[i] < z[i] ) {
            cout << -1;
            return 0;
        }
        if (x[i] >= z[i]) y+= z[i];
    }
    cout << y;
    return 0;
}