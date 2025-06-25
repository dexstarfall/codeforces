#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, m, k; cin >> n >> m >> k;
    int arr[n]; for (auto &it: arr) cin >> it;
    
    sort(arr, arr+n);
    ll lg = arr[n-1], slg = arr[n-2];
    ll q = m / (k+1), r = m % (k+1);
    ll ans = q*( slg + lg*k ) + (lg*r);
    
    cout << ans <<"\n";
  return 0;
}