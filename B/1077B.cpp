#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n]; for (auto &it: arr) cin >> it;
    
    int count = 0;
    for (int i=0; i <n-1; i++) {
        if (arr[i-1]==1 && arr[i]==0 && arr[i+1]==1) {
            count++;
            arr[i+1] = 0;
        }
    }
    cout << count << "\n";
  return 0;
}