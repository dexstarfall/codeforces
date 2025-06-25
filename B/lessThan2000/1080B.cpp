#include <bits/stdc++.h>
using namespace std;
 
long long fSum(long long s){
    if ( s%2 == 0 ) return s/2;
    else return (-s + ((s-1)/2) );
}
 
//main function
int main() {
    int t; cin >> t;
    while(t--) {
        int l, r; cin>> l >> r;
        long long sum = fSum(r) - fSum(l-1);
        cout<< sum <<"\n";
    }
    return 0;
}