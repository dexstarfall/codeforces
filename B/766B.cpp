#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n]; for (auto &it: arr) cin >> it;
    sort(arr,arr+n);
    for (int i=1;i<n-1;i++) {
        if (arr[i-1]+arr[i]>arr[i+1]) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
  return 0;
}