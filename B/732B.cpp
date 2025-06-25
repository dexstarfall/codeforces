#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k; cin >> n >> k;
    int arr[n]; for (auto &it: arr) cin >> it;
    int newArr[n]; newArr[0] = arr[0];
    
    int additionalWalks = 0;
    for (int i = 1; i < n; i++) {
        int s = newArr[i-1] + arr[i];
        if (s < k) {
            int val = k-s;
            additionalWalks += val;
            newArr[i] = val+arr[i];
        } else {
            newArr[i] = arr[i];
        }
    }
    
    cout << additionalWalks << "\n";
    for (auto &it: newArr) cout << it << " ";
  return 0;
}