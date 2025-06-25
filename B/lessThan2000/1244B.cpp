#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string str; cin >> str;
        int left = 0, right = 0;
        for (int i=0; i<n; i++ ) {
            if(str[i] == '1') {
                left = i+1;
            }
        }
        for (int i=n-1; i>=0; i-- ) {
            if(str[i] == '1') {
                right = n-i;
            }
        }
        int visits = max(left, right);
        cout << (visits == 0 ? n : visits * 2 ) << "\n";
    }
    return 0;
}
