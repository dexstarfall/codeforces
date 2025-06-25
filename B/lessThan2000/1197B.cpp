#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n]; for(auto &it: arr) cin >> it;
    
    sort(arr , arr+n);
    int day = 1;
    for (int i=0; i<n; i++) {
        if (day <= arr[i]) day++;
    }

    cout << day-1 << endl;
    return 0;
}