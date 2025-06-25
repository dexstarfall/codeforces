#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while ( t-- ) {
        int x, y; cin >> x >> y;
        if ( x > 3 ) cout << "YES" << "\n";
        else if ( x == 1 ) cout << ( y == 1 ? "YES" : "NO" ) << "\n";
        else cout << ( y <= 3 ? "YES" : "NO" ) << "\n";
    }
    return 0;
}