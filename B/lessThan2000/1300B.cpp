#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n*2]; for (auto &it: arr) cin >> it;
        sort(arr, arr+n*2);
        cout << arr[n] - arr[n-1] << endl;
    }
  return 0;
}