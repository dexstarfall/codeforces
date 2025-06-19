#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >>t;
    while(t--) {
        int n; cin >> n;
        int gran[n]; for (auto &i : gran) cin >> i;
        
        sort(gran, gran + n);
        int all_gran =1; 
        for (int i=n-1; i>=0; i--) {
            if(gran[i] <= i+1 ) {
                all_gran = i+2;
                break;
            }
        }
        cout << all_gran <<"\n";
    }
  return 0;
}