#include <bits/stdc++.h>

using namespace std;

// solution function
int solve(int n, int m) {

    for (int i = 1; m > 0 && m >= i; i++) {
        m -= i;
        if (i == n) i = 0;
    }
    return abs(m);
}

//main function
int main() {
    int n, m;
    cin >> n >> m;
    cout << solve(n, m) << endl;

    return 0;
}