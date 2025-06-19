#include <bits/stdc++.h>
using namespace std;

// solution function
void solve() {
    int n;
    cin >> n;

    int a, b, preb = 0, mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        preb = (preb - a) + b;
        if (preb > mx) mx = preb;
    }
    cout << mx;
}

//main function
int main() {
    solve(); 
    return 0;
}