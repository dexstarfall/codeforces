#include <bits/stdc++.h>
using namespace std;

// solution function
int solve(int arr[], int a, int b) {
    int sum = 0;
    for (int i = a-1; i < b-1; i++) sum += arr[i];
    return sum;
}
//main function
int main() {
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    int arr[n-1], a , b;
    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }
    cin >> a >> b;

    cout << solve(arr, a, b);

    return 0;
}