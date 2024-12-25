#include <bits/stdc++.h>
using namespace std;

// solution function
bool solve(int n, int m) {
    bool isPrime = 0;
    for (int i = n + 1; i <= m; i++) {
        isPrime = 1;
        for (int j = 2; j < (m / 2)+1; j++) {
            if (i % j == 0) isPrime = 0;
        }
        // cout << i << " " << isPrime << endl;
        if ((isPrime == 1 && i != m) || (isPrime == 0 && i == m)) {
            return 0;
        }
    }
    return 1;
}

//main function
int main() {
    int n, m;
    cin >> n >> m;

    cout << (solve(n, m) ? "YES" : "NO");
    return 0;
}