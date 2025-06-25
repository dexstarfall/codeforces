#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    int n; cin >> n;
    int n_arr[n];
    for ( auto& it : n_arr ) cin >> it;
    sort( n_arr, n_arr + n );

    int min_instable = min( n_arr[n - 1] - n_arr[1], n_arr[n - 2] - n_arr[0] );
    cout << min_instable << "\n";
    return 0;
}