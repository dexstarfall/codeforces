#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int r = 0;
        if (n%15 == 1) r = 1;
        else if (n%15 >= 2) r= 2;
        cout<< 1 + ( 3*(n/15) ) + r <<"\n";
    }
    return 0;
}