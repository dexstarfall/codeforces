#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll l, r; cin >> l >> r;
    ll pair = (r-l+1)/2;
    cout << "YES" << "\n";
   for (ll i = 1; i<=pair; i++) {
       cout << l <<" "<< l+1 <<"\n";
       l+=2;
   }
  return 0;
}