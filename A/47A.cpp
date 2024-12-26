#include <bits/stdc++.h>
using namespace std;

// solution function
bool solve(int n) {
    for (int i = 1; i <= (n/2)+1; i++) {
        if ((i * (i + 1)) / 2 == n) return 1;
        if ((i * (i + 1)) / 2 > n) return 0;
    }
    return 0;
}

//main function
int main() {
    int n;
    cin >> n;
    cout << (solve(n) ? "YES" : "NO");
    return 0;
}