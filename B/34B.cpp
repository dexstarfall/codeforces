#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int arr[n];
    for (auto &it: arr) cin >> it;
    sort(arr, arr+n);
    int total_sum = 0;
    for(int i=0; i<m; i++) {
        if (arr[i] >= 0) break;
        total_sum+=abs(arr[i]);
    }
    cout << total_sum;
    
  return 0;
}