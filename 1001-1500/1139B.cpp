#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n]; for (auto &it: arr) cin >> it;
    
    long long total = arr[n-1];
    for (int i=n-1; i>=0 ; i--) {
        if (arr[i] - 1 <= 0 || i-1<0 ) break; 
        if (arr[i-1] >= arr[i] ) arr[i-1] = arr[i] - 1;
        total+= arr[i-1]; 
    }
    cout << total << "\n"; 
  return 0;
}