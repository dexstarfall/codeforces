#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    int t; cin >> t;
    while(t--) {
        long long n, x, k; cin>> n >> x >> k;
        string str; cin >> str;
        
        int check = 0, moves_counter = 0;
        for ( int i = 0; i<n; i++) {
            if (str[i] == 'L') check--;
            else  check++;
            if (check==0 && i!= 0) {
                moves_counter = i+1;
                break;
            }
        }
        
        
        long long count = 0,keep = 0;
        for (long long i = 0,j = 1 ; i < n; i++,j++ ) {
            if (str[i] == 'L') x--;
            else if (str[i] == 'R') x++;
            if (x == 0) {
                count++;
                if (moves_counter !=0 ) keep = (k - j) /moves_counter;
                break;
            }
        }
        cout << count+keep <<"\n";

    }
    return 0;
}