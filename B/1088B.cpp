#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k; cin >> n >> k;
    int arr[n]; for (auto &it: arr) cin >> it;
    
    sort(arr, arr+n);
    int mn = 0;
    for (int i = 0; k--; i++) {
        if (i>=n) {k++; break;}
        arr[i] -= mn;
        mn += arr[i];
        if (arr[i] == 0) { k++; continue; }
        cout << arr[i] << "\n";
    }

    if (k>0) while (k--) cout << 0 << "\n";
    
  return 0;
}