#include <bits/stdc++.h>
using namespace std;

// solution function
int solve(int n) {
    n -= 10;
    if (n <= 0 || n > 11) return 0;
    else if (n == 10) return 15;
    else return 4;
}

//main function
int main() {
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    cout << solve(n);
    return 0;
}