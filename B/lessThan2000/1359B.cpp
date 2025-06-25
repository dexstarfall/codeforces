#include <bits/stdc++.h>
using namespace std;

int main() {
    int _; cin >>_;
    while(_--) {
        int n, m, x, y; cin>> n >> m >> x >> y;
        char arr[n][m];
        for (auto &row: arr) {
            for (auto &column : row) cin >> column;
        }
        
        int one_sq =0, two_sq= 0;
        for (int i= 0; i < n; i++ ) {
            for (int j=0; j<m; j++) {
                char current = arr[i][j];
                if(current == '.' ) {
                    if( j+1 >= m ) one_sq++;
                    else if( current == arr[i][j+1]) {
                        two_sq++;
                        j++;
                    }
                    else one_sq++;
                }
            }
        }
        
        if ( x * 2 <= y) cout << x * (one_sq + (two_sq*2)) << "\n";
        else cout << (y*two_sq) + (x*one_sq) << "\n"; 
    }
  return 0;
}