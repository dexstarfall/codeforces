#include <bits/stdc++.h>
using namespace std;

int mininumStrength() {
    int n; cin >> n;
    int arr_strength[n];
    for (auto &it: arr_strength) cin >> it;
    
    sort(arr_strength,arr_strength+n);
    int min_str = arr_strength[n-1] - arr_strength[n-2];
    for (int i = 1; i < n; i++){
        int temp_str = arr_strength[i] - arr_strength[i-1];
        if (temp_str == 0 ) return 0;
        else if ( temp_str < min_str) min_str = temp_str ;
    }
    return min_str;
}

//main function
int main() {
    int t; cin >> t;
    while (t--) cout << mininumStrength() << "\n";
    return 0;
}