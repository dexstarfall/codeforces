#include <bits/stdc++.h>
using namespace std;

// solution function
int solve(int n, int height) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (a > height) sum += 2;
        else sum++;
    }
    return sum;
}

//main function
int main() {
    int n, h;
    cin >> n >> h;
    cout << solve(n, h);
    return 0;
}