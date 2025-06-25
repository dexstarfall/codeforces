#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k; cin >> n >>k;
    int answer=0;
    
    int mn = max((min(n-k,k-1)),0);
    
    answer = mn + n-1 + (n*2) + 1;
    cout << answer <<"\n"; 
  return 0;
}