#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_ml = k * l, total_slice = c * d;
    cout << min({ total_ml/nl , total_slice , p/np }) / n << endl;
    
    return 0;
}