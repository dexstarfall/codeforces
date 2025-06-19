#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n]; for (auto &it: arr) cin >> it;
    
    bool didBreak = false;  
    int mx = 0, breakPos;
    for (int i=0; i<n; i++) {
        if (arr[i] > mx) {
            didBreak = true, breakPos = i+1;
            break;
        }
        mx = max(mx, arr[i]+1);
    }
    if (didBreak) cout << breakPos << "\n";
    else cout << -1 << "\n";
    
    
    
  return 0;
}