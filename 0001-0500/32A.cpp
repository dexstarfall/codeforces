#include <bits/stdc++.h>

using namespace std;

// solution function
int solve(int n, int d, int arr[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || abs(arr[i] - arr[j]) > d) continue;
            count++;
        }
    }
    return count;
}

//main function
int main() {

    int n, d;
    cin >> n >> d;
    int arr[n];
    for (auto & i: arr) cin >> i;
    cout << solve(n, d, arr);

    return 0;
}
