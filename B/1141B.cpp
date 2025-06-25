#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    int n; cin >> n;
    int arr[n]; for (auto &it: arr) cin >> it ;
    
    vector < int > v;
    int num = 0, max_rest = 0;
    for (int i = 0; i < n; i++ ) {
        if (arr[i] == 1) {
            num++; max_rest = max(num, max_rest);
            if ( arr[i+1] == 0 || i == n-1) v.emplace_back(num);
        }
        else {
            num = 0;
            v.emplace_back(0);
        }
    }
    max_rest = max(max_rest, v[0] + v[v.size()-1]);
    cout << max_rest << "\n";
    
    for (auto it: v) cerr << it << " ";
    return 0;
}
