#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    int n; cin >> n;
    vector<int> v_odd, v_even;

    for ( int i = 0; i < n; i++ ) {
        int num; cin >> num;
        if ( num % 2 ) v_odd.emplace_back( num );
        else v_even.emplace_back( num );
    }

    int e_size = v_even.size(), o_size = v_odd.size();
    long long sum = 0;
    if ( abs( e_size - o_size ) <= 1 ) sum = 0;
    else {
        sort( v_odd.begin(), v_odd.end() );
        sort( v_even.begin(), v_even.end() );

        int i = abs( e_size - o_size ) - 2;
        if ( e_size > o_size ) for ( ; i >= 0; i-- ) sum += v_even[i];
        else if ( o_size > e_size ) for ( ; i >= 0; i-- ) sum += v_odd[i];
    }

    cout << sum << "\n";
    return 0;
}