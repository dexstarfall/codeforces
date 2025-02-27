#include <bits/stdc++.h>
using namespace std;
 
//main function
int main() {
    int q; cin >> q;
    while(q--){
        long long n, k; cin >> n >> k;
        long long arr[n];
        for (auto &it :arr) cin >> it;
        
        sort(arr, arr + n);
        
        if (arr[0] + k >= arr[n-1] - k) cout << arr[0] + k << "\n";
        else cout << -1 << "\n";
        
        for (auto &it :arr) cerr << it << " ";
        cerr << "\n";
    }
    return 0;
}